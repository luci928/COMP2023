#include <string>
#include <iostream>

class MotorVehicle {
public:
    MotorVehicle(std::string make_vehicle, std::string fuel_type, int year_manufacture, std::string color_vehicle, int engine_capacity)
        : make(make_vehicle), fuelType(fuel_type), yearOfManufacture(year_manufacture), color(color_vehicle), engineCapacity(engine_capacity) {}

    void setMake(std::string make_vehicle) {
        make = make_vehicle;
    }
    std::string getMake() const {
        return make;
    }

    void setFuelType(std::string fuel_type) {
        fuelType = fuel_type;
    }
    std::string getFuelType() const {
        return fuelType;
    }

    void setYearOfManufacture(int year_manufacture) {
        yearOfManufacture = year_manufacture;
    }
    int getYearOfManufacture() const {
        return yearOfManufacture;
    }

    void setColor(std::string color_vehicle) {
        color = color_vehicle;
    }
    std::string getColor() const {
        return color;
    }

    void setEngineCapacity(int engine_capacity) {
        engineCapacity = engine_capacity;
    }
    int getEngineCapacity() const {
        return engineCapacity;
    }

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;
};