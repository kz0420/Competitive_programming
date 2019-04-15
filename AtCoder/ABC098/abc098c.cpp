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
	std::string s;
	int N, e_sum = 0, w_sum = 0, e_i = 0,w_i=0,ans=1000000;
	std::cin >> N>> s;
	for (int i = 0; i < N; ++i) {
		if (s[i] == 'E')e_sum++;
		else w_sum++;
	}
	if (s[0] == 'E') {
		ans = e_sum - 1;
		e_i++;
		e_sum--;
	}
	else if (s[0] == 'W') {
		ans = e_sum;
		w_i++;
		w_sum--;
	}
	int tempe=0, tempw=0;
	for (int i = 1; i < N; ++i) {
		if (i==N-1) {
			ans = std::min(ans, w_i);
		}
		
		if (s[i] == 'E') {
			e_sum--;
			ans = std::min(ans, e_sum + w_i);
			e_i++;
		}
		else if(s[i] == 'W'){
			w_sum--;
			ans = std::min(ans, e_sum + w_i);
			w_i++;
		}
		//std::cout << e_i << " " << w_i <<" " <<ans<<std::endl;
	}
	
	std::cout << ans << std::endl;
	return 0;
	
}
