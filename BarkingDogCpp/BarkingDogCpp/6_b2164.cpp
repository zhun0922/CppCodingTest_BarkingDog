#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	queue<int> Q;
	int i = 1;

	while (n--) {
		Q.push(i++);
	}

	while (Q.size() > 1) {
		Q.pop();
		int a = Q.front();
		Q.pop();
		Q.push(a);
	}

	cout << Q.front();

}