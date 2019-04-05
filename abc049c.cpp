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
	int N, w=1;
	std::string s;
	std::cin >> s;
	bool flag = true;
	reverse(s.begin(), s.end());
	size_t i = 0;
	while (i<s.size()) {
		if (s.substr(i, 7) == "remaerd")i += 7;
		else if (s.substr(i, 6) == "resare")i += 6;
		else if (s.substr(i, 5) == "esare" || s.substr(i, 5) == "maerd")i += 5;
		else {
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	
	std::cout << "YES" << std::endl;
	
	return 0;
}
