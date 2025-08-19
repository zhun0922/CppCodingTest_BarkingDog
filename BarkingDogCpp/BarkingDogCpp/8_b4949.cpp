#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ostringstream out; 


	string s = "";
	map<char, char> bracket = { {'(', ')'}, {'[', ']'} };
	

	while (1) {
		getline(cin, s);
		if (s == ".") break;
		stack<char> stk;

		bool isValid = true; 

		for (auto& it : s) {
		    if (it == '(' || it == '[') {
				stk.push(it);
			}

			else if(it == ')' || it == ']'){
				if (!stk.empty() && bracket[stk.top()] == it) {
					stk.pop();
				}
				else{
					isValid = false;
					break;
				}
			}
		}

		if (isValid && stk.empty()) {cout << "yes\n"; }
		else { cout << "no\n"; }
	}
}