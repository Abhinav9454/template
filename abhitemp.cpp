#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
#define ch char
#define dl double
#define fl float
#define pi 3.142857143
#define mod17 1000000007
#define mod19 1000000009
#define rev(ans) reverse(ans.begin(),ans.end());
#define so12(ans) sort(ans.begin(),ans.end());
// looping concept
#define vecinput1(ans, n) for (ll i = 0; i < n; i++) cin >> ans[i];
#define vecinput2(ans, n , m) for (ll i = 0; i < n; i++){for (ll j = 0; j < n; j++){ cin>> ans[i][j]; } };
#define fi(ans,n) for(ll i=0;i<n;i++) cout<< ans[i] <<" ";
#define last cout<<endl;
//some vector && map
#define vec1 vector<ll>
#define vec2 vector<vector<ll>>
#define mpin map<int,int>
#define unmpin unordered_set<int,int>
#define mpch map<char,int>
#define umpch unordered_set<char,int>
#define mpst map<string,int>
#define umpst unordered_set<string,int>

// templetes-> is under process
template<typename abhi> abhi gcd(abhi a,abhi b){ if(a==0) return b;    return gcd(b%a,a);}
template<typename abhi> abhi lcm(abhi a, abhi b){ if (a == 0 || b == 0) return 0; return (a/gcd(a,b))*b; }
template<typename abhi> bool isPrime(abhi n) { if (n < 2) return false; if (n == 2 || n == 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (abhi i = 5; i * i <= n; i += 6) { if (n % i == 0 || n % (i + 2) == 0) return false; } return true; }
template<typename abhi> abhi countPrimes(abhi n) { vector<bool> vec(n+1,true); vec[0]=vec[1]=false; abhi c = 0; for (abhi i = 2; i < n; i++) { if(vec[i]){ c++; for(abhi j=2*i;j<n;j+=i){ vec[j]=false; } }} return c; }
template<typename abhi> abhi co1binary(ll n){abhi c=0;while(n){ c+=n&1; n>>=1;}return c;}
// templetes-> is under process
void abhinavnagvanshi(){
    // abhinav nagvanshi
}
//select the single or a multiple test case
int main(){
    //  abhinavnagvanshi();
    ll T;
    cin>>T;
    while (T--){
       abhinavnagvanshi(); 
    }
    return 0;
}
