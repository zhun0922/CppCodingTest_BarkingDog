#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int x; 
int main() {
	int n = 0;
	cin >> n;

	deque<int> DQ;
	while (n--) {
		string s = "";
		cin >> s;
		if (s == "push_front") {
			cin >> x;
			DQ.push_front(x);
		}
		else if (s == "push_back") {
			cin >> x;
			DQ.push_back(x);
		}
		else if (s == "pop_front") {
			if (DQ.empty()) { cout << "-1" << '\n'; continue; }
			cout << DQ.front() << '\n';
			DQ.pop_front();
		}
		else if (s == "pop_back") {
			if (DQ.empty()) { cout << "-1" << '\n'; continue;}
			cout << DQ.back() << '\n';
			DQ.pop_back();
		}
		else if (s == "size") {

			cout << DQ.size() << '\n';
		}
		else if (s == "empty") {
			if (DQ.empty()){ cout << "1" << '\n'; continue;}
			else cout << "0" << '\n';
		}
		else if (s == "front") {
			if (DQ.empty()) { cout << "-1" << '\n'; continue;}
			cout << DQ.front() << '\n';
		}
		else if (s == "back") {
			if (DQ.empty()) { cout << "-1" << '\n'; continue;}
			cout << DQ.back() << '\n';
		}
	}
}