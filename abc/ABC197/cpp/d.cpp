#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1<<29; 

int main(){
    float n, x_0, y_0, x_n2, y_n2;
    cin >> n;
    cin >> x_0 >> y_0;
    cin >> x_n2 >> y_n2;
    float x_center = x_0 + ((x_n2 - x_0) / 2);
    float y_center = y_0 + ((y_n2 - y_0) / 2);
    float length = sqrt(pow((x_n2 - x_0), 2) + pow((y_n2 - y_0), 2)) / 2;
    float x_0_shift = x_0 - x_center;
    float y_0_shift = y_0 - y_center;
    float x_p1_shift = (x_0_shift * cos(2 * 3.141592 / n) - y_0_shift * sin(2 * 3.141592 / n));
    float y_p1_shift = (x_0_shift * sin(2 * 3.141592 / n) + y_0_shift * cos(2 * 3.141592 / n));
    float x_p1 = x_p1_shift + x_center;
    float y_p1 = y_p1_shift + y_center;
    cout << x_p1 << " " << y_p1 << endl;
}