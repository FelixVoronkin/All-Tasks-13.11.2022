#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, K, temp;
	bool flag = false;
	cin >> N >> K;
	for (int i = 0; i < N; i++){
		cin >> temp;
		if (temp > K) flag = true;
	}
	if (flag) cout << "True";
	else cout << "false";
}