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
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 1 << 21;
using pii = std::pair<int, int>;
#define SORT(v) std::sort(v.begin(), v.end())
int main(void) {
	int N,k;
	int ans = 1000000000;
	std::cin >> N>>k;
	std::vector<int> a(N);
	for (int i = 0; i < N; ++i) {
		std::cin >> a[i];
	}
	int dist1 = 0, dist2 = 0;
	int temp;
	for (int i = 0; i < N-k+1; ++i) {
		dist1 = std::abs(a[i]) + a[i+k-1] - a[i];
		dist2 = std::abs(a[i + k - 1]) + a[i+k-1] - a[i];
		temp = std::min(dist1, dist2);
		ans = std::min(ans, temp);
	}
	std::cout << ans << std::endl;
	return 0;
}
