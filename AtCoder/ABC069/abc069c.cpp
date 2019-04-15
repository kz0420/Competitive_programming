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
	int N, M,ans=0, count = 0,temp=0;
	
	cin >> N;
	vector<long long> a(N);
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
		if (a[i] % 4 == 0) {
			count++;
		}
		else if (a[i] % 4 == 2) {
			temp++;
			if (temp == 2) { count++, temp = 0; }
		}
	}
	if (count >= N / 2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}
