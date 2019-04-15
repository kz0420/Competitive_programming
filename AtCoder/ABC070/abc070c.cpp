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
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
#define INF 1<<21
using pii = std::pair<int,int>;
#define SORT(v) std::sort(v.begin(), v.end())
long long gcd(long long i, long long j) {
    if (i < j) std::swap(i, j);
    if (i%j == 0) return j;
    return gcd(j, i%j);
}
long long lcm(long long a, long long b) {
    return (a / gcd(a,b))*b;
}
int main(){
    int N;
    std::cin >> N;
    long long a, b,ans=1LL;
    for (int i = 0; i < N; i++) {
        std::cin >> b;

        ans = lcm(ans, b);
    }
    std::cout << ans << std::endl;
    return 0;
}