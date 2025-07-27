#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

string def;
int M;
char input;
char c;


int main() {
	list<char> text;
	cin >> def >> M;
	for (auto& it : def) {
		text.push_back(it);
	}

	list<char>::iterator iter = text.end();


	for (int i = 0; i < M; i++) {
		cin >> input;
		if(input == 'L' && iter != text.begin()) {
			iter--;
		}
		else if(input == 'D' && iter != text.end()) {
			iter++;
		}
		else if (input == 'B' && iter != text.begin()) {
			iter = text.erase(--iter);
		}
		else if (input == 'P') {
			cin >> c;
			text.insert(iter, c);
		}
	}

	for (auto& it : text) {
		cout << it;
	}
}
