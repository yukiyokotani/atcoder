#include <algorithm>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  int N, Y;
  cin >> N >> Y;
  for (int x = 0; x <= N; x++) {
    int res = Y - 10000 * x;
    if (res < 0) break;
    for (int y = 0; y <= N - x; y++) {
      res = Y - 10000 * x - 5000 * y;
      if (res < 0) break;
      if (res == (1000 * (N - x - y))) {
        cout << x << ' ' << y << ' ' << (N - x - y) << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}
