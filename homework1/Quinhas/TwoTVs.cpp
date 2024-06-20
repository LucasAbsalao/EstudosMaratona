#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    int t, a, b;
    bool add, ans=true;

    cin>>t;

    while (t--){
        cin>>a>>b;
        pq.push(make_pair(a,b));
    }

    pair<int,int> tv1(-1,-1);
    pair<int,int> tv2(-1,-1);
    pair<int,int> pairAtual;

    while(!pq.empty()&&ans){
        add=0;
        pairAtual = pq.top();
        //cout<<pairAtual.first << " " << tv1.second << " " << tv2.second<<endl; 
        if(pairAtual.first>tv1.second){
            tv1 = pairAtual;
            add=1;
            //cout<<"1"<<endl;
        }
        else if(pairAtual.first>tv2.second){
            tv2 = pairAtual;
            add=1;
            //cout<<"2"<<endl;
        }
        pq.pop();
        if(!add) ans=0;
    }

    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}