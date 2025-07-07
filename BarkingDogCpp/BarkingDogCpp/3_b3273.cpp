#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, x, input, result;
bool isCheck[1000000];
int inputArr[100000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> input;
		inputArr[i] = input;
	}
	sort(inputArr, inputArr + n);
	cin >> x;
	for (int i = 0; i < n; i++) {
		int a = inputArr[i];
		if (x - a >= 0 && x - a <= 1000000 && isCheck[x - a]) result++;
		isCheck[inputArr[i]] = true;
	}

	cout << result;

}