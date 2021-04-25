#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  string s;
  int q;
  cin >> s >> q;
  vector<int> t(q), f(q);
  vector<char> c(q);
  rep(i, q) {
    cin >> t[i];
    if (t[i] == 2) {
      cin >> f[i] >> c[i];
    }
  }
  deque<char> string;
  rep(i, s.length()) string.push_back(s[i]);
  bool is_reversed = false;
  rep(i, q) {
    if (t[i] == 1) {
      is_reversed = !is_reversed;
    } else if (f[i] == 1) {
      if (!is_reversed) {
        string.push_front(c[i]);
      } else {
        string.push_back(c[i]);
      }
    } else {
      if (!is_reversed) {
        string.push_back(c[i]);
      } else {
        string.push_front(c[i]);
      }
    }
  }
  if (is_reversed) {
    for (auto it = string.rbegin(); it != string.rend(); ++it) {
      cout << *it;
    }
  } else {
    for (auto it = string.begin(); it != string.end(); ++it) {
      cout << *it;
    }
  }
  cout << endl;
  return 0;
}