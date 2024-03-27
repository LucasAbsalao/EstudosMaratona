#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int cont=0;
    bool is_lucky = true;
    long long int n, aux;
    cin >> n;

    while(n!=0){
        aux = n%10;
        if(aux==4||aux==7) cont++;
        n=n/10;
    }

    do{
        aux = cont%10;
        if(aux!=4&&aux!=7) is_lucky = false;
        cont=cont/10;
    } while(cont!=0);

    if(is_lucky) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}