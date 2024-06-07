
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int ans = 1;
    vector<int> vec;


    cin >> str;
  
    int n = str.size();
    
    for(int i = 0; i < n ; i++ ){
        if(str[i] == str[i + 1]){

            ans++;
            
        }else{
            vec.push_back(ans);
            ans = 1;
        }

    }
    sort(vec.begin(),vec.end(),greater<int>());
    cout << vec[0] << endl;
    
    
    return 0;
}
