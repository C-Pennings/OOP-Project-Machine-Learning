#pragma once
/// @brief This file loads and saves file.
/// @details This file holds the FileData class which can save and load data from txt files and then stores or input from strings and vectors.
/// @author Charlie
/// @date 4/15/2026

#include <vector>
#include "DataStruct.h"
#include <fstream>
#include <string>

/// @brief This class loads and save txt files
/// @details This class has functions to load and save data from txt files as well as a way to store and retrieve the data in the system.
/// @author Charlie
/// @date 4/15/2026
class FileData
{
private:
	std::vector<Data> data;
public:
	/// @brief Loads data from txt file.
	/// @details This function takes a fileName input and then loads the data from the file in to the data vect.or.
	/// @param  fileName Name of the file you want the data from.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void loadFromFile(std::string fileName);

	/// @brief Saves data to txt file.
	/// @details This function takes a fileName input and then saves data from the data vector to the file.
	/// @param  fileName Name of the file you want to save the data to.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void saveToFile(std::string fileName);

	/// @brief Get the stored data
	/// @details Returns the data vector that is stored in the class.
	/// @param N/A
	/// @return The data vector stored in the class.
	/// @author Charlie
	/// @date 4/15/2026
	std::vector<Data> getData();

	/// @brief Set the stored data
	/// @details This function lets you input a data vector to be stored in the class.
	/// @param  data The data vector you want to store in the class.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void setData(std::vector<Data> data);
};

