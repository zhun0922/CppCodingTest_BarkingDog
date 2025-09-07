#include <iostream>
#include <algorithm>

using namespace std;

int recursion(int n) {
	if (n <= 0) {
		return 0;
	}

	return n + recursion(n-1);
}


int main() {
	cout << recursion(6);
}