#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M, 0));
  rep(i, N) {
    cin >> C[i];
    rep(j, M) cin >> A[i][j];
  };
  int min_cost = INF;
  int tmp_cost = 0;
  vector<int> skill(M);
  bool flag = true;
  bool isPossible = false;
  for (int bit = 0; bit < (1 << N); bit++) {
    rep(i, M) skill[i] = 0;
    tmp_cost = 0;
    flag = true;
    rep(i, N) {
      if (bit & (1 << i)) {
        rep(j, M) skill[j] += A[i][j];
        tmp_cost += C[i];
      }
    }
    rep(i, M) if (skill[i] < X) flag = false;
    if (flag) min_cost = min(min_cost, tmp_cost);
    isPossible = isPossible | flag;
  };
  if (isPossible) {
    cout << min_cost << endl;
  } else {
    cout << -1 << endl;
  }
}