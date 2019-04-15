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
	int n;
	ll a, b;
	cin >> n;
	vector<ll> imos(1000002);
	ll temp = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		imos[a]++;
		imos[b+1]--;
		temp = max(temp, b);
	}
	ll sum = 0,ans=imos[0];
	for (size_t i = 0; i <= temp; ++i) {
		imos[i+1] += imos[i];
		ans = max(ans, imos[i + 1]);
	}
	cout << ans << "\n";
	return 0;
}