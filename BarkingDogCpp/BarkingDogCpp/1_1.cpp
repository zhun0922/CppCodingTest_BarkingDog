#include <iostream>

using namespace std;

int ex(int n) {
	int result = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0) {
			result += i;
			continue;
		}
		if (i % 5 == 0) {
			result += i;
		}
	}

	return result;
}
int main() {
	cout << ex(16);
}