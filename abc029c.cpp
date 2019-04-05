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
int n;
void dfs(string s) {
	if (s.size() != n) {
		dfs(s + 'a');
		dfs(s + 'b');
		dfs(s + 'c');
	}
	if(s.size()==n)	cout << s << endl;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;
	string s;
	dfs(s);
	
	return 0;
}