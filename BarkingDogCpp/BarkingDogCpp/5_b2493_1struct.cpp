#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int n;
int a[500000];


struct Tower {
    int val = 0;
    int idx = 0;
    Tower(int x, int y) { val = x; idx = y; }
};

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

    stack<Tower> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[i] > s.top().val) {
            s.pop();
        }
        if (s.empty()) {
            ans[i] = 0;
        }
        else {
            ans[i] = s.top().idx;
        }

        s.push(Tower(a[i], i + 1));
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }

}