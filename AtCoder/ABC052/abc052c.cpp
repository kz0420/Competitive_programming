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
std::vector<bool> IsPrime={true};
std::map<int, int> fact;
void sieve(int n) {
	if ((size_t)n + 1 > IsPrime.size()) {
		IsPrime.resize(n + 1, true);
	}
	IsPrime[0] = false;
	IsPrime[1] = false;

	for (int i = 2; i <= n; i++) {
		if (IsPrime[i]) {
			for (int j = 2; i*j <= n; j++) {
				IsPrime[i*j] = false;
			}
		}
	}
}
long long factrial(int n) {
	if (n == 0) return 1;
	else return n * factrial(n - 1);
}
void factfact(int m) {
	int temp = 0;
	for (int i = 2; i <= m; ++i) {
		for (int j = 2; j <=m; ++j) {
			if (IsPrime[j]) {
				temp = i;
				while (temp%j == 0 && temp != 0) {
					temp /= j;
					fact[j]++;
				}
			}
		}
	}
}

int main(void) {
	int N;
	long long sum=1;
	std::cin >> N;

	sieve(N);

	factfact(N);
	std::map<int,int>::iterator itr;
	for (itr = fact.begin(); itr != fact.end(); itr++) {
		//std::cout << itr->first << " "<< itr->second << std::endl;
		sum *= (itr->second + 1);
		sum %= (int)((1e+9) + 7);
	}
	std::cout << sum << std::endl;
	return 0;
}
