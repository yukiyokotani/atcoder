#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int N, M;
  cin >> N >> M;
  int left = 1, right = M + 1;
  while (left < right) {
    cout << left << ' ' << right << endl;
    left++;
    right--;
  }
  left = M + 2, right = 2 * M + 1;
  while (left < right) {
    cout << left << ' ' << right << endl;
    left++;
    right--;
  }
}