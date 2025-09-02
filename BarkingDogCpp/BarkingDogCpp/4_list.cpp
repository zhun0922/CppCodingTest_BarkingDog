#include <iostream>
#include <algorithm>

using namespace std;

const int MX = 10005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void init() {
	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);
}
void traverse() {
	int cur = nxt[0];
	while (cur != -1) {
		cout << dat[cur] << ' ';
		cur = nxt[cur];
	}
	cout << "\n\n";
}

void insert(int addr, int num) {
	dat[unused] = num;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];
	if(nxt[addr] != -1) pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	unused++;
}

void erase(int addr) {
	nxt[pre[addr]] = nxt[addr];
	if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	init();
}