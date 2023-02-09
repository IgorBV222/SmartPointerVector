#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <memory>
#include "Printer.h"
#include "IVehicle.h"

using namespace Engine;

int main() {

	std::shared_ptr< IVehicle> v1 = std::make_shared<Car>(90);
	std::cout << "Vehicle speed: " << v1->getSpeed() << std::endl;
	std::cout << "Vehicle type: ";
	v1->printType();
	std::cout << "------------------\n";
	std::shared_ptr< IVehicle> v2 = std::make_shared<Van>(60);
	std::cout << "Vehicle speed: " << v2->getSpeed() << std::endl;
	std::cout << "Vehicle type: ";
	v2->printType();
	std::cout << "------------------\n";
	std::shared_ptr< IVehicle> v3 = std::make_shared<Bike>(70);
	std::cout << "Vehicle speed: " << v3->getSpeed() << std::endl;
	std::cout << "Vehicle type: ";
	v3->printType();
	std::cout << "=================================\n";

	Printer p;
	p.printDefault();
		
	p.addVeh(v1);
	p.addVeh(v2);
	p.addVeh(v3);
	
	p.showType();

	return 0;
}