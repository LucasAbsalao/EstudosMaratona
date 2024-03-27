#include<bits/stdc++.h>

using namespace std;

int main(){
    
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int n, sum1=0, sum2=0;
    bool flag = true;
    string number;

    cin >> n;
    cin >> number;

    for(int i = 0; i < n && flag; i++){
        
        if(number[i] != '4' && number[i] != '7') flag = false;
        
        if(i < n/2){
            sum1 += number[i] - '0';
        }
        
        else {
            sum2 += number[i] - '0';
        }
    }
    
    if(sum1 != sum2) flag = false;


    if(flag) cout << "YES";
    else cout << "NO";
    
    return 0;
}