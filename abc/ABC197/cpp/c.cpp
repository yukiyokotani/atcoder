#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 30;

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  rep(i, n) cin >> s[i];
  int ans = INF;
  for (int i = 0; i < 1 << (n - 1); i++) {
    int tmp_or = s[0];
    int tmp_xor = -1;
    // cout << s[0];
    rep(j, n - 1) {
      if (i & (1 << j)) {
        // cout << " | " << s[j + 1];
        if (tmp_xor == -1) {
          tmp_xor = tmp_or;
        } else {
          tmp_xor = tmp_xor ^ tmp_or;
        }
        tmp_or = s[j + 1];
        continue;
      };
    //   cout << ", " << s[j + 1];
      tmp_or = tmp_or | s[j + 1];
    }
    if (tmp_xor == -1) {
        tmp_xor = tmp_or;
    } else {
        tmp_xor = tmp_xor ^ tmp_or;
    }
    // cout << ": " << tmp_xor << endl;
    ans = min(ans, tmp_xor);
  }
  cout << ans << endl;
}