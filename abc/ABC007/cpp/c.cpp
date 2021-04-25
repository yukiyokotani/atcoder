#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

struct Cordinate {
  int x;
  int y;
  int d;
};

int main() {
  int R, C, sy, sx, gy, gx;
  cin >> R >> C;
  cin >> sx >> sy;
  cin >> gx >> gy;

  vector<vector<char>> c(R, vector<char>(C));
  vector<vector<int>> ans(R, vector<int>(C, -1));
  rep(i, R) { rep(j, C) cin >> c[i][j]; };

  deque<Cordinate> que;
  que.push_front({sx - 1, sy - 1, 0});
  Cordinate cord;
  int d = 0;
  int vx[] = {0, 1, 0, -1};
  int vy[] = {1, 0, -1, 0};
  while (!que.empty()) {
    cord = que.front();
    // cout << cord.x << ' ' << cord.y << ' ' << cord.d << endl;
    que.pop_front();
    rep(i, 4) {
      if (c[cord.x + vx[i]][cord.y + vy[i]] == '#' |
          ans[cord.x + vx[i]][cord.y + vy[i]] != -1) {
        continue;
      };
      que.push_back({cord.x + vx[i], cord.y + vy[i], cord.d + 1});
      ans[cord.x + vx[i]][cord.y + vy[i]] = cord.d + 1;
    };
  };
  cout << ans[gx - 1][gy - 1] << endl;
  return 0;
}