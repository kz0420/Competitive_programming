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
#include <numeric>
#include <stack>
#include <tuple>


int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 1 << 21;
using pii = std::pair<int, int>;
#define SORT(v) std::sort(v.begin(), v.end())

int main(void) {
	long long n, k;
	std::cin >> n >> k;
	long long temp = 0,ans=0;
	ans = (n / k)*(n / k)*(n / k);
	if (k % 2 == 0) {
		temp = n / (k / 2) - n / k;
		ans += temp * temp*temp;
	}
	std::cout << ans << std::endl;
	return 0;
}