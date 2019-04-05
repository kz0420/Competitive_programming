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
#define INF 99999999
typedef std::pair<int,int> pii;

int main(){
    int N;
    std::cin >> N;
    std::vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        std::cin >> b[i];
    }
    for (int i = 0; i < N; i++) {
        std::cin >> c[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::sort(c.begin(), c.end());
    long long ans = 0,x,y;
    decltype(b)::iterator it1,it2;
    for (int i = 0; i < N; i++) {
        int cur_b = b[i];
        it1 = std::upper_bound(c.begin(), c.end(), cur_b);
        it2 = std::lower_bound(a.begin(), a.end(), cur_b);
        x = N - (it1 - c.begin());
        y= (it2 - a.begin());
        ans += x * y;
    }
    std::cout << ans << std::endl;
    return 0;
}