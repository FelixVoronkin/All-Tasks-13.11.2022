#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b;
	c = 0;
	d = 0;
	for (int i = 1; i < a + 1; i++) {
		c = i;
		d += pow(i, b);
	}
	cout << d;
}