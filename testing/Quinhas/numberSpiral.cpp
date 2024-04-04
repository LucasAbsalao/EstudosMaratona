#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t;
    long long int x, y, resultado;
    cin>>t;

    for(int i=0;i<t;i++){

        cin >> x >> y;

        if(x>y && x%2==0){
            resultado = (x*x) - y + 1;
        }
        if(x>y && x%2==1){
            resultado = ((x-1)*(x-1)) + y;
        }
        if(x<=y && y%2==0){
            resultado = ((y-1)*(y-1)) + x;
        }
        if(x<=y && y%2==1){
            resultado = (y*y) - x + 1;
        }
        cout << resultado << endl;
    }
}