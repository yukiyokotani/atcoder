#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> tree(N);
  vector<int> reached(N);
  int edge_from, edge_to;
  rep(i, M) {
    cin >> edge_from >> edge_to;
    tree[edge_from - 1].push_back(edge_to - 1);
  };
  // rep(i, N) {
  //   cout << i << ": [";
  //   for (int n : tree[i]) {
  //     cout << n << ", ";
  //   }
  //   cout << "]" << endl;
  // }
  int node = 0;
  int ans = 0;
  
  bool flag;
  rep(i, N) {
    deque<int> que;
    flag = false;
    if (reached[i]) continue;
    que.push_front(i);
    // cout << "start_node: " << i << " **********\n";
    while (que.size()) {
      if (flag) {
        while (que.size()) {
          node = que.front();
          reached[node] = true;
          for (int n : tree[node]) {
            if (!reached[n]) que.push_front(n);
          };
          que.pop_front();
        };
        break;
      };
      // for (int n : que) {
      //   cout << n << ", ";
      // };
      // cout << endl;
      node = que.front();
      if (reached[node]) {
        flag = true;
      } else {
        reached[node] = true;
        que.pop_front();
      };
      for (int n : tree[node]) {
        que.push_front(n);
      };
    };
    // cout << "rest_que: " << que.size();
    // if (!que.size() && !flag) {
    //   cout << " -> tree" << endl;
    // } else {
    //   cout << " -> Not tree" << endl;
    // };
    if (!que.size() && !flag) ++ans;
  };
  cout << ans << endl;
  return 0;
}

// 7 7
// 1 2
// 2 3
// 2 4
// 2 5
// 4 6
// 4 7
// 6 7