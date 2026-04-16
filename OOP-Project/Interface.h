#pragma once
/// @brief This file holds the interface class.
/// @details This class is used to display a text based interface that connects classifers and file saving/loading + others.
/// @author Charlie
/// @date 4/15/2026

#include "FileData.h"
#include "Classifer.h"
#include <string>

/// @brief This class is used to display a text based interface.
/// @details The user is able to use the text based interface to load training data, enter user input sample data, load sample data from a file, and switch which classifer will be used.
/// @author Charlie
/// @date 4/15/2026
class Interface
{
private:
	FileData trainingData;
	Classifer* classifier;

public:
	/// @brief Constructor for Interface class.
	/// @details Sets classifier to nullptr.
	/// @author Charlie
	/// @date 4/15/2026
	Interface();

	/// @brief Destructor for Interface class.
	/// @details Cleans up any allocated resources.
	/// @author Charlie
	/// @date 4/15/2026
	~Interface();

	/// @brief Load training data from a file.
	/// @details This function loads training data from the specified file into the classifer setTrainingData function.
	/// @param  fileName The name of the file to load the training data from.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void loadTrainingData(std::string fileName);

	/// @brief Enter sample data manually.
	/// @details This function takes in x, y, and z values for a sample data point.
	/// @param x The x value for the sample data point.
	/// @param y The y value for the sample data point.
	/// @param z The z value for the sample data point.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void enterSampleData(double x, double y, double z);

	/// @brief Choose which classifer will be used.
	/// @details This function sets the classifier type based on the user input.
	/// @param type The type of classifier to use.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void setClassifer(int type);

	/// @brief This function loads sample data from a file instead of user input.
	/// @details This function takes a file name and then loads the sample data from that file.
	/// @param fileName The name of the file that holds the sample data.
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void loadSampleData(std::string fileName);

	/// @brief Main menu function.
	/// @details Function that displays the main menu and gets user inputs for selecting what they want to do.
	/// @param N/A
	/// @return N/A
	/// @author Charlie
	/// @date 4/15/2026
	void run();
};
