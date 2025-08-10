#include <iostream>
#include <algorithm>
#include <queue>
#include <string> 
#include <sstream> 

using namespace std;

int n;


int main() {
	queue<int> Q;
	cin >> n;
	cin.ignore();
	ostringstream out;

	for (int i = 0; i < n; i++) {
		string input = "";
		getline(cin, input);

		if (input[0] == 'p' && input[1] == 'u') {
			int x = stoi(input.substr(5));
			Q.push(x);
		}
		else if (input == "pop") {
			if (!Q.empty()) {
				out << Q.front() << '\n';
				Q.pop();
			}
			else out << "-1" << '\n';
		}
		else if (input == "front") {
			if (!Q.empty()) out << Q.front() << '\n';
			else out << "-1" << '\n';
		}
		else if (input == "size") {
			out << Q.size() << '\n';
		}
		else if (input == "back") {
			if (!Q.empty()) out << Q.back() << '\n';
			else out << "-1" << '\n';
		}
		else if (input == "empty") {
			if (Q.empty()) {
				out << "1" << '\n';
			}
			else out << "0" << '\n';
		}
	}

	cout << out.str();
}