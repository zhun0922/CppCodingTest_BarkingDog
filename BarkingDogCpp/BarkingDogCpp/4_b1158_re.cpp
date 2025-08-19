#include <iostream>
#include <algorithm>
#include <list>
#include <queue>

using namespace std;

//1 ~ N 까지 N명의 사람이 원
//K번쨰 사람 제거 순선대로.
//원형이라는것을 염두

//(7,3) -> 1 2 3 4 5 6 7 
// 3 6 2 7 

int n, k;
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    
   auto iter = v.begin();
   v.erase(iter + 2);

}