#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

const int MAX = 5000;
int dat[MAX];
int nxt[MAX];
int pre[MAX];
int cur = 0;

int n, k;
list<int> lst;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		lst.push_back(i+1);
	}

	auto iter = lst.begin();

	for (int i = 0; i < n; i++) {
	
	}



}