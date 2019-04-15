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
	std::vector<int> s(N);
	int ans = 0;
	for (int i =0 ; i < N; ++i) {
		std::cin >> s[i];
		ans += s[i];
	}
	SORT(s);
	int minpoint=1000;
	for (int i = 0; i < N; ++i) {
		if (s[i] % 10!= 0) {
			minpoint =std::min(minpoint, s[i]);
		}
	
	}
	if (ans % 10 != 0) {
		std::cout << ans << std::endl;
	}
	else if (ans % 10 == 0 && minpoint == 1000) {
		std::cout << 0 << std::endl;
	}
	else {
		std::cout << ans-minpoint << std::endl;
	}
	return 0;
}