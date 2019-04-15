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
	int N, b,x;
	long long ans = 0;
	std::cin >> N;
	std::vector<int> a(N);
	for (int i = 0; i < N; ++i) {
		std::cin >> x;
		a[i] = x-(i+1);
		
	}
	SORT(a);
	b = a[N / 2];
	for (int i = 0; i < N; i++) {
		ans += std::abs(a[i] - b);
	}
	std::cout << ans << std::endl;
	return 0;
	
}
