#pragma once
class FuelTank
{
private:
	double _fuel;
	double _capacity;
public:
	void addFuel(double amount);
	void consumeFuel(double amount);
	double getFuel() const;
	double getCapacity() const;
};