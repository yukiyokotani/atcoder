#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  string S;
  cin >> S;
  int n = S.length();
  vector<int> v(n);
  int op = -1;
  rep(i, n) v[i] = int(S.at(i) - '0');
  for (int i = 0; i < (1 << (n - 1)); ++i) {
    int ans = v[0];
    for (int j = 0; j < (n - 1); ++j) {
      if (i & (1 << j)) {
        ans += v[j + 1];
      } else {
        ans -= v[j + 1];
      }
    }
    if (ans == 7) {
      op = i;
      break;
    }
  }
  if (op == -1) {
    cout << "IMPOSSIBLE!" << endl;
    return 0;
  }
  cout << v[0];
  for (int i = 0; i < (n - 1); i++) {
    if (op & (1 << i)) {
      cout << '+';
    } else {
      cout << '-';
    }
    cout << v[i + 1];
  }
  cout << "=7" << endl;
  return 0;
}