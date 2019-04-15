#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <array>
#include <complex>
#include <string>
#include <utility>
#include <map>
#include <queue>
#include <list>
#include <functional>
#include <numeric>
#include <stack>
#include <tuple>

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 100000000;
const long long LINF = 1000000000000000000;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-6;
using pii = std::pair<int, int>;
using pLL = std::pair<long long, long long>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())

ll dp[110][4][4][4] = { 0 };
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
    int N;
    cin >> N;
    dp[0][0][0][0] = 1;
    //T=0,A=1,G=2,C=3
    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < 4; ++a) {
            for (int b = 0; b < 4; ++b) {
                for (int c = 0; c < 4; ++c) {
                    for (int d = 0; d < 4; ++d) {
                        if (b == 1 && c == 2 && d == 3) continue;
                        if (b == 2 && c == 1 && d == 3) continue;
                        if (b == 1 && c == 3 && d == 2) continue;
                        if (a == 1 && c == 2 && d == 3) continue;
                        if (a == 1 && b == 2 && d == 3) continue;
                        dp[i + 1][b][c][d] = (dp[i + 1][b][c][d] + dp[i][a][b][c]) % MOD;
                    }
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 4; ++k) {
                ans =(ans + dp[N][i][j][k])%MOD;
            }
        }
    }
    cout << ans << endl;
	return 0;
}