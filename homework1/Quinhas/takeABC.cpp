#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string a;
    stack<char> s;

    cin>>a;

    bool checkA=false, checkB=false, checkChange=false;

    for(int i=0; i<a.length(); i++){
        s.push(a[i]);

        if(s.top()=='C'){
            s.pop();
            if(!s.empty() && s.top()=='B'){
                s.pop();
                if(!s.empty() && s.top()=='A') s.pop();
                else {
                    s.push('B');
                    s.push('C');
                }
            }
            else s.push('C');
        }
    }

    string ans;
    ans.resize(s.size());

    int cont=s.size()-1;
    while(!s.empty()){
        ans[cont] = s.top();
        s.pop();
        cont--;
    }
    cout<<ans<<endl;
}   