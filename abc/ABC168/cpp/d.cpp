#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int n, m;
  cin >> n >> m;
  int a, b;
  vector<vector<int>> map(n, vector<int>());
  vector<int> ans(n, -1);
  deque<int> que;
  rep(i, m) {
    cin >> a >> b;
    map[a - 1].push_back(b - 1);
    map[b - 1].push_back(a - 1);
  };
  int r;
  int num_path;
  //   rep(i, n) {
  //     cout << "room " << i << ": ";
  //     rep(j, map[i].size()) { cout << map[i][j] << " "; }
  //     cout << endl;
  //   }
  que.push_back(0);
  while (!que.empty()) {
    r = que.front();
    num_path = map[r].size();
    if (num_path == 0) {
      cout << "No" << endl;
      return 0;
    }
    rep(i, num_path) {
      if (ans[map[r][i]] != -1) continue;
      que.push_back(map[r][i]);
      ans[map[r][i]] = r;
    }
    que.pop_front();
  }
  cout << "Yes" << endl;
  for (int i = 1; i < n; ++i) {
    cout << ans[i] + 1 << endl;
  }
  return 0;
}