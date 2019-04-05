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
int cnt(int x){
    int sum=0;
    while(x % 2 != 1){
        x = x / 2;
        sum++;
    }
    return sum;
}
int main() {
    int N;
    std::cin >> N;
    int count = 0;
    for(int i = 0; i < N; i++){
        int x;
        std::cin >> x;
        count += cnt(x);
    }
    std::cout << count << std::endl;
    return 0;
}