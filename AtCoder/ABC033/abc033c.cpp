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

using namespace std;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 100000000;
const long long LINF = 1000000000000000000;
const int MOD = (int)1e9 + 7;
using pii = std::pair<int, int>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	//ll N, M;
	//cin >> N >> M;
	string s;
	cin >> s;
	int count = 0;
	size_t i = 0;
	int temp = 0;
	while ( i < s.size()) {
		if (s[i] == '0') {
			temp++;
		}
		if (s[i] == '+'||i==s.size()-1) {
			if (temp == 0)count++;
			temp = 0;
		}
		i++;
	}
	cout << count << endl;
	return 0;
}