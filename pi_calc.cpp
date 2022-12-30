#include <time.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include "pi_calc.h"

using namespace std;

/*
* A program that simulates N random points with coordinates
* x, y, then checks to see if they lie within the bounds 
* of a quarter-circle of radius 0.5. We use the ratio of
* points in the quarter-circle to those that lie in the 
* square of side length 0.5 to estimate the value of pi
* iteratively. 
*/

int main() {
	setprecision(10);
	int N = 1000000000;
	int N_a = 0;
	int N_b = 0;
	srand(time(0));
	for(int i = 0; i < N; i++) {
		cout.setf(ios::fixed);
		cout.precision(10);
		float x = (float) rand() / RAND_MAX;
		float y = (float) rand() / RAND_MAX;
		if(x > 0.5) {
			x -= 0.5;
		} else {
			x = 0.5 - x;
		}
		if(y > 0.5) {
			y -= 0.5;
		} else {
			y = 0.5 - y;
		}
		if(sqrt(pow(x, 2) + pow(y, 2)) <= 0.5) {
			N_a += 1;
		}
		N_b += 1;
		if(i % 10000000 == 0) {
			cout << "Pi at the " << i << "-th iteration: " << (float) 4 * N_a / N_b << endl;
		}
	}
}
