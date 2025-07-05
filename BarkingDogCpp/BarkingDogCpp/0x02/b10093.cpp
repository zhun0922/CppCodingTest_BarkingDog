#include <iostream>

using namespace std;

int main() {
	//쓴 코드 꼬라지 봐라 다틀렸네 
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);

	if (a == b || b - a == 1) cout << 0 << '\n';
	//cout << max(0ll, b-a-1); 대체 가능

	else {
		cout << b - a - 1 << '\n';
		for (long long i = a + 1; i < b; i++) {
			cout << i << " ";
		}
	}
}