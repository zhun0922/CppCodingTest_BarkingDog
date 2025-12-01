#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

const int MAX = 10005;
int head, tail;
int dat[MAX];

//queue 는 top이 아니라 front랑 back..
bool empty() {
    return head == tail;
}
void push(int x) {
    dat[tail++] = x;
}

void pop() {
    if (empty()) {
        cout << "Queue is empty!\n";
        return;
    }
    head++;
}

int front() {
    if (empty()) {
        cout << "Queue is empty!\n";
        return -1; // 또는 예외 발생
    }
    return dat[head];
}

int back() {
    if (empty()) {
        cout << "Queue is empty!\n";
        return -1;
    }
    return dat[tail - 1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
}
