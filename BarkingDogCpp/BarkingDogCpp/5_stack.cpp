#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int val) {
	dat[pos++] = val;
}

void pop() {
	if (pos > 0) pos--;
}

int top() {
	if (pos == 0) {
		cout << "스택이 비어 있습니다.\n";
		return -1; // 혹은 throw
	}
	return dat[pos - 1];
}

void traverse() {
	for (int i = 0; i < pos; i++) {
		cout << dat[i];
		if (i != pos - 1) cout << ", ";
	}
}

int main() {
	push(10);
	push(20);
	push(30);
	traverse();  // 출력: 10, 20, 30
	cout << "\nTop: " << top() << '\n'; // 출력: 30
	pop();
	traverse();  // 출력: 10, 20
}