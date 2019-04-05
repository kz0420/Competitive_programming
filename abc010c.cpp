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
double dist(int a, int b, int c, int d,int e,int f) {
	return sqrt((a - c)*(a - c) + (b - d)*(b - d)) + sqrt((e - c)*(e - c) + (f - d)*(f - d));
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, M,P,Q,n,T,V,x,y;
	cin >> N >> M >> P >> Q>> T >> V;
	cin >> n;
	vector<pii> C(n);
	double cost = 0;
	bool cango = false;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		cost = dist(N, M, x, y, P, Q);
		if (cost <=(double) T * V+EPS) cango = true;
	}
	if(cango) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
