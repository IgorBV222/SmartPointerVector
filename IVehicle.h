#pragma once
#include <iostream>

class IVehicle {
public:
    virtual int getSpeed() const = 0;
    virtual void printType() const = 0;
    virtual ~IVehicle() {}
};

class Car : public IVehicle {
public:
    Car(int speed) : _speed(speed) {}
    int getSpeed() const override;
    void printType() const override;
private:
    int _speed;
};

class Van : public IVehicle {
public:
    Van(int speed) : _speed(speed) {}
    int getSpeed() const override;
    void printType() const override;
private:
    int _speed;
};

class Bike : public IVehicle {
public:
    Bike(int speed) : _speed(speed) {}
    int getSpeed() const override;
    void printType() const override;
private:
    int _speed;
};

