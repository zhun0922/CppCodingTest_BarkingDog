#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

//deque 는 앞, 뒤 모두 삽입/삭제 가능 

const int MX = 200000;
int dat[MX * 2 + 1];
int head = MX; int tail = MX;

void push_front(int x) {
	if(head > 0) dat[--head] = x;
}
void push_back(int x) {
	if(tail < MX * 2) dat[tail++] = x;
}
int size() {
	return tail - head;
}
void pop_front() {
	head++;
}
void pop_back() {
	tail--;
}
int front() {
	return dat[head];
}
int back() {
	return dat[tail - 1];
}

int main() {
	push_back(30); // 30
	cout << front() << '\n'; // 30
	cout << back() << '\n'; // 30
	push_front(25); // 25 30
	push_back(12); // 25 30 12
	cout << back() << '\n'; // 12
	push_back(62); // 25 30 12 62
	pop_front(); // 30 12 62
	cout << front() << '\n'; // 30
	pop_front(); // 12 62
	cout << back() << '\n'; // 62
}