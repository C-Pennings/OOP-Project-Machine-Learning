#pragma once
/// @brief This file holds the base class for all classifiers.
/// @details The file uses vectors include for storing data.
/// @author Charlie
/// @date 4/15/2026

#include "DataStruct.h"
#include <vector>

/// @brief This class is the base class for all classifiers.
/// @details This base class has a vector to hold the training data as well as a pure virtual function used for classifying the data. The classify function allows all subclasses to classify the data in its own way.
/// @author Charlie
/// @date 4/15/2026
class Classifer
{
protected:
	std::vector<Data> trainingData;
public:
	/// @brief Constructor for Classifer class.
	/// @details The base constructor does not do anything because the class is ment to be a base class and is not meant to be used on its own.
	/// @author Charlie
	/// @date 4/15/2026
	Classifer();

	/// @brief Destructor for Classifer class.
	/// @details The base destructor does not do anything because the class is ment to be a base class and is not meant to be used on its own.
	/// @author Charlie
	/// @date 4/15/2026
	~Classifer();

	/// @brief Function to input the training data for classifiers
	/// @details This function is used for all classifiers class to input the training data.
	/// @param data This is a vector of DataStructs that is used to input and store the data.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void setTrainingData(std::vector<Data> data);

	/// @brief Pure virtual function for classifying data.
	/// @details This function is used to find what direction the phone is facing.
	/// @param sample This is the data point that will be checked to see what direction the phone is facing.
	/// @return returns the data point with a set label.
	/// @author Charlie
	/// @date 4/15/2026
	virtual Data classify(Data sample) = 0;
};

