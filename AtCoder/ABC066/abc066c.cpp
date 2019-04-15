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
	int N;
	std::cin >> N;
	std::vector<long long> a(N);
	for (int i = 0; i < N; i++) {
		std::cin >> a[i];
	}
	int i;
	for (i = N - 1; i >= 0; i -= 2) {
		std::cout << a[i] << " ";
	}
	if (N%2==0) {
		for (i = 0; i < N; i += 2) {
			std::cout << a[i] << " ";
		}
	}else {
		for (i = 1; i < N; i += 2) {
			
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}