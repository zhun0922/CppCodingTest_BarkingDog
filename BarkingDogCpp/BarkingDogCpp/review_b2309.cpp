#include <iostream>
#include <algorithm>

using namespace std;

int wonka[9];
int ia, ib;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	for (int i = 0; i < 9; i++) {
		cin >> wonka[i];
	}

	for (int i = 0; i < 9; i++) {
		int result = 0;
		for (int j = i + 1; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				if (!wonka[i] && !wonka[j]) 
					result += wonka[k];
			}

			if (result == 100)
				ia = i;
				ib = j;
			break;

		}
		if (result == 100) break;
	}

	for (int i = 0; i < 9; i++) {
		if (i != ia && i != ib) {
			cout << wonka[i];
		}
	}


}