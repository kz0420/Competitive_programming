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
	long long X;
	std::cin >> X;
	long long ans = 0;
	ans =(X / 11) * 2;
	long long t = X % 11;
	if (t >= 1 && t <= 6) ans++;
	else if (t >= 7) ans += 2;
	std::cout << ans << std::endl;
	return 0;
}