// Example program
#include <iostream>
#include <cmath>

bool is_prime(unsigned int n);
int main();
int next_prime();

bool is_prime(unsigned int n) {
	for (unsigned int k { 2 }; k <= sqrt(n); ++k) {

		if ((n % k) == 0) {
			return false;
		}
	}
	std::cout << n << " is a prime" << std::endl;

}

int next_prime() {
	int n { 1 };

	while (n < 100) {
		is_prime(n);
		n++;
	}
}

int main() {
	next_prime();
	return 0;
}

