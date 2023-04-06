#include <iostream>

using namespace std;

int main() {
	int x = 0;
	int A[100];
	int rem = 0;
	int prod = 1;
	int B[100];


	cin >> x;

	for (int i = 0; i < x; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < x; i++) {
		for (int i = 0; i < x; i++) {
			while (A[i] > 0) {
				rem = A[i] % 2;
				B[i] = B[i] + (rem * prod);
				A[i] = A[i] / 2;
				prod *= 10;
			}
		}
	}
	for (int i = 0; i < x; i++) {
		cout << B[i] << '\n';


	}

	return 0;
}
