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
	long long N,X,Y,H,ans_x=0,ans_y=0,ans_h=0;
	std::cin >> N;
	std::vector<long long> x(N), y(N), h(N);
	for (int i = 0; i < N; ++i) {
		std::cin >> x[i] >> y[i] >> h[i];
		if (h[i] >= 1) {
			X = x[i];
			Y = y[i];
			H = h[i];
		}
	}
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			long long V = H + std::abs(X - i) + std::abs(Y - j);
			V = std::max(V, 0LL);
			bool flag = true;
			for (int k = 0; k < N; k++) {
				long long VV = V - std::abs(x[k] - i) - std::abs(y[k] - j);
				VV = std::max(VV, 0ll);
				if (h[k] != VV) {
					flag = false;	
				}
			}
			if (flag == true) {
				std::cout << i << " " << j << " " << V << std::endl;
				return 0;
			}	
		}
	}
	return 0;
}
