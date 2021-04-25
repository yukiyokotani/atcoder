#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

char map[500][500];
bool reached[500][500];

void search(int x, int y, int W, int H) {
  //マップ外or壁なのでreturn
  if (x < 0 || W <= x || y < 0 || H <= y || map[x][y] == '#') return;
  //すでに探索済みなのでreturn
  if (reached[x][y]) return;
  //今のマスを探索済みにする
  reached[x][y] = true;
  // 4方に再帰探索
  search(x + 1, y, W, H);
  search(x - 1, y, W, H);
  search(x, y + 1, W, H);
  search(x, y - 1, W, H);
}

int main() {
  int H, W;
  cin >> H >> W;
  struct Cordinate {
    int x;
    int y;
    Cordinate(int x = 0, int y = 0) : x(x), y(y){};
  };
  Cordinate home;
  Cordinate shop;
  char input;
  rep(j, H) {
    rep(i, W) {
      cin >> input;
      map[i][j] = input;
      if (input == 's') {
        home.x = i;
        home.y = j;
      } else if (input == 'g') {
        shop.x = i;
        shop.y = j;
      };
    };
  };
  rep(j, H) { rep(i, W) reached[i][j] = false; };
  search(home.x, home.y, W, H);
  if (reached[shop.x][shop.y]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}