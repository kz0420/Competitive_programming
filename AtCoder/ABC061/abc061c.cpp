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
int main(){
    long long N, K;
    long long count = 0;
    std::cin >> N >> K;
    std::vector<pii> a(N+1);
    a[0].first = a[0].second = 0;
    for (int i = 1; i <= N; i++) {
        std::cin >> a[i].first >> a[i].second;
    }
    SORT(a);
    for (int i = 1; i <= N; i++) {
        
        int b = a[i].second;
        K -= b;
        if (K<=0) {
            std::cout << a[i].first << std::endl;
            return 0;
        }
    }
    return 0;
}