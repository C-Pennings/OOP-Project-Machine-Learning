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
	void enterSampleData(double x, double y, double z);
	void setClassifer(int type);
	void loadSampleData(std::string fileName);
	void run();
};

