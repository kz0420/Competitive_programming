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

int dp[3100][3100] = { 0 };
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s,t;
	cin >> s >> t;
	for (size_t i = 0; i < s.size(); ++i) {
		for (size_t j = 0; j < t.size(); ++j) {
			if (s[i] == t[j])chmax(dp[i + 1][j + 1], dp[i][j] + 1);
			chmax(dp[i + 1][j + 1], dp[i+ 1][j]);
			chmax(dp[i + 1][j + 1], dp[i][j + 1]);
		}
	}

	string ans = "";
	int i = (int)s.size();
	int j = (int)t.size();
	while (i > 0 && j > 0) {
		if (dp[i][j] == dp[i - 1][j]) {
			--i;
		}
		else if (dp[i][j] == dp[i][j-1]) {
			--j;
		}
		else {
			ans = s[i - 1] + ans;
			--i;
			--j;
		}
	}
	cout << ans << endl;
	return 0;
}