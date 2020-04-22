#include "fueltank.h"
void FuelTank::addFuel(double amount) {
	_fuel += amount;
}
void FuelTank::consumeFuel(double amount) {
	_fuel -= amount;
}
double FuelTank::getFuel() const {
	return _fuel;
}
double FuelTank::getCapacity() const {
	return _capacity;
}