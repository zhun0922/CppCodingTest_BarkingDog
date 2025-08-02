#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int k;
stack<int> s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;

    for (int i = 0; i < k; i++) {
        int input = -1;
        cin >> input;
        if (input == 0) {
            if (!s.empty()) { s.pop(); }
        }
        else { s.push(input); }
    }

    int result = 0;

    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    cout << result;

}