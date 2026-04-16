#pragma once
/// @brief This file holds the data structure used for storing the data points and their labels.
/// @details The class is a key part of the project as it is used to store all of the data points and their labels.
/// @author Charlie
///	@date 4/15/2026

#include <string>

/// @brief This struct is used to store the data points and their labels.
/// @details The struct has a label and three double values for the x, y, and z. The struct also has three constructors, a default constructor that initializes all varables to 0, a constructor that all varables can be inputed, and a constructor that has the label auto set to 0.
/// @author Charlie
/// @date 4/15/2026
typedef struct Data {
	int label;
	double x;
	double y;
	double z;

	/// @brief Default constructor for Data struct.
	/// @details Sets all variables to 0.
	/// @author Charlie
	/// @date 4/15/2026
	Data() : label(0), x(0), y(0), z(0) {}

	/// @brief Parameterized constructor for Data struct.
	/// @details Allows all variables to be set.
	/// @param l The label for the data point.
	/// @param xVal The x value for the data point.
	/// @param yVal The y value for the data point.
	/// @param zVal The z value for the data point.
	/// @author Charlie
	/// @date 4/15/2026
	Data(int l, double xVal, double yVal, double zVal) : label(l), x(xVal), y(yVal), z(zVal) {}

	/// @brief Parameterized constructor for Data struct.
	/// @details Allows all variables to be set except the label, which is set to 0.
	/// @param xVal The x value for the data point.
	/// @param yVal The y value for the data point.
	/// @param zVal The z value for the data point.
	/// @author Charlie
	/// @date 4/15/2026
	Data(double xVal, double yVal, double zVal) : label(0), x(xVal), y(yVal), z(zVal) {}
} Data;

