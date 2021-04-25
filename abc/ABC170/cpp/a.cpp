#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  vector<int> x(5);
  rep(i, 5) cin >> x[i];
  rep(i, 5) {
    if (x[i] == 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}