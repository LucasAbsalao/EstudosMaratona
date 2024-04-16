#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int testes, tam, menor;
    bool isIncreasing;

    cin>>testes;
    for(int i=0; i<testes; i++){
        cin >> tam;
        vector<int> v(tam);
        isIncreasing = true;
        for(int j=0;j<tam;j++){
            cin >> v[j];
        }

        for(int a=0;a<tam-1&&isIncreasing;a++){
            menor = a;
            for(int b=a+1;b<tam;b++){
                if(v[b]<v[menor]) menor=b;
            }
            swap(v[menor], v[a]);    
            if(a>0 && v[a]<=v[a-1]) isIncreasing=false;
        }

        
        if(isIncreasing) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}