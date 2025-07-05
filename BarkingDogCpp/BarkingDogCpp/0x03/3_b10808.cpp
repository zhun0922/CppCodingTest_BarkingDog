#include <iostream>

using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;

	int arr[26] = { 0, };

	char c = 'a';
	cout << c;
	for (int e : s) {
		int a = (int)'a';
		arr[(int)e - a]++;
	}

	for (int e : arr) cout << e << ' ';

	return 0;
}