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
long long factorial(long long N){
	if(N==0) return 1;
	else return N*factorial(N-1)%(long long)((1e+9)+7);
} 
int main(void) {
   long long N,M;
   std::cin >> N >> M;
   if(N==M){
	   long long temp=factorial(N)*factorial(N)%(long long)((1e+9)+7);
	   std::cout << 2*temp%((long long)((1e+9)+7)) <<std::endl;
   }else if(std::abs(N-M)==1){
	   std::cout << (factorial(N)*factorial(M))%((long long)((1e+9)+7)) <<std::endl;
   }else{
	   std::cout << 0 <<std::endl;
   }
   return 0;
}