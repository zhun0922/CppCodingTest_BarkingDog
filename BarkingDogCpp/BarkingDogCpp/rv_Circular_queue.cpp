#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

const int MAX = 10005;
int head, tail;
int dat[MAX];

bool isFull() { return (tail + 1) % MAX == head; }
bool empty() { return head == tail;}


void push(int x) {
    void push(int x) {
        if (isFull()) {
            cout << "Queue Full!\n";
            return;
        }
        dat[tail] = x;
        tail = (tail + 1) % MX;
    }
}

void pop() {
    if (empty()) {
        cout << "Queue is empty!\n";
        return;
    }
    head == (head + 1) & MAX;
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
