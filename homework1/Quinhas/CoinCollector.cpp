#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    vector<int> coins;
    int t, tam, sum, contador=0;
    cin >> t;

    while(t--){
        sum=0;
        cin>>tam;
        coins.resize(tam);
        for(int i=0;i<tam;i++){
            cin >> coins[i];
        }
        contador=0;
        for(int i=0;i<tam-1;i++){
            sum+=coins[i];
            if(sum>=coins[i+1]) sum-=coins[i];
            else contador++;
        }
        cout<<contador+1<<endl;
    }
    return 0;
}