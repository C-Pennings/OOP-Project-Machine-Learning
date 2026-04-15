#include "Interface.h"
#include "AnotherClassifer.h"
#include "NNClassifer.h"
#include "KNNClassifer.h"
#include <iostream>

void Interface::setClassifer(int type)
{
	switch (type)
	{
	case 1:
		classifier = new NNClassifer();
		break;
	case 2:
		classifier = new KNNClassifer();
		break;
	case 3:
		classifier = new AnotherClassifer();
		break;
	default:
		std::cout << "Invalid classifier type" << std::endl;
		classifier = nullptr;
	}
}

void Interface::loadTrainingData(std::string fileName)
{
	trainingData.loadFromFile(fileName);
	if (classifier != nullptr)
	{
		classifier->setTrainingData(trainingData.getData());
	} else {
		std::cout << "Please set a classifier before loading training data." << std::endl;
	}
}

void Interface::enterSampleData(int x, int y, int z)
{
	Data sample = {x, y, z};
	if (classifier != nullptr)
	{
		int result = classifier->classify(sample);
		std::cout << "Classification result: " << result << std::endl;
	} else {
		std::cout << "Please set a classifier before entering sample data." << std::endl;
	}
}

void Interface::loadSampleData(std::string fileName)
{
	std::vector<Data> resultData;
	FileData sampleData;
	FileData resultDataFile;
	sampleData.loadFromFile(fileName);

	for (Data& sample : sampleData.getData())
	{
		if (classifier != nullptr)
		{
			int result = classifier->classify(sample);
			resultData.push_back({ result, sample.x, sample.y, sample.z });
			std::cout << "Classification result for (" << sample.x << ", " << sample.y << ", " << sample.z << "): " << result << std::endl;
		} else {
			std::cout << "Please set a classifier before loading sample data." << std::endl;
			break;
		}
	}

	resultDataFile.setData(resultData);
	resultDataFile.saveToFile("results.txt");
}

Interface::Interface() {
	classifier = nullptr;
}

Interface::~Interface() {
	if (classifier != nullptr) {
		delete classifier;
	}
}

void Interface::run() {
	bool running = true;

	while (running) {
		std::cout << "Menu:" << std::endl;
		std::cout << "1. Load training data" << std::endl;
		std::cout << "2. Enter sample data" << std::endl;
		std::cout << "3. Load sample data from file" << std::endl;
		std::cout << "4. Set classifier" << std::endl;
		std::cout << "5. Exit" << std::endl;

		int choice;
		std::cin >> choice;

		switch (choice) {
			case 1: {
				std::string fileName;
				std::cout << "Enter training data file name: ";
				std::cin >> fileName;
				loadTrainingData(fileName);
				break;
			}
			case 2: {
				int x, y, z;
				std::cout << "Enter sample data (x y z): ";
				std::cin >> x >> y >> z;
				enterSampleData(x, y, z);
				break;
			}
			case 3: {
				std::string fileName;
				std::cout << "Enter sample data file name: ";
				std::cin >> fileName;
				loadSampleData(fileName);
				break;
			}
			case 4: {
				int type;
				std::cout << "Enter classifier type (1: NN, 2: KNN, 3: Another): ";
				std::cin >> type;
				setClassifer(type);
				break;
			}
			case 5: {
				running = false;
				break;
			}
			default: {
				std::cout << "Invalid choice. Please try again." << std::endl;
				break;
			}
		}
	}
}