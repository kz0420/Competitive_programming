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
	int N, M;
	;
	long long ans = 0;
	std::cin >> N;
	std::vector<long long> a(N), b;
	for (int i = 0; i < N; ++i) {
		std::cin >> a[i];
	}

	std::sort(a.begin(), a.end(), std::greater<int>());
	int count = 1;
	for (int i = 0; i <N-1; ++i) {
		if (a[i] == a[i + 1]) {
			b.push_back(a[i]);
			i++;
		}
		

		if (b.size() == 2) {
			std::cout << b[0] * b[1] << std::endl;
			return 0;
		}
	}
	std::cout << 0 << std::endl;
	return 0;
}
