#include "driver.h"
int Driver::distance(Vehicle* van, Product p) {
	return 42; //visszaad egy konstans értéket
}

void Driver::dodo() {
	int c = 0;
	while (c < van->Capacity) {
		van->cargo.push_back(take());
		c++;
	}
	for (Product p : van->cargo) {
		deliver(p);
	}
}
Product Driver::take() {
	Product a;
	std::string stations[5] = {
			"OMV",
			"MOL",
			"INA",
			"Agip",
			"Lukoil"
	};
	int index = rand() % 5;
	std::cout << index << std::endl;
	a.address = stations[index];
	return a;
}
void Driver::deliver(Product p) {
	int dist = distance(van, p);
	if (!van->checkFuel(dist))
		van->refuel();
	van->drive(dist);
	int ind = -1;
	for (int i = 0; i < (int)van->cargo.size(); i++) {
		if (p.address == van->cargo[i].address) {
			ind = i;
			break;
		}
	}
	std::cout << "The product to " << van->cargo[ind].address << " has been delivered!\n";
	van->cargo[ind] = van->cargo.back();
	van->cargo.pop_back();
}
