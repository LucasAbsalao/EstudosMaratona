#include<bits/stdc++.h>

using namespace std;

void hanoiTower(int origem, int destino, int n){
    if(n==1) cout << origem << " " << destino << endl;
    else{
        int intermediario;
        if((origem==1&&destino==3)||(origem==3&&destino==1)) intermediario = 2;
        if((origem==2&&destino==3)||(origem==3&&destino==2)) intermediario = 1;
        if((origem==1&&destino==2)||(origem==2&&destino==1)) intermediario = 3;
        
        hanoiTower(origem, intermediario, n-1);
        cout << origem << " " << destino << endl;
        hanoiTower(intermediario, destino, n-1);
    }
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int n, minJogadas;

    cin >> n;

    minJogadas = pow(2,n) - 1;
    cout << minJogadas << endl;
    hanoiTower(1, 3, n);

    return 0;
}