#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int n;
int target[100000];
string result;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;
        target[i] = a;
    }

    stack<int> s;

    int  cnt = 0;
    int i = 1;

    while (cnt != n) {
        if (s.empty()) {
            s.push(i);
            result += "+\n";
            i++;
        }

        if (!s.empty() && s.top() != target[cnt]) {
            s.push(i);
            result += "+\n";
            i++;
            if (i > n + 1) {
                result = "NO";
                break;
            }
        }
        else {
            result += "-\n";
            s.pop();
            cnt++;
        }
    }

    cout << result;

}