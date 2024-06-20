#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int t,n, cont=0;
    string clothes, attributes;

    cin>>t;
    while(t--){
        cin>>n;
        map<string, int> mp;
        map<int,string> mpInt;

        for(int i=0;i<n;i++){
            cin>>clothes>>attributes;
            mp[attributes]++;
            if(mp[attributes]==1){
                mpInt[cont] = attributes;
                cont++; 
            }
        }

        int different=mp.size();
        int ans=1;
        for(auto p:mp){
            ans = ans * (p.second+1);
        }
        cout<<ans-1<<endl;
    }

    return 0;
}