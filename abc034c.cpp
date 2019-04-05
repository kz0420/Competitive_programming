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
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 100000000;
const long long LINF = 1000000000000000000;
const int MOD = (int)1e9 + 7;
using pii = std::pair<int, int>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())
ll calc(ll a, ll b, ll p) {
	if (b == 0) return 1;
	if (b % 2 == 0) {
		ll d = calc(a, b / 2, p);
		return (d*d) % p;
	}
	else {
		return (a*calc(a, b - 1, p)) % p;
	}
}
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll N, M;
	cin >> N >> M;
	ll ans = 1;
	for (int i = 1; i <= N + M - 2; ++i) {
		ans *= i;
		ans %= MOD;
	}
	for (int i = 1; i <= M-1; ++i) {
		ans *= (calc(i, MOD - 2, MOD) % MOD);
		ans %= MOD;
	}
	for (int i = 1; i <= N-1; ++i) {
		ans *= (calc(i, MOD - 2, MOD) % MOD);
		ans %= MOD;
	}
	cout << ans%MOD <<endl;
	return 0;
}
