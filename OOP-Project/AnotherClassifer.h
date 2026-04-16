#pragma once
/// @brief This file holds an extra class for an undeveloped classifier.
/// @details This class is not fully implemented and is just a placeholder for future development.
/// @auther Charlie
/// @date 4/15/2026

#include "Classifer.h"

/// @brief This class is an extra undeveloped classifier.
/// @details Non developed
/// @auther Charlie
/// @date 4/15/2026
class AnotherClassifer : public Classifer
{
	public:
	/// @brief Constructor for AnotherClassifer class.
	/// @details The constructor does not take any parameters and does not do anything at the moment.
	/// @author Charlie
	/// @date 4/15/2026
	AnotherClassifer();

	/// @brief Destructor for AnotherClassifer class.
	/// @details The destructor does not take any parameters and does not do anything at the moment.
	/// @author Charlie
	/// @date 4/15/2026
	~AnotherClassifer();

	/// @brief Classify function for AnotherClassifer class.
	/// @details This function is used to find what direction the phone is facing. At the moment this function simply prints its name to the screen and returns a label of -1.
	/// @param sample This is the data point that will be checked to see what direction the phone is facing.
	/// @return returns the data point with a set label.
	/// @author Charlie
	/// @date 4/15/2026
	Data classify(Data sample) override;
};

