#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int k;
int arr[1000000], ans[1000000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;

    for (int i = 0; i < k; i++) {
        int input = 0;
        cin >> input;
        arr[i] = input;
    }

    stack<int> s;
    for (int i = k - 1; i >= 0; i--) {
        while (!s.empty() && arr[i] >= s.top()) s.pop();

        if (s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }

    for (int i = 0; i < k; i++) {
        cout << ans[i] << ' ';
    }

}