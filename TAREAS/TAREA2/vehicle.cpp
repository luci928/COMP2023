#include <iostream>
#include <string>
#include "MotorVehicle.h"

int main() {
    std::string make, fuelType, color;
    int yearOfManufacture, engineCapacity;

    std::cout << "Enter make: ";
    std::cin >> make;

    std::cout << "Enter fuel type: ";
    std::cin >> fuelType;

    std::cout << "Enter year of manufacture: ";
    std::cin >> yearOfManufacture;

    std::cout << "Enter color: ";
    std::cin >> color;

    std::cout << "Enter engine capacity: ";
    std::cin >> engineCapacity;


    MotorVehicle car(make, fuelType, yearOfManufacture, color, engineCapacity);

    std::cout << "\nMake: " << car.getMake() << std::endl;
    std::cout << "Fuel type: " << car.getFuelType() << std::endl;
    std::cout << "Year of manufacture: " << car.getYearOfManufacture() << std::endl;
    std::cout << "Color: " << car.getColor() << std::endl;
    std::cout << "Engine capacity: " << car.getEngineCapacity() << std::endl;

    return 0;
}