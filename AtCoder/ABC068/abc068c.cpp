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
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 1 << 21;
using pii = std::pair<int, int>;
#define SORT(v) std::sort(v.begin(), v.end())
int main(void) {
	int N,M;
	std::cin >> N >> M;
	std::vector<bool> A(N+1), B(N+1);
	int a, b;
	for (int i = 0; i < M; ++i) {
		std::cin >> a >> b;
		if (a == 1) {
			A[b] = true;
		}
		else if (b == N) {
			B[a] = true;
		}
	}
	for (int i = 1; i < N + 1; ++i) {
		if (A[i] == true && B[i] == true) {
			std::cout << "POSSIBLE" << std::endl;
			return 0;
		}
	}
	std::cout << "IMPOSSIBLE" << std::endl;
	return 0;
}