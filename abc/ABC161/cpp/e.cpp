#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  int sum = 0;
  rep(i, N) {
    cin >> a[i];
    sum += a[i];
  }
  sum /= (4 * M);
  int ans = 0;
  rep(i, N) {
    if (a[i] >= sum) {
      ans += 1;
    }
  }
  if (ans >= M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
