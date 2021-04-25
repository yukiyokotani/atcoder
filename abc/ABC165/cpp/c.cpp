#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int N, M, Q;
vector<int> a(50), b(50), c(50), d(50);
vector<int> A(10);
int max_score = 0;

int calc_score(vector<int> &A) {
  int score = 0;
  rep(i, Q) {
    if (A[b[i] - 1] - A[a[i] - 1] == c[i]) {
      score += d[i];
    }
  }
  return score;
}

void dfs(int i, int N, int M) {
  if (i == N) {
    // rep(l, N) { cout << A[l] << ' '; }
    // cout << calc_score(A) << endl;
    max_score = max(max_score, calc_score(A));
  } else {
    rep(j, M) {
      if (i >= 1 && j < A[i - 1]) continue;
      A[i] = j;
      dfs(i + 1, N, M);
    }
  }
}

int main() {
  cin >> N >> M >> Q;
  rep(i, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];
  dfs(0, N, M);
  cout << max_score << endl;
}