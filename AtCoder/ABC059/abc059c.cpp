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
	long long n, sum = 0, a, ans1 = 0, ans2 = 0, sum1 =0 ,sum2=0;
	cin >> n;
	

	for (int i = 0; i < n; ++i) {
		cin >> a;
		sum1 += a;
		sum2 += a;
		if (i % 2 == 0) {
			if (sum1 <= 0) {
				ans1 += 1 - sum1;
				sum1 = 1;
			}
			if (sum2 >= 0) {
				ans2 += 1 + sum2;
				sum2 = -1;
			}
		}
		else {
			if (sum1 >= 0) {
				ans1 += 1 + sum1;
				sum1 = -1;
			}
			if (sum2 <= 0) {
				ans2 += 1 - sum2;
				sum2 = 1;
			}
		}
	}
	cout << min(ans1,ans2) << endl;
	return 0;
}
