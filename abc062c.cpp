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
const double EPS = 1e-6;
using pii = std::pair<int, int>;
using pLL = std::pair<long long, long long>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll n,m,ans=INF,a,b,c,smax,smin;
	cin >> n>>m;
	if (!(n % 3)|| !(m % 3)) {
		cout << 0 << endl;
		return 0;
	}
	else{
		ans = min(m,n);
	}
	
	for (ll i = 1; i <= n; ++i) {
		a = i * m;
		b = (n-i)*(m / 2);
		c = (n - i)*(m-(m / 2));
		smax = max(a, max(b, c));
		smin = min(a, min(b, c));
		ll temp = smax - smin;
		ans = min(ans, temp);
	}
	for (ll i = 1; i <= m; ++i) {
		a = i * n;
		b = (m - i)*(n / 2);
		c = (m - i)*(n - (n / 2));
		smax = max(a, max(b, c));
		smin = min(a, min(b, c));
		ll temp = smax - smin;
		ans = min(ans, temp);
	}
	cout << ans << endl;
	return 0;
}

s