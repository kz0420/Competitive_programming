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
int F[100][15];
int main(void) {
	int N, t, a;
	
	std::cin >> N;
	long long T, A, n = 0;
	
	T = 1;
	A = 1;
	for (int i = 0; i < N; i++) {
		std::cin >> t >> a;
		n=(int)std::max((T+t-1)/t,(A+a-1)/a);
		
		T = n * t;
		A = n * a;
	}
	long long sum = 0;
	sum = T + A;
	std::cout << sum << std::endl;
	return 0;
}