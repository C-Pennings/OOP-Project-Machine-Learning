#include "FileData.h"

FileData::FileData() {}

FileData::~FileData() {}

void FileData::loadFromFile(std::string fileName) {

}

void FileData::saveToFile(std::string fileName) {

}

std::vector<Data> FileData::getData() {
	return data;
}

void FileData::setData(std::vector<Data> data) {
	this->data = data;
}
