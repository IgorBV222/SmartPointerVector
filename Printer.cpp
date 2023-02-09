#include "Printer.h"
using namespace Engine;

void Printer::printDefault() {
	std::cout << "Print displays Vehicle types:" << std::endl;
}

void Printer::showType() {
	for (const auto el : _v) {
		std::cout << "Vehicle Type: ";
		el->printType();
	}
	std::cout << std::endl;
}

void Printer::addVeh(std::shared_ptr < IVehicle> v) {
	_v.push_back(v);
}