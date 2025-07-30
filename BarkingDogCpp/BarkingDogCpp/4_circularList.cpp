#include <iostream>
#include <algorithm>

using namespace std;

const int MX = 10005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void init() {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    // 원형 연결리스트에서는 더미노드가 자기 자신을 가리킨다
    nxt[0] = pre[0] = 0;
}

void traverse() {
    int cur = nxt[0];
    while (cur != 0) { // 다시 더미노드로 돌아오기 전까지
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert(int addr, int num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    pre[nxt[addr]] = pre[addr];
    // (선택) 노드 초기화
    pre[addr] = nxt[addr] = -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    init();
}