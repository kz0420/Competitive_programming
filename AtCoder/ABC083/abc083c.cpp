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
	long long N, M;
	long long ans = 0;
	std::cin >> N >> M;
	int i = 0;
	while ((long long)std::pow(2, i)*N <= M) {
		i++;
	}
	std::cout << i << std::endl;
	return 0;
}