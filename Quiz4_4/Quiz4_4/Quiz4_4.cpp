#include <iostream>


double enterTowerHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double d{};
	std::cin >> d;
	return d;
}

double fallenDistanceCalc(double t, double h) {
	constexpr double gravity{ 9.81 };
	
	double distance{ h - (gravity * t * t / 2) };
	return distance;
}

void printResult(double t, double h) {
	if (h<=0.0)
		std::cout << "At " << t << " the ball is on the ground.\n";
	else
		std::cout << "At " << t << " seconds, the ball is at height: " << h << " meters\n";
}


void calcDistance(double t, double h) {
	double height{ fallenDistanceCalc(t,h) };
	printResult(t, height);
	

}

int main() {
	const double x{ enterTowerHeight() };

	calcDistance(0, x);
	calcDistance(1, x);
	calcDistance(2, x);
	calcDistance(3, x);
	calcDistance(4, x);
	calcDistance(5, x);

	return 0;
}