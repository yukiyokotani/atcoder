#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  vector<float> l(n * n);
  rep(i, n) cin >> x[i] >> y[i];
  int ix = 0;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      l[ix] = sqrt(pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0));
      ix++;
    };
  };
  float ans = 0;
  rep(i, n * n) {
    if (l[i] > ans) ans = l[i];
  };
  cout << ans << endl;
  return 0;
}