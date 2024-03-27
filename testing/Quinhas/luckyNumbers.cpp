#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int tam, sum1=0, sum2=0, is_lucky=1;
    string ticket;

    cin >> tam;
    cin >>ticket;

    for(int i=0;i<tam;i++){
        if(ticket[i]!='4'&&ticket[i]!='7') is_lucky = 0;
        if(i<tam/2){
            sum1+=ticket[i]-'0';
        }
        else{
            sum2+=ticket[i]-'0';
        }
    }
    if(sum1!=sum2) is_lucky = 0;

    //cout<< sum1 << " " << sum2 << " " << is_lucky << endl;

    cout << (is_lucky ? "YES" : "NO") << endl;
    return 0;
}