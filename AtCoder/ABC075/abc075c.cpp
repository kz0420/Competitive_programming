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
const int nmax = 50;
bool graph[nmax][nmax];
int a[nmax], b[nmax];
bool visited[nmax];
void dfs(int v,int N) {
    visited[v] = true;
    for (int i = 0; i < N; i++) {
        if (graph[v][i] == false) continue;
        if (visited[i] == true) continue;
        dfs(i, N);
    }
}
int main() {
    int N, M;
    std::cin >> N >> M;

    for (int i = 0; i < M; i++) {
        std::cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    int ans = 0;

    for (int i = 0; i < M; i++) {
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
        for (int j = 0; j < N; j++) {
            visited[j] = false;
        }

        dfs(0,N);
        bool bridge = false;
        for (int j = 0; j < N; j++) {
            if (visited[j] == false) {
                bridge = true;
            }
        }
        if (bridge) {
            ans+=1;
        }
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    
    std::cout << ans << std::endl;
    return 0;

}