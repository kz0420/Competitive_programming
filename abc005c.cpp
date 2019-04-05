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
	int T, N, M;
	cin >> T >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
	}
	cin >> M;
	vector<int> b(M);
	for (int i = 0; i < M; ++i) {
		cin >> b[i];
	}
	if (N < M) {
		cout << "no" << endl;
		return 0;
	}
	bool sell = true;
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			if (b[i] <= a[j]+T && b[i] >= a[j]) {
				a[j] = INF;
				break;
			}
			else if (j == N - 1) {
				sell = false;
				break;
			}
		}
		if (!sell) {
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	return 0;
}
