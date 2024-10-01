/*
   *SRC:PDF_BINARY_SEARCH
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<pl> vpi;
typedef vector<pl> vpl;
//Macros
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define sz(x) (int)x.size()
#define F first
#define S second
#define yes() cout << "Yes" << endl;
#define no() cout << "No" << endl;
#define bte(x) (x).begin(),(x).end()
#define loop(i,a,b) for(int i = a;i < b;i++)//? loop plus
#define loopm(i,a,b) for(int i = a;i < b;i--)//? loop minus
const double PI = acos(-1);
const double eps =1e-9;// abs(a-b) > eps
const ll mod = 2e5+123;
//A huge number, which apperantly would be considered as infinity
const ll INF = numeric_limits<ll>::max()-1;

ll power(int x,int y){
    ll ans = x;
    for(int i =1;i < y;i++){
        ans*=x;
    }
    return ans;
}// pows(x,y);
bool is_prime(ll in){
   for(int i = 2;i <= sqrt(in);i++){
      if(i!=in){
         if(in%i==0) return 0;
      }
   }
   return 1;
}//prime NUMBER CHK



ll v[mod];
ll chk(ll x,ll n){
   ll ans = 0;
   for(int i=0; i < n;i++){
      ans += (x/v[i]);
      if(ans >= 1e18) return 1e18-1;
   }
   return ans;

}

void solve(){
   ll n,k,ans=1e18;
   cin >> n >> k;
   loop(i,0,n){
      cin >> v[i];
   }
   ll l =0;
   ll r =1e18;
   while(l <= r){
      ll m = (l+r)/2;
      ll tem = chk(m,n);
      // cout << tem << endl;
      
      if(tem < k){
         l = m+1;
      }else{
         ans = m;
         r = m-1;
      }
   }
   // for(int i =0; i < n;i++){
   //    cout << v[i] << " ";
   // }
   // cout << endl;
   cout << ans << endl;
}



int main(){
   optimize()
   solve();

   return 0;
}
