#include "NNClassifer.h"
#include <iostream>
#include <cmath>

int NNClassifer::classify(Data sample) {
	int label = -1;
	double minDistance = 1;

	for (auto& data : trainingData) {
		double distance = 
			std::sqrt(std::pow(sample.x - data.x, 2) +
			std::pow(sample.y - data.y, 2) +
			std::pow(sample.z - data.z, 2));

		if (distance < minDistance) {
			label = data.label;
		}
	}

	return label;
}

NNClassifer::NNClassifer() {

}

NNClassifer::~NNClassifer() {

}