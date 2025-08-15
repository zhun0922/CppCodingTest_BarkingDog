#include <iostream>
#include <algorithm>
#include <deque>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int T, p, k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//R: 뒤집기  수의 순서를 뒤집는다 
	//D: 버리기  첫번째수를 버린다 비어있으면 에러
	//AB 는 A를 수행한다음 바로 B
	//ex) RDD 배열을 뒤집은 다음 처음 두수를 버려

	cin >> T;
	while (T--) {
		cin.ignore();
		string command = "";
		getline(cin, command);

		cin >> p;
		deque<int> dq;

		cin.ignore();
		string arrInput = "";
		getline(cin, arrInput);

		string temp = "";
		for (auto &it : arrInput) {
			if (it != '[') {
				if (it != ',' && it != ']') {
					temp += it;
				}
				else {
					if(temp != "") dq.push_back(stoi(temp));
					temp = "";
				}
			}
		}

		for (auto& it : command) {
			if (it == 'D') {
				if (!dq.empty()) dq.pop_front();
				else {
					cout << "error\n"; goto HERE;
				}
			}
			else if (it == 'R') {
				deque<int> temp;
				int a = (int)dq.size();
				for (int i = 0; i < a; i++) {
					temp.push_back(dq.back());
					dq.pop_back();
				}
				dq = temp;
			}
		}

		k = (int)dq.size();
		cout << '[';
		for (int i = 0; i < k; i++) {

			cout << dq.front();
			if (i != k - 1) {
				cout << ",";
			}
			dq.pop_front();
		}
		cout << ']';
		HERE: ;

	}
}