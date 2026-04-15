#pragma once
#include <vector>
#include "DataStruct.h"
#include <fstream>
#include <string>

class FileData //can be used to load and save data to and from files
{
private:
	std::vector<Data> data;
public:
	FileData();
	~FileData();
	void loadFromFile(std::string fileName);
	void saveToFile(std::string fileName);
	std::vector<Data> getData();
	void setData(std::vector<Data> data);
};

