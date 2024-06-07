#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0);
 
     
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0;i < n-1; i++){
        int p;
        cin >> p;
        vec.push_back(p);
 
    }
 
    sort(vec.begin(),vec.end());
 
    for(int i =1;i < n;i++){
        if(i != vec[i-1]){
 
            cout << i << endl;
            break;
 
        }else if(i == n-1){
            cout << i+1 << endl;
 
        }
        
 
 
    }
    
    return 0;
}
