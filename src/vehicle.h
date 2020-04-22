#pragma once
#include "engine.h"
#include "fueltank.h"
#include "product.h"
#include <vector>

class Vehicle
{
private:
    double _consumption = 7.6;

public:
    enum Color {
        BLUE,
        YELLOW,
    };

    FuelTank tank;
    Engine engine;
    std::vector <Product> cargo;

    int Capacity = 3;
    Color color = BLUE;

    bool checkFuel(int distance) const;
    void refuel();
    void drive(int dist);
    void startCar();
    void stopCar();
};
