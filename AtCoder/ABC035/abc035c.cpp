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
	cin >> N >> M;;
	vector<long long> a(N+1,0LL);
	for (int i = 0; i < M; ++i) {
		long long l, r;
		cin >> l >> r;
		a[l-1]++;
		a[r]--;
	}
	for (int i = 1; i <= N; ++i) {
		a[i] = a[i-1]+a[i];
	}
	for (int i = 0; i < N; ++i) {
		cout << a[i] % 2;
	}
	cout << endl;
	return 0;
}
