#include <iostream>
#include <algorithm>

using namespace std;

bool arr[4];
int main() {
	for (int i = 0; i < 3; i++) {
		int result = 0;
		for (int j = 0; j < 4; j++) {
			cin >> arr[j];
			if (!arr[j])  result++;
		}
		if (64 + result == 64) cout << "E";
		else cout << (char)(64 + result);
		cout << '\n';
	}
}