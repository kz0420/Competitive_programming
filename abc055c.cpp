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
	long long N,M;
	std::cin >> N >> M;
	if (N >= M) {
		std::cout << M/2;
	}
	else {
		if((M / 2 - N) % 2==0) N += (M / 2 - N) / 2;
		else N += (M / 2 - N-1) / 2;
		std::cout << N <<std::endl;
	}
	return 0;
}