#include<bits/stdc++.h>
using namespace std;

bool compareIguais(string str1, string str2){
    if(str1+str2<str2+str1) return true;
    return false;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t;
    string a;
    cin>>t;
    vector<string> lista; 

    for(int i=0;i<t;i++){
        cin>>a;
        lista.push_back(a);
    }
//p
    sort(lista.begin(), lista.end(), compareIguais);
    for(int i=0;i<t;i++)
        cout<<lista[i];
    return 0;
}