#include "vehicle.h"

bool Vehicle::checkFuel(int distance) const {
	double need = distance * _consumption;
	return need <= tank.getFuel();
}

void Vehicle::refuel() {
	double deflict = tank.getCapacity() - tank.getFuel();
	tank.addFuel(deflict);
}

void Vehicle::drive(int dist) {
	startCar();
	tank.consumeFuel(dist * _consumption);
	stopCar();
}

void Vehicle::startCar() {
	if (!engine.isRunning())
		engine.start();
}

void Vehicle::stopCar() {
	if (engine.isRunning())
		engine.stop();
}