#pragma once
#include "FileData.h"
#include "Classifer.h"
#include <string>
class Interface
{
private:
	FileData trainingData;
	Classifer* classifier;

public: 
	Interface();
	~Interface();
	void loadTrainingData(std::string fileName);
	void enterSampleData(int x, int y, int z);
	void setClassifer(int type);
	void loadSampleData(std::string fileName);
	void run();
};

