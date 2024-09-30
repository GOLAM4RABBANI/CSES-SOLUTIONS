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
 int x;
 cin >> x;
 vl v;
 if(x==1){ cout << 1 << endl;return;}
 if(x>=2 && x<=3) {cout << "NO SOLUTION" <<endl;return;}
 if(x==4){ cout << "2 4 1 3" << endl;return;}
 for(int i = 1; i <= x;i++){
   v.pb(i);
 }
 for(int i=0;i < x;i+=2) cout << v[i] << " ";
 for(int i=1;i < x;i+=2) cout << v[i] << " ";
 cout << endl;
 
 
  
 
}
 
 
int main(){
   optimize()
   solve();
 
   return 0;
}
