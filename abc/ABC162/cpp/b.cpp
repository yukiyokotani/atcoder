#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  ll N;
  cin >> N;
  ll count = 1;
  ll ans = 0;
  while (count <= N) {
    if ((count % 3 != 0) && (count % 5 != 0)) {
      ans += count;
    }
    count += 1;
  }
  cout << ans << endl;
}