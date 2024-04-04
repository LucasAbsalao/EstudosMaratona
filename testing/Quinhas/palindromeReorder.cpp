#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int qtdOdd=0, oddLetter;
    string linha;
    string resultado;
    vector<int> qtdLetras(26,0);
    
    cin>>linha;
    
    int tam=linha.size();

    for(int i=0; i<linha.size();i++){
        qtdLetras[linha[i]-'A']++; 
    }

    for(int i=0;i<26;i++){
        if(qtdLetras[i]%2==1){
            qtdOdd++;
            oddLetter=i;
        }
    }

    if((qtdOdd==1&&linha.size()%2==1)||(qtdOdd==0&&linha.size()%2==0)){
        for(int i=0;i<tam/2;i++){
            for(int j=0;j<26;j++){
                if(qtdLetras[j]>0 && qtdLetras[j]%2==0){
                    linha[i] = 'A'+j;
                    linha[tam-i-1] = 'A'+j;
                    qtdLetras[j]-=2;
                    break;
                }
            }
        }
        //cout<<oddLetter<<endl;
        if(qtdOdd==1) linha[(tam/2)] = 'A' + oddLetter;
        cout<<linha<<endl;
    }
    else cout << "NO SOLUTION";
}
