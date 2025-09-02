#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

const int MAX = 5000;
int dat[MAX];
int nxt[MAX];
int pre[MAX];
int unused = 1;
stack<int> recycle;

void init() {
	fill(dat, dat + MAX, -1);
	fill(nxt, nxt + MAX, -1);
	fill(pre, pre + MAX, -1);
}

void traverse() {
	int cur = nxt[0];
	while (cur != -1) {
		cout << dat[cur] << '\n';
		cur = nxt[cur];
	}
}

void insert(int adr, int val) {

	int cur = 0;
	if (!recycle.empty()) {
		cur = recycle.top();
		recycle.pop();
	}
	else {
		cur = unused++;
	}

	dat[cur] = val;
	nxt[cur] = nxt[adr];
	pre[cur] = adr;

	nxt[adr] = cur;
	if (nxt[adr] != -1) { pre[nxt[adr]] = cur; }
}

void erase(int adr) {
	dat[adr] = -1;
	nxt[pre[adr]] = nxt[adr];
	if (nxt[adr] != -1) { pre[nxt[adr]] = pre[adr]; }
	recycle.push(adr);

	pre[adr] = nxt[adr] = -1;
}

int main() {
	init();

}