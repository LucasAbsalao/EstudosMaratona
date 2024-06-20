#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t, bf, sg, sb, power, powerGreen, powerBlue;
    cin>>t;

    while(t--){
        priority_queue<int> green;
        priority_queue<int> blue;

        cin >> bf >> sg >> sb;
        for(int i=0;i<sg;i++){
            cin >> power;
            green.push(power);
        }
        for(int i=0;i<sb;i++){
            cin >> power;
            blue.push(power);
        }

        while(!green.empty() && !blue.empty()){
            pair<int,char> par[bf];

            for(int i=0;i<bf && (!green.empty()) && (!blue.empty());i++){
                powerGreen = green.top(); green.pop();
                powerBlue = blue.top(); blue.pop();
                if(powerGreen>powerBlue){
                    par[i] = make_pair(powerGreen-powerBlue, 'g');
                }
                else if(powerBlue>powerGreen){
                    par[i] = make_pair(powerBlue-powerGreen, 'b');
                }
            }

            for(int i=0;i<bf;i++){
                if(par[i].second=='g') green.push(par[i].first);
                else if(par[i].second=='b') blue.push(par[i].first);
            }
        }

        if(green.empty() && blue.empty()) cout<<"green and blue died"<<endl;
        else if(blue.empty()){
            cout<<"green wins"<<endl;
            while(!green.empty()){
                cout<<green.top()<<endl;
                green.pop();
            }
        }
        else{
            cout<<"blue wins"<<endl;
            while(!blue.empty()){
                cout<<blue.top()<<endl;
                blue.pop();
            }
        }
        if(t!=0) cout<<endl;
    }
    return 0;
}