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
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 1 << 21;
using pii = std::pair<int, int>;
#define SORT(v) std::sort(v.begin(), v.end())
int gcd(int M, int N) {
	if (M < N) std::swap(M, N);
	if (N == 0) return M;
	else return gcd(N, M%N);
}
int main(void) {
	int N;
	std::string s;
	
	
	std::cin >> s;
	std::stack<char> st;
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == 'S') {
			st.push('S');
		}
		else if(s[i]=='T'&&(st.empty()||st.top() == 'T' )){
			st.push('T');
		}
		else if(s[i] == 'T' && st.top() == 'S'){
			st.pop();
		}
	}
	std::cout << st.size() << std::endl;
	return 0;
}