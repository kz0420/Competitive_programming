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
typedef std::pair<int,int> pii;
int cnt_digits(long long n) {
    int res=0;
    while (n > 0) {
        n = n / 10;
        res++;
    }
    return res;
}
int main(){
    int ans,cur;
    long long N;
    std::cin >> N;
    ans = cnt_digits(N);
    for (long long i = 1LL; i*i <= N; i++) {
        if (N%i == 0) {
            long long B = N / i;
            cur = std::max(cnt_digits(B),cnt_digits(i));
        }
        if (ans > cur) {
            ans = cur;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}