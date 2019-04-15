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
const double EPS = 1e-6;
using pii = std::pair<int, int>;
using pLL = std::pair<long long, long long>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,x,ans=0;
	int sum = 1,temp=0;
	cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	for (int i =0; i <n ; ++i) {
		if (i != n - 1){
			if (a[i] == a[i + 1]) sum++;
			else {
				ans += sum / 2;
				sum = 1;
			}
		}
		else {
			ans += sum / 2;
			sum = 1;	
		}
	}
	cout << ans << endl;
	return 0;
}