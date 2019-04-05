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
#define SORT(v) std::sort(v.begin(), v.end())

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k, ans = 0, max_ele = 0;
	cin >> n;
	int a[100001] = {0};
	for (int i = 0; i < n;++i) {
		cin >> k;
		a[k]++;
		max_ele=max(max_ele, k);
	}
	
	for (int i = 0; i <= max_ele; ++i) {
		if (i == 0) {
			ans = a[0] + a[1];
		}
		else if (i == max_ele) {
			ans=max(ans, a[i] + a[i - 1]);
		}
		else {
			ans=max(ans, a[i - 1] + a[i + 1] + a[i]);
		}
	}
	cout << ans << endl;
	return 0;
}