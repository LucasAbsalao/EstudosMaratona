#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int n, sum=0, metade;
    bool changeSet=false;

    cin>>n;

    int sets[n+1]={};

    for(int i=1;i<=n;i++){
        sum += i;
    }

    if(sum%2==0){
        if(n%2==0){
            for(int i=1;i<=n/2;i++){
                sets[i] = changeSet+1;
                sets[n-i+1] = changeSet+1;
                changeSet=!changeSet;
            }
            // for(int i=1;i<=n;i++){
            //     cout << sets[i] << " "; 
            // }
        }
        else{
            metade = (n/2)+1;
            sets[metade] = 1;
            sets[metade/2] = 1;
            sets[n-(metade/2)+1] = 2;
            for(int i=1;i<=n/2;i++){
                if(sets[i]==0){
                    sets[i] = changeSet+1;
                    sets[n-i+1] = changeSet+1;
                    changeSet=!changeSet;
                }
            }
        }
        cout<<"YES"<<endl;
        if(n%2==1) cout << (n/2)+1 << endl;
        else cout << n/2 << endl;
        
        for(int i=1;i<=n;i++){
            if(sets[i]==1) cout << i << " "; 
        }
        cout<<endl<<n/2<<endl;
        for(int i=1;i<=n;i++){
            if(sets[i]==2) cout << i << " "; 
        }
        cout<<endl;
    }
    else cout<< "NO" << endl;
    //cout << sum << endl;

    return 0;
}