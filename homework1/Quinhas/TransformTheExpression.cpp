#include<bits/stdc++.h>
using namespace std;

stack<char> s;

void transformExp(string str){
    if(str.length()==0) return;
    if(str[0]!='(' && str[0]!=')') s.push(str[0]);
    else{
        int contadorParenteses=0;
        int indice = 0;
        for(int i=1; i<str.length()&&indice==0; i++){
            if(str[i]=='(') contadorParenteses++;
            if(str[i]==')') contadorParenteses--;
            if(contadorParenteses==0) indice=i+1;
        }
        string str1, str2;
        //cout<<"adding "<<str[indice]<<endl;
        s.push(str[indice]);
        str1 = str.substr(1, indice-1);
        str2 = str.substr(indice+1, str.length()-indice-2);
        transformExp(str2);
        transformExp(str1);
        // cout<<"string: "<<str<<endl;
        // cout<<indice<<endl;
        // cout<<str1<<endl;
        // cout<<str2<<endl;
    }
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t;
    string expression;

    cin >> t;

    while(t--){
        cin>>expression;
        //bool mark[expression.length()] = {false};
        transformExp(expression);
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }


}