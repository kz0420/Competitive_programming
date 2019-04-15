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
	int N, M;
	cin >> N;
	vector<int> a(N);
	map<int, int> mp;
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
		mp[a[i]];
	}
	int j = 0;
	for (auto x = mp.begin(); x != mp.end(); x++) {
		x->second = j;
		j++;
	}
	for (int i = 0; i < N; ++i) {
		cout << mp[a[i]] << endl;
	}
	return 0;
}