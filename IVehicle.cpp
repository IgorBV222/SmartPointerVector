#include "IVehicle.h"

int Car::getSpeed() const {
    return _speed;
}
void Car::printType() const {
    std::cout << "Car" << std::endl;
}

int Van::getSpeed() const {
    return _speed;
}
void Van::printType() const {
    std::cout << "Van" << std::endl;
}

int Bike::getSpeed() const {
    return _speed;
}
void Bike::printType() const {
    std::cout << "Bike" << std::endl;
}