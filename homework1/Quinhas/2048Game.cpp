#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t, n, num, atual=0;

    cin>>t;

    while(t--){
        cin>>n;

        priority_queue<int, vector<int>, greater<int>> pq;
        
        while(n--){
            cin>>num;
            pq.push(num);
        }

        atual=0;
        while(!pq.empty() && atual!=2048){
            atual = pq.top();
            pq.pop();
            if(!pq.empty()){
                if(pq.top()==atual){
                    pq.pop();
                    pq.push(atual*2);
                }
            }
        }//a
        if(atual==2048)cout<<"YES"<<endl;
        else if(pq.empty())cout<<"NO"<<endl;
    }
    return 0;
}