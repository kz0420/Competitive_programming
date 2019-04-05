floor(s/2)=s/2
ceil(s/2)=(s+2-1)/2
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
	int N, g=0,p=0,win=0,drow=0,lose=0;
	std::string s;
	std::cin >> s;
	for (size_t i = 0; i < s.size(); i++) {
		if (p == g && s[i] == 'g') {
			drow++;
			g++;
		}
		else if (p < g && s[i] == 'g') {
			win++;
			p++;
		}
		else if (p == g && s[i] == 'p') {
			lose++;
			g++;
		}
		else if (p < g && s[i] == 'p') {
			drow++;
			p++;
		}
	}
	std::cout << win - lose << std::endl;
	return 0;
}