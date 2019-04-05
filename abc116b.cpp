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
	int N;
	cin >> N;
	vector<int> a;
	a.push_back(N);
	if (N == 2) {
		cout << 4 << endl;
		return 0;
	}
	else if (N==1) {
		cout << 4 << endl;
		return 0;
	}
	size_t i = 1;
	while (1) {
		if (N % 2 == 0) {
			N /= 2;
			a.push_back(N);
			
		}
		else {
			N = N * 3 + 1;
			a.push_back(N);
			
		}

		if (a.size() >= 3) {
			if (a[i] == 1 && a[i - 1] == 2 && a[i - 2] == 4) {
				cout << i+2 << endl;
				return 0;
			}

		}
		//cout << a[i] << i << endl;
		i++;
		
	}
	return 0;
}