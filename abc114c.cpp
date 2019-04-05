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
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())
ll n, ans = 0;
void dfs(ll x,int a,int b,int c) {
	if (x <= n) {
		if (a + b + c == 3) ans++;
		dfs(x * 10 + 3,1,b,c);
		dfs(x * 10 + 5, a, 1, c);
		dfs(x * 10 + 7, a, b, 1);
	}
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;
	dfs(0ll,0,0,0);
	cout << ans << endl;
	return 0;
}
