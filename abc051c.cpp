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
    int sx, sy, tx, ty;
    std::cin >> sx >> sy >> tx >> ty;
    int dx = tx - sx, dy = ty - sy;
    std::cout << std::string(dx, 'R') << std::string(dy,'U');
    std::cout << std::string(dx, 'L') << std::string(dy, 'D');
    std::cout << 'D' << std::string(dx + 1, 'R') << std::string(dy + 1, 'U') << 'L';
    std::cout << 'U' << std::string(dx + 1, 'L') << std::string(dy + 1, 'D') << 'R';
    return 0;
}