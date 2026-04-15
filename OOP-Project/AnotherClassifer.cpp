#include "AnotherClassifer.h"
#include <iostream>

Data AnotherClassifer::classify(Data sample) {
	std::cout << "AnotherClassifer Not Implemented Yet: Returning -1" << std::endl;
	sample.label = -1;
	return sample;
}

AnotherClassifer::AnotherClassifer() {

}

AnotherClassifer::~AnotherClassifer() {

}