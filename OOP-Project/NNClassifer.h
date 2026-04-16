#pragma once
/// @brief This file holds the NNClassifer / Nearest Neighbor Classifier class.
/// @details The NNClassifer class is used to find the closest point of inputed data.
/// @author Charlie
/// @date 4/15/2026

#include "Classifer.h"

/// @brief Nearest Neighbor Classifier is used to find the closest point of training data to the inputed data.
/// @details Nearest Neighbor Classifier checks every training data point and determines which one has the smallest distance to the inputed data point.
/// @author Charlie
///	@date 4/15/2026
class NNClassifer : public Classifer
{
public:

	/// @brief Constructor for NNClassifer class.
	/// @details The constructor does not take any parameters and does not do anything at the moment.
	/// @author Charlie
	/// @date 4/15/2026
	NNClassifer();

	/// @brief Destructor for NNClassifer class.
	/// @details The destructor does not do anything at the moment.
	/// @author Charlie
	/// @date 4/15/2026
	~NNClassifer();

	/// @brief The NNClassifer finds the closest point of training data to the inputed data and returns that point with its label.
	/// @details Used to find the correct label.
	/// @param sample This is the data point that will be checked to see what direction the phone is facing.
	/// @return returns the data point with a set label.
	/// @author Charlie
	/// @date 4/15/2026
	Data classify(Data sample) override;
};

