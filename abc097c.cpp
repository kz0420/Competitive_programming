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
	std::string in;
	int k;
	std::cin >> in >> k;
	std::vector<std::string> s;
	for (size_t i = 0; i < in.size(); i++) {
		for (size_t j = 1; j <=k ; j++) {	
		s.push_back(in.substr(i, j));
		//std::cout << i <<" " <<i+j << " " << in.substr(i, j) <<std::endl;
		}
		//std::cout << " " << std::endl;
	}
	SORT(s);
	s.erase(std::unique(s.begin(), s.end()), s.end());
	/*for (size_t i = 0; i < s.size(); i++) {
		std::cout << s[i] << std::endl;
	}*/
	std::cout << s[k-1] << std::endl;
	
}