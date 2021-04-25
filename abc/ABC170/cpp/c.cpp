#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int x, n;
  cin >> x >> n;
  unordered_set<int> p;
  int tmp;
  rep(i, n) {
    cin >> tmp;
    p.insert(tmp);
  };
  bool flag = false;
  int diff = 0;

  while (!flag) {
    if (p.find(x - diff) == p.end() & p.find(x + diff) == p.end()) {
      cout << min(x - diff, x + diff) << endl;
      flag = true;
      return 0;
    } else if (p.find(x - diff) == p.end()) {
      cout << x - diff << endl;
      flag = true;
      return 0;
    } else if (p.find(x + diff) == p.end()) {
      cout << x + diff << endl;
      flag = true;
      return 0;
    }
    diff++;
  }
}