#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    string expressao;
    cin >> expressao;

    int resultado=0, temp=0;
    bool sum = true;

    for(int i=0;i<expressao.size()+1;i++){
        
        if(expressao[i]>='0' && expressao[i]<='9'){
            temp = temp*10;
            temp += expressao[i] - '0';
        }
        else{ 
            if(sum) resultado += temp;
            else resultado -= temp;

            if(expressao[i]=='+') sum = true;
            if(expressao[i]=='-') sum = false;
            temp=0;
        }
    }
    cout<<resultado<<endl;
    
    int pot10;
    if(resultado>=100) pot10=100;
    else if(resultado>=10) pot10=10;
    else pot10=1;

    int qtdplus;
    do{
        qtdplus = '0' + (resultado/pot10);
        resultado=resultado%pot10;

        for(int i=0;i<qtdplus;i++) cout<<"+";
        cout<<".";
        if(pot10!=1) cout<<">"<< endl;
        
        pot10/=10;
    } while(pot10>0);
    cout<<endl;
}