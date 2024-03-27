#include<bits/stdc++.h>

using namespace std;

int reverse_numbers(int number){

    int maior_10=0, contador=0, reverso=0, num;
    while(maior_10<=number) maior_10 = pow(10,contador++);
    maior_10 = maior_10/10;

    int cont=0;
    while(number>0){
        num = number/maior_10;
        number = number%maior_10;
        reverso += num * pow(10,cont);
        maior_10 = maior_10/10;
        cont++;
    }

    return reverso;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int lines, a, b, a1, b1, resposta;
    cin >> lines;

    for(int i=0;i<lines;i++){
        cin >> a >> b;
        a1 = reverse_numbers(a);
        b1 = reverse_numbers(b);
        resposta = reverse_numbers(a1+b1);
        cout << resposta << endl;
    }

}
