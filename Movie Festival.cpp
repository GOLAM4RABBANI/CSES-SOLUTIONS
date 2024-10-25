/*
   *SRC:ME
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;
//Macros
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define sz size()
#define F first
#define S second
#define yes() cout << "YES" << endl;
#define no() cout << "NO" << endl;
#define all(x) (x).begin(),(x).end()
const double PI = acos(-1);
const double eps =1e-9;// abs(a-b) < eps
const ll mod = 2e5+123;
//A huge number, which apperantly would be considered as infinity
const ll INF = numeric_limits<ll>::max()-1;

ll power(ll x,ll y){
    ll ans = x;
    for(int i =1;i < y;i++){
        ans*=x;
    }
    return ans;
}// pows(x,y);
bool is_prime(ll in){
   for(int i = 2;i <= sqrtl(in);i++){
      if(i!=in){
         if(in%i==0) return 0;
      }
   }
   return 1;
}//prime NUMBER CHK




//* main code
void solve(){
 ll n;
 cin >> n;
 vpl v(n);
 for(int i=0;i < n;i++){
   ll l,r;
   cin >> l >> r;
   v[i]={r,l};
 }
 sort(all(v));
 ll last = 0;
 ll ans = 0;
 for(int i=0;i < n;i++){
   if(last <= v[i].S){
      ans++;
      last=v[i].F;
   }
 }
 cout << ans << endl;
}

int main(){
   optimize()
   // ll tc;
   // cin >> tc;
   // while(tc--)
   solve();

   return 0;
}
