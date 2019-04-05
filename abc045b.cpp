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
	std::string A,B,C;
	int a = 0, b = 0, c = 0,turn=1;
	std::cin >> A >> B >> C;
	for (size_t i = 0; i <= A.size() + B.size() + C.size(); i++) {
		if (turn == 1) {
			if (a == A.size()) {
				std::cout << "A" << std::endl;
				return 0;
			}
			else {
				
				if (A[a] == 'b')turn = 2;
				else if(A[a] == 'c')turn = 3;
				else turn = 1;
				a++;
			}
		}else if (turn == 2) {
			if (b == B.size()) {
				std::cout << "B" << std::endl;
				return 0;
			}
			else {
				
				if (B[b] == 'b')turn = 2;
				else if (B[b] == 'c')turn = 3;
				else turn = 1;
				b++;
			}
		}else if (turn == 3) {
			if (c == C.size()) {
				std::cout << "C" << std::endl;
				return 0;
			}
			else {
				
				if (C[c] == 'b')turn = 2;
				else if (C[c] == 'c')turn = 3;
				else turn = 1;
				c++;
			}
		}
		//std::cout << a << b << c<<std::endl;
	}
	std::cout << "Yes" << std::endl;
	return 0;
}