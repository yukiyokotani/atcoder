#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1<<29; 

int main(){
 int a, b;
 cin >> a >> b;
 int max_follower = 2 * a + 100;
 cout << max(max_follower - b, 0) << endl;
 return 0;
}