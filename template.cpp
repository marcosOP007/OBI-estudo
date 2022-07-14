#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define eps 1e-8
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
#define SORT(x) sort(x.begin(),x.end())

template<class T>
void o(const T &a,bool space=false){
	cout << a << (space?' ':'\n');
}
template<class T>
void g(T &a){
	cin >> a;
}
template<class T>
void equals(T &a, T &b){
	if(is_floating_point<T>::value){
	    return fabs(a - b) < eps;
	}
	    return a == b;
}



void solve(){
	int n;  cin>>n;
    

}



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; t = 1; cin >> t;
	while(t--) solve();


    return 0;
}
