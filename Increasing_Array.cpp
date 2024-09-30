/*
   *SRC:PRITUL
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
 
 
 
void solve(){
 ll x;
 cin >> x;
 vl v(x);
 loop(i,0,x) cin>>v[i];
 ll ans = 0;
 for(int i = 0;i < x-1;i++){
   if(v[i+1] < v[i]){
      ans += abs(v[i]-v[i+1]);
      v[i+1] = v[i];
   }
 
 }
 cout << ans << endl;
 
 
 
  
 
}
 
 
int main(){
   optimize()
   solve();
 
   return 0;
}
