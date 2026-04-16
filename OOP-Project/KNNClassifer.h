#pragma once
/// @brief This file holds the KNNClassifer which is an undefined classifier.
/// @details The KNNClassifer is a classifier that is not fully implemented and is just a placeholder for future development.
/// @author Charlie
/// @date 4/15/2026

#include "Classifer.h"

/// @brief This class is an undefined classifier.
/// @details At the moment this classifier simply prints its name to the screen and returns a label of -1.
/// @author Charlie
/// @date 4/15/2026
class KNNClassifer : public Classifer
{
public:
	/// @brief Constructor for KNNClassifer class.
	/// @details The constructor does not take any parameters and does not do anything at the moment.
	/// @author Charlie
	/// @date 4/15/2026
	KNNClassifer();

	/// @brief Destructor for KNNClassifer class.
	/// @details The destructor does not do anything at the moment.
	/// @author Charlie
	/// @date 4/15/2026
	~KNNClassifer();

	/// @brief Classify function for KNNClassifer class.
	/// @details This function is used to find what direction the phone is facing. At the moment this function simply prints its name to the screen and returns a label of -1.
	/// @param sample This is the data point that will be checked to see what direction the phone is facing.
	/// @return Returns the data point with a set label.
	/// @author Charlie
	/// @date 4/15/2026
	Data classify(Data sample) override;
};

