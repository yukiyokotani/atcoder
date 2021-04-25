#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  string S;
  cin >> S;
  int l = S.length() - 1;
  long ans = 0;
  for (int bit = 0; bit < (1 << l); ++bit) {
    vector<int> ix;
    for (int i = 0; i < l; ++i) {
      if (bit & (1 << i)) ix.push_back(i);
    }
    ix.push_back(INF);  //下のsubstrのため無限に遠いindexを最後に入れておく
    int begin = 0;
    for (int i = 0; i < ix.size(); ++i) {
      ans += stol(S.substr(begin, ix[i] + 1 - begin));
      begin = ix[i] + 1;
    }
  }
  cout << ans << endl;
  return 0;
}