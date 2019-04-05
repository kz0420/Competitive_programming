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

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;

	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (!a[i]) {
			cout << n << endl;
			return 0;
		}
	}
	int l=0, r=0;
	ll temp = 1,temp2=1;
	int ans = 0;
	for (l = 0,r=l; r < n;++l) {
		while (r < n) {
			temp = temp2*a[r];
			if (temp > k) break;
			
			r++;
			temp2 = temp;
		}
		ans = max(ans, r - l);
		if (l >= r) r++;
		else temp2 /= a[l];
	}
	cout << ans << endl;
	return 0;
}