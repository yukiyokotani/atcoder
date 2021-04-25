#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  rep(i, h) { cin >> s[i]; }
  int ans = 1;
  for (int i = x - 1; i >= 1; i--) {
    if (s[i - 1][y - 1] == '.') {
      ans++;
    } else {
      break;
    };
  }
//   cout << "縦-: " << ans - 1 << endl;
  for (int i = x + 1; i <= h; i++) {
    if (s[i - 1][y - 1] == '.') {
      ans++;
    } else {
      break;
    };
  }
//   cout << "縦+: " << ans - 1 << endl;
  for (int j = y - 1; j >= 1; j--) {
    if (s[x - 1][j - 1] == '.') {
      ans++;
    } else {
      break;
    };
  }
//   cout << "横-: " << ans - 1 << endl;
  for (int j = y + 1; j <= w; j++) {
    if (s[x - 1][j - 1] == '.') {
      ans++;
    } else {
      break;
    };
  }
//   cout << "横+: " << ans - 1 << endl;
  cout << ans << endl;
}