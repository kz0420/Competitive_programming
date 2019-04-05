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
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, M,P,Q;
	cin >> N >> M >> P >> Q;
	if (N == M || N == P || N == Q) {
		cout << "NO" << endl;
		return 0;
	}
	int count = 0;
	while (N > 0) {
		if (N - 3 != M && N - 3 != P && N - 3 != Q && N - 3 >= 0) {
			N -= 3;
			count++;
		}else if (N - 2 != M && N - 2 != P && N - 2 != Q && N - 2 >= 0) {
			N -= 2;
			count++;
		}else if (N - 1 != M && N - 1 != P && N - 1 != Q) {
			N--;
			count++;
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
		if (count > 100) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
