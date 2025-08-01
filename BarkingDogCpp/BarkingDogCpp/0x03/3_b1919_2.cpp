#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;
int arr[26];
int result;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s1;
	for (auto& it : s1) {
		arr[(int)it - 'a']++;
	}
	cin >> s2;
	for (auto& it : s2) {
		arr[(int)it - 'a']--;
	}

	for (auto& it : arr) {
		result += abs(it);
	}
	cout << result;
}