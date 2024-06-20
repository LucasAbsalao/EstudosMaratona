#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int n=1, max, sum, x;
    cin>>n;
    
    while(n!=0){
        vector<int> tuplas[n];
        for(int j=0;j<n;j++){
            for(int i=0;i<5;i++){
                cin>>x;
                tuplas[j].push_back(x);
            }
            sort(tuplas[j].begin(), tuplas[j].end());
        }
        map<vector<int>, int> mapa;
        for(int i=0;i<n;i++){
            mapa[tuplas[i]]++;
        }
        max=-1;
        sum=0;
        for(auto it=mapa.begin(); it!=mapa.end(); it++){
            //cout<<"oi1"<<endl;
            if(it->second>max||max==-1) max = it->second;
        }
        //cout<<"max "<<max<<endl;
        for(auto it=mapa.begin(); it!=mapa.end(); it++){
            //cout<<"oi2"<<endl;
            if(it->second==max) sum+=max;
        }
        cout<<sum<<endl;
        cin >> n;
    } 
}