#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t, operation, number;
    bool checkPQ, checkS, checkQ;

    while(cin>>t){
        checkPQ = true;
        checkS = true;
        checkQ = true;
        priority_queue<int> pq;
        queue<int> q;
        stack<int> s;
        for(int i=0;i<t;i++){
            cin>>operation;
            cin>>number;
            if(operation==1){
                pq.push(number);
                s.push(number);
                q.push(number);
            }
            else if(operation==2){
                if(pq.empty()) checkPQ = false;
                if(q.empty()) checkQ = false;
                if(s.empty()) checkS = false;

                if(!pq.empty()){
                    if(pq.top()!=number) checkPQ = false;
                    pq.pop();
                }
                if(!q.empty()){
                    if(q.front()!=number) checkQ = false;
                    q.pop();
                }
                if(!s.empty()){
                    if(s.top()!=number) checkS = false;
                    s.pop();
                }
                
            }
        }
        if(checkPQ&&!checkQ&&!checkS) cout<<"priority queue"<<endl;
        else if(checkS&&!checkPQ&&!checkQ) cout<<"stack"<<endl;
        else if(checkQ&&!checkS&&!checkPQ) cout<<"queue"<<endl;
        else if(!checkPQ&&!checkS&&!checkQ) cout<<"impossible"<<endl;
        else cout<<"not sure"<<endl;
    }

}