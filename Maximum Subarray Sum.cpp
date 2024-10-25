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

ll power(int x,int y){
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

ll mint(ll k){
  ll ans =0;
  while(k%2==0){
   ans ++;
   k=k/2;
  }
  return ans;
}


//* main code
void solve(){
  ll n;
  cin >> n;

  vl v(n);
  for(int i=0; i < n;i++){
   cin >> v[i];
  }
  bool chk = 0;//while found greater than 0 chk = 1;
  ll tem = 0;//sum of a continuous sub arrey
  vl vans;// store ans
  ll ans = 0;// ans push_back to vans
  for(int i=0;i<n;i++){
   if(v[i] > 0) chk=1;
   if(chk == 1){
     tem += v[i];
     ans = max(ans,tem);
   }
   if(tem <= 0){
         tem=0;
         vans.pb(ans);
         chk = 0;
         ans = 0;
   }
   
  }
  vans.pb(ans);
  sort(vans.rbegin(),vans.rend());
  if(vans[0]==0){
   sort(all(v));
   cout << v[n-1] << endl;
  }else{
   cout << vans[0] << endl;
  }

  

}

int main(){
   optimize()
   // ll tc;
   // cin >> tc;
   // while(tc--)
   solve();

   return 0;
}
