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
int main(){
    int N,sum=0;
    std::cin >> N;
    std::vector<std::pair<int,int>> A(N);
    for(int i=0;i<N;i++){
        std::cin >> A[i].second >> A[i].first;//yx red
    }
    std::vector<std::pair<int,int>> B(N);
    for(int i=0;i<N;i++){
        std::cin >> B[i].first >> B[i].second; //xy blue
    }
    std::sort(A.begin(),A.end());
    std::sort(B.begin(),B.end());
    std::vector<int> used(N);
    for(int i=0;i<N;i++){
        
        for(int j=N-1;j>=0;j--){
            if(used[j]){
                continue;
            }
            if(B[i].first>A[j].second&&B[i].second>A[j].first){
                used[j]=1;
                sum++;
                break;
            }
                
        }
    }
    std::cout << sum <<std::endl;
}