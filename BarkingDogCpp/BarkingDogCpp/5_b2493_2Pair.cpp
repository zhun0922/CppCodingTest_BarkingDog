#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int n;
int a[500000];
int ans[500000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int input = 0;
        cin >> input;
        a[i] = input;
    }

    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[i] > s.top().first) {
            s.pop();
        }
        if (s.empty()) {
            ans[i] = 0;
        }
        else {
            ans[i] = s.top().second;
        }

        s.push({ a[i], i + 1 });
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
}