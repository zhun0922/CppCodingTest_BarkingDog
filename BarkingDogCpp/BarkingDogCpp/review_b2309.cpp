#include <iostream>
#include <algorithm>

using namespace std;

int wonka[9];
int resArr[7];
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	for (int i = 0; i < 9; i++) {
		cin >> wonka[i];
	}

	for (int i = 0; i < 9; i++) {
		int result = 0;
		for (int j = i + 1; j < 9; j++) {
			result = 0;
			for (int k = 0, index =0; k < 9; k++) {
				if (k != i && k != j) {
					result += wonka[k];
					resArr[index++] = wonka[k];
				}
			}
			if (result == 100) break;

		}
		if (result == 100) break;
	}

	sort(resArr, resArr + 7);
	for (const int& it : resArr)
		cout << it << '\n';


}