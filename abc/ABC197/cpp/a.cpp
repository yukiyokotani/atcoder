#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1<<29; 

int main(){
  string s;
  string ans;
  cin >> s;
  ans += s[1];
  ans += s[2];
  ans += s[0];
  cout << ans;
}