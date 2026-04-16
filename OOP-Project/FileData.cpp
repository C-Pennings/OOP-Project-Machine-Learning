#include "FileData.h"
#include <iostream>
#include <fstream>
#include <sstream>

void FileData::loadFromFile(std::string fileName) {
	std::ifstream file(fileName);
	if (!file.is_open()) {
		std::cerr << "Error opening file: " << fileName << std::endl;
		return;
	}
	//file format : x,y,z,label,name
	//file types  : float, float, float, int, string
	
	std::string line;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string token;
		Data data;
		if (std::getline(iss, token, ',')) {
			data.x = std::stof(token);
		}
		if (std::getline(iss, token, ',')) {
			data.y = std::stof(token);
		}
		if (std::getline(iss, token, ',')) {
			data.z = std::stof(token);
		}
		if (std::getline(iss, token, ',')) {
			data.label = std::stoi(token);
		}

		this->data.push_back(data);
	}
}

void FileData::saveToFile(std::string fileName) {
	std::ofstream file(fileName);
	if (!file.is_open()) {
		std::cerr << "Error opening file: " << fileName << std::endl;
		return;
	}

	for (Data& data : this->data) {
		file << data.x << "," << data.y << "," << data.z << "," << data.label << ",";
		switch (data.label) { // all six cases should be implemented here
		default:
			file << "Unknown" << std::endl;
			break;
		case 1:
			file << "Face Down" << std::endl;
			break;
		case 2:
			file << "Face Up" << std::endl;
			break;
		case 3:
			file << "Portrait Upside Down" << std::endl;
			break;
		case 4:
			file << "Portrait Upright" << std::endl;
			break;
		case 5:
			file << "Landscape Left" << std::endl;
			break;
		case 6:
			file << "Landscape Right" << std::endl;
			break;
		}
		
	}
}

std::vector<Data> FileData::getData() {
	return data;
}

void FileData::setData(std::vector<Data> data) {
	this->data = data;
}


