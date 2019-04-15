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
#include <functional>
#include <numeric>
#include <stack>
#include <tuple>

using namespace std;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 100000000;
const long long LINF = 1000000000000000000;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-6;
using pii = std::pair<int, int>;
using ll=long long;  
using pLL = std::pair<ll, ll>;
#define SORT(v) std::sort(v.begin(), v.end())
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int Ccount=0;
	bool up_check=false;
	if(s[0]=='A'&&islower(s[1])){
		for(size_t i=2;i<s.size()-1;++i){
			if(s[i]=='C') Ccount++;
			if(isupper(s[i])&&s[i]!='C') up_check=true;
		}
	}else{
		cout << "WA" <<endl;
		return 0;
	}
	if(Ccount==1&&up_check==false){
		cout << "AC" <<endl;
	}else{
		cout << "WA" <<endl;
	}
    return 0;
}
