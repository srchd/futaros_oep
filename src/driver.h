#pragma once
#include "vehicle.h"
#include <iostream>
class Driver
{
private:
	int distance(Vehicle van, Product p);

public:
	Vehicle van;

	void dodo();
	Product take();
	void deliver(Product p);
};