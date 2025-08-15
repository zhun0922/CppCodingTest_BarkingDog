#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

using namespace std;

int T, k;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;
	while (T--) {
		string command = "";
		cin >> command >> k;

		string arrInput = "";
		cin >> arrInput;

		deque<int> dq;
		bool rev = false;
		bool errorflag = false;

		string temp = "";
		for (auto& it : arrInput) {
			if (isdigit(it)) {
				temp += it;
			}
			else if(!temp.empty()){
				dq.push_back(stoi(temp));
				temp.clear();
			}
		}

		for (auto& it : command) {
			if (it == 'R') {
				rev = !rev;
			}
			else {
				if(dq.empty()) {
					cout << "error\n";
					errorflag = true;
					break;
				}
				if (rev) dq.pop_back();
				else dq.pop_front();
			}
		}

		if (errorflag) {
			continue;
		}

		cout << "[";

		if (!rev) {
			for (int i = 0; i < dq.size(); i++) {
				cout << dq[i];
				if (i != dq.size() - 1) {
					cout << ",";
				}
			}
		}
		else {
			for (int i = dq.size() - 1; i >= 0; i--) {
				cout << dq[i];
				if (i != 0) {
					cout << ",";
				}
			}
		}

		cout << "]\n";
	}
}