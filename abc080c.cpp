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
#define INF 1<<21
using pii = std::pair<int, int>;
#define SORT(v) std::sort(v.begin(), v.end())
int F[100][15];
int main(void) {
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    std::vector<std::vector<int>> P(N, std::vector<int>(11, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 10; j++) {
            std::cin >> F[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 11; j++) {
            std::cin >> P[i][j];
        }
    }
    int res = -(1<<30);
    for (int b =1; b < (1 << 10); b++) {
        int curcost = 0;
        for (int i = 0; i < N; i++) {
            int c = 0;
            for (int j = 0; j < 10; j++) {
                if ((b >> j & 1) && F[i][j]) {
                    c++;
                }
                
            }
            curcost += P[i][c];
        }
        res = std::max(res, curcost);
    }
    std::cout << res << std::endl;
    return 0;
}