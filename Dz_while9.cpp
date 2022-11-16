#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, K, temp, i;
	cin >> N;
	i = 1;
	temp = pow(N, 0);
	while (N > temp) {
		K = i;
		temp = pow(3, K);
		i += 1;
	}
	cout << K;
}