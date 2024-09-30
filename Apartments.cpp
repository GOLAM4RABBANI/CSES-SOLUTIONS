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
   int n,m,k;
   int ans = 0;
   cin >> n >> m >> k;
   vl nn(n),mm(m);
   loop(i,0,n) cin >> nn[i];
   loop(i,0,m)cin >> mm[i];
 
   sort(bte(nn));
   sort(bte(mm));
   int t = 0,l=0;
   abar:
   for(int i = t;i < n;i++){
      for(int j = l;j<m;j++){
         if(abs(nn[i]-mm[j])<=k){
            ans++;
            t=i+1;
            l=j+1;
            goto abar;
         }else{
            if(nn[i]<mm[j]){
               l=j;
               t=i+1;
               goto abar;
            }
         }
      }
   }
 
 
   cout << ans << endl;
}
 
 
int main(){
   optimize()
   solve();
 
   return 0;
}
