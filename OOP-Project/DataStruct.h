#pragma once
typedef struct Data {
	int label;
	std::string name;
	double x;
	double y;
	double z;
	Data() : label(0), x(0), y(0), z(0) {}
	Data(int l, double xVal, double yVal, double zVal) : label(l), x(xVal), y(yVal), z(zVal) {}
	Data(double xVal, double yVal, double zVal) : label(0), x(xVal), y(yVal), z(zVal) {}
} Data;