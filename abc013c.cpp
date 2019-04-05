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
	int N, H, A, B, C, D, E;
	ll j;
	ll cost = LINF;
	cin >> N >> H >> A >> B >> C >> D >> E;
	for (ll i = 0; i <= N; i++) {
		if ((N - i)*E - H - B * i <= 0) j = 0;
		else j = ((N - i)*E - H - B * i) / (D + E)+1;
		
		cost =min(cost, (ll)A * i + C * j);
	}
	cout << cost << endl;
	return 0;
}