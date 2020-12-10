#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int y[n] = {0, 1, 2};
	//y_0 = neutral, y_1 = 1, y_2 = 3
	for (int i = 3; i <= n; ++i) {
		y[i] = y[i - 1] + y[i - 3];
	}

	cout << y[n];
}