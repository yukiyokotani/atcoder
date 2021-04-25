#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

char imap[10][10];
bool reached[10][10];

struct Cordinate {
  int x;
  int y;
  Cordinate(int x = 0, int y = 0) : x(x), y(y){};
};

void rec(int o_y, int o_x, int &reached_count) {
  if (0 > o_x || 0 > o_y || o_x >= 10 || o_y >= 10 || imap[o_y][o_x] == 'x')
    return;
  if (reached[o_y][o_x]) return;
  reached[o_y][o_x] = true;
  ++reached_count;
  rec(o_y + 1, o_x, reached_count);
  rec(o_y - 1, o_x, reached_count);
  rec(o_y, o_x + 1, reached_count);
  rec(o_y, o_x - 1, reached_count);
};

int main() {
  int oCount = 0;
  deque<Cordinate> o_que, x_que;
  rep(i, 10) {
    rep(j, 10) {
      cin >> imap[i][j];
      if (imap[i][j] == 'o') {
        ++oCount;
      } else {
        x_que.push_back(Cordinate(j, i));
      };
    }
  }
  for (Cordinate x : x_que) {
    int reached_count = 0;
    rep(i, 10) { rep(j, 10) reached[i][j] = false; };
    imap[x.y][x.x] = 'o';
    rec(x.y, x.x, reached_count);
    if (reached_count == oCount + 1) {
      cout << "YES" << endl;
      return 0;
    }
    imap[x.y][x.x] = 'x';
  }
  cout << "NO" << endl;
  return 0;
}