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
	int N,sum=0,ave,ans=INF;
	std::cin >> N;
	std::vector<int> a(N);
	for (int i = 0; i < N; i++) {
		std::cin >> a[i];
	}
	for (int j = -100; j <= 100; j++) {
		sum = 0;
		for (int i = 0; i < N; i++) {
			sum += (j - a[i])*(j - a[i]);
		}
		ans=std::min(ans, sum);
	}
	std::cout << ans << std::endl;
	return 0;
}