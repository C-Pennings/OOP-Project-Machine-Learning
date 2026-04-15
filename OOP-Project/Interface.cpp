#include "Interface.h"
#include "AnotherClassifer.h"
#include "NNClassifer.h"
#include "KNNClassifer.h"
#include <iostream>
#include <string>

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

	std::cout << "Classifier set to type " << type << std::endl;
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

	std::cout << "Training data loaded from " << fileName << std::endl;
}

void Interface::enterSampleData(double x, double y, double z)
{
	Data sample = {x, y, z};
	if (classifier != nullptr)
	{
		Data result = classifier->classify(sample);
		std::string name;
		switch (result.label) {
			default:
				name = "Unknown";
				break;
			case 1:
				name = "Face Down";
				break;
			case 2:
				name = "Face Up";
				break;
			case 3:
				name = "Portrait Upside Down";
				break;
			case 4:
				name = "Portrait Upright";
				break;
			case 5:
				name = "Landscape Left";
				break;
			case 6:
				name = "Landscape Right";
				break;
			}
		std::cout << "Classification result: " << name << std::endl;
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
			Data result = classifier->classify(sample);
			resultData.push_back(result);
			std::string name;
		} else {
			std::cout << "Please set a classifier before loading sample data." << std::endl;
			break;
		}
	}

	resultDataFile.setData(resultData);
	resultDataFile.saveToFile("results.txt");
	std::cout << "Classification results saved to results.txt" << std::endl;
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

		char choice;
		std::cin >> choice;

		switch (choice) {
			case '1': {
				std::string fileName;
				std::cout << "Enter training data file name: ";
				std::cin >> fileName;
				loadTrainingData(fileName);
				break;
			}
			case '2': {
				double x, y, z;
				std::cout << "Enter sample data: " << std::endl;
				std::cout << "X: ";
				std::cin >> x;
				std::cout << "Y: ";
				std::cin >> y;
				std::cout << "Z: ";
				std::cin >> z;
				enterSampleData(x, y, z);
				std::cout << std::endl;
				break;
			}
			case '3': {
				std::string fileName;
				std::cout << "Enter sample data file name: ";
				std::cin >> fileName;
				loadSampleData(fileName);
				break;
			}
			case '4': {
				int type;
				std::cout << "Enter classifier type (1: NN, 2: KNN, 3: Another): ";
				std::cin >> type;
				if (type == 2 || type == 3) {
					std::cout << "Warning: This classifier is not implemented yet. NN Classifer is the only one that works." << std::endl;
				}
				else {
					setClassifer(type);
				}
				
				break;
			}
			case '5': {
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