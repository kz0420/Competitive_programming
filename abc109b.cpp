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
using pLL = std::pair<long long, long long>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	size_t N;
	cin >> N;
	string s;
	vector<string> w;
	
	cin >> s;
	w.push_back(s);
	for (size_t i = 1; i <N; ++i) {
		string k;

		cin >> k;
		w.push_back(k);
		if (s[s.size()-1] != k[0]) {
			cout << "No" << endl;
			return 0;
		}
		s = k;

	}
	SORT(w);
	w.erase(unique(w.begin(), w.end()),w.end());
	if (w.size() != N) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
	return 0;
}

