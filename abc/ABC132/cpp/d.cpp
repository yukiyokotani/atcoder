#include <iostream>
#include <vector>
using namespace std;

uint64_t gcd(uint64_t a, uint64_t b)
{
    uint64_t r;
    while ((r = a % b) != 0) {
        a = b;
        b = r;
    }

    return b;
}

uint64_t binomial(uint64_t n, uint64_t r)
{
    r = (r > n / 2) ? n - r : r;
    uint64_t result = 1;

    for (uint64_t i = 1; i <= r; i++, n--) {
        int d = gcd(result, i);

        result /= d;
        result *= n / (i / d);
    }

    return result;
}

int main(){
    int N, K;
    cin >> N >> K;
    int ans;
    
    for(int i=1; i<=K; i++){
        ans = binomial(N-K+1, i) * binomial(K-1, i-1);
        ans = ans % int(1E9 + 7);
        cout << ans << endl;
    }
}