//use upper bound and lower bound in vector intesd of the set
//stay alert while making segment tree 
//always alert about the return while build and and query ans
//use vector to use freq and to get the uniqe data(use unique,erase) etc



#include <bits/stdc++.h>
using namespace std;
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;

#define pb push_back
#define sz size()
#define F first
#define S second
#define y() cout << "YES" << endl;
#define n() cout << "NO" << endl;
#define all(x) (x).begin(),(x).end()
#define input(x) for(auto &u:(x)) cin >> u;
#define print(x) for(auto &u:(x)) cout << u;
#define endl '\n'

struct query{
   int st; 
   ll a;
   ll b;
};

vector<query> qur;
vector<ll> store;
vector<ll> tree;
map<ll,int> new_index;
vector<int> freq;

void build(int node, int b, int e){
   if(b == e){
     tree[node] = freq[b];  
     return;
   }

   int l = node << 1;
   int r = l | 1;
   int mid = (b + e) >> 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   tree[node] = tree[l] + tree[r];
}

void update(int node, int b, int e, int idx, int val) {
    if (b == e) {
        tree[node] += val;
        return;
    }

    int l = node << 1;
    int r = l | 1;
    int mid = (b + e) >> 1;

    if (idx <= mid) update(l, b, mid, idx, val);
    else update(r, mid + 1, e, idx, val);
    
    tree[node] = tree[l] + tree[r];
}

ll query(int node, int b, int e, int i, int j){
    if(e < i || j < b) return 0;
    if(b >= i && e <= j) return tree[node];

    int l = node << 1;
    int r = l | 1;
    int mid = (b + e) >> 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, q;
    cin >> n >> q;
    
    store.resize(n);
    vector<ll> values;
    
    for(int i = 0; i < n; i++){
        cin >> store[i];
        values.push_back(store[i]);
    }
    
    qur.resize(q);
    for(int i = 0; i < q; i++){
       char c;
       cin >> c >> qur[i].a >> qur[i].b;
       qur[i].st = (c == '!') ? 1 : 0;
       if(qur[i].st == 1){
           values.push_back(qur[i].b);
       }
    }
    
    // Coordinate compression
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());
    
    int b_size = values.size();
    for(int i = 0; i < b_size; i++){
        new_index[values[i]] = i + 1;
    }
    
    freq.assign(b_size + 1, 0);
    for(int i = 0; i < n; i++){
        freq[new_index[store[i]]]++;
    }
    
    tree.resize(4 * b_size + 10);
    build(1, 1, b_size);
    
    for(int i = 0; i < q; i++){
        if(qur[i].st == 1){
           update(1, 1, b_size, new_index[store[qur[i].a - 1]], -1);
           update(1, 1, b_size, new_index[qur[i].b], 1);
           store[qur[i].a - 1] = qur[i].b; 
        } else {
            // Use binary search on sorted vector instead of set
            int low_idx = lower_bound(values.begin(), values.end(), qur[i].a) - values.begin();
            int high_idx = upper_bound(values.begin(), values.end(), qur[i].b) - values.begin();
            
            if(low_idx >= b_size || high_idx == 0 || low_idx >= high_idx){
                cout << "0\n";
                continue;
            }
            
            high_idx--;
            cout << query(1, 1, b_size, low_idx + 1, high_idx + 1) << '\n';
        }
    }
    
    return 0;
}