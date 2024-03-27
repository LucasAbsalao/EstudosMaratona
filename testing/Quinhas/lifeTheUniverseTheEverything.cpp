#include<iostream>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int x=0;

    while(x!=42){
        cin >> x;
        if(x!=42) cout << x << endl;
    }
}