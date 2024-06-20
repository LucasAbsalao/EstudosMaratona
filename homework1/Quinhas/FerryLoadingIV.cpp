#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t, tamFerry, cars, tamCar, carga=0, contador=0;
    string side;
    cin>>t;

    queue<int> left;
    queue<int> right;

    while(t--){
        contador=0;
        bool whichSide=0, overflow=0;
        cin>>tamFerry>>cars;
        tamFerry*=100;
        while(cars--){
            cin>>tamCar>>side;
            if(side=="left") left.push(tamCar);
            if(side=="right") right.push(tamCar);
        }
        while(!left.empty()||!right.empty()){
            carga=0; overflow=false;
            if(!whichSide){
                while(!overflow && !left.empty()){
                    if(carga + left.front() <= tamFerry){
                        carga+=left.front();
                        left.pop();
                    }
                    else overflow = true;
                }
            }
            else{
                while(!overflow && !right.empty()){
                    if(carga + right.front() <= tamFerry){
                        carga+=right.front();
                        right.pop();
                    }
                    else overflow = true;
                }
            }
            whichSide=!whichSide;
            contador++;
        }
        cout<<contador<<endl;
    }

    return 0;
}