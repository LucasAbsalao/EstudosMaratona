#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    bool janelaVazia, achei;
    int n, tempoTotal=0, tempoAtual, cadeiraAtual;
    string pessoas;
    cin >> n >> pessoas;
    vector<bool> cadeiras(n*4, false);

    for(int i=0; i<pessoas.size(); i++){

        janelaVazia=false;
        if(pessoas[i]=='I'){
            achei=false;
            for(int j=(n-1)*4; j>=0 && !achei; j-=4){
                for(int k=0; k<2 && !achei;k++){
                    if(cadeiras[j+k]==false){
                        janelaVazia=true;
                        cadeiras[j+k] = true;
                        cadeiraAtual = j+k;
                        //cout<<"oi"<<j+k<<endl;
                        achei=true;
                    }
                }
            }
            if(janelaVazia==false){
                achei=false;
                for(int j=(n-1)*4; j>=0 && !achei; j-=4){
                    for(int k=0;k<4 && !achei;k++){
                        if(cadeiras[j+k]==false){
                            cadeiras[j+k] = true;
                            cadeiraAtual = j+k;
                            achei=true;
                        }
                    }  
                }
            }   
        }

        else if(pessoas[i]=='E'){
            achei = false;
            for(int j=(n-1)*4; j>=0 && !achei; j-=4){
                for(int k=0;k<4 && !achei;k++){
                    if(cadeiras[j+k]==false){
                        cadeiras[j+k] = true;
                        cadeiraAtual = j+k;
                        achei=true;
                    }
                }  
            }
        }

        tempoAtual = (cadeiraAtual/4)*2;
        if((cadeiraAtual/2)%2) tempoAtual+=5;
        else tempoAtual+=10;
        //cout<<cadeiraAtual<<" "<<tempoAtual<<endl;
        tempoTotal+=tempoAtual;
    }
    cout<<tempoTotal<<endl;
}