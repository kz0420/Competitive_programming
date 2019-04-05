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
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }
    SORT(a);
    std::vector<int> color(9);
    for (int i = 0; i < N; i++) {
        if (a[i] >= 1 && a[i] <= 399) {
            color[1]++;
        }
        else if (a[i] >= 400 && a[i] <= 799) {
            color[2]++;
        }
        else if (a[i] >= 800 && a[i] <= 1199) {
            color[3]++;
        }
        else if (a[i] >= 1200 && a[i] <= 1599) {
            color[4]++;
        }
        else if (a[i] >= 1600 && a[i] <= 1999) {
            color[5]++;
        }
        else if (a[i] >= 2000 && a[i] <= 2399) {
            color[6]++;
        }
        else if (a[i] >= 2400 && a[i] <= 2799) {
            color[7]++;
        }
        else if (a[i] >= 2800 && a[i] <= 3199) {
            color[8]++;
        }
        else {
            color[0]++;
        }
    }
    int ans = 0;
    for (int i = 1; i < 9; i++) {
        if (color[i] > 0) {
            ans++;
        }
    }
    std::cout << ans << " " << ans + color[0] << std::endl;
    return 0;
}