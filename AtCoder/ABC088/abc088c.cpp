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
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
#define INF 99999999
typedef std::pair<int,int> pii;
int main(){
    std::vector<std::vector<int>> c(3,std::vector<int>(3,0));
    std::vector<int> a(3),b(3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cin >> c[i][j];
        }
        b[i]=c[0][i];
    }
    a[0]=0;
    a[1]=(c[1][0]+c[1][1]-b[1]-b[0])/2;
    a[2]=(c[2][0]+c[2][1]-b[1]-b[0])/2;
    for(int i=0;i<3;i++){
        std::cout << a[i] <<b[i]<<std::endl;
    }
    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++){
            if(c[i][j]!=a[i]+b[j]){
                std::cout << "No" <<std::endl;
                return 0;
            }
        }
    }
    std::cout << "Yes" <<std::endl;
    return 0;
}