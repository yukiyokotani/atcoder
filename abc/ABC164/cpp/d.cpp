#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  reverse(s.begin(), s.end());
  vector<int> cnt(2019);
  int m = 0;
  int x = 1;
  int ans = 0;
  rep(i, n) {
    cnt[m]++;
    m += ((s[i] - '0') * x);
    m %= 2019;
    x = x * 10 % 2019;
    ans += cnt[m];
  }
  cout << ans << endl;
  return 0;
}
     