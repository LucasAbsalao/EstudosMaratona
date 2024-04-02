#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    string S;
    bool x = true;
    
    cin >> S;
    
    char ans[S.size()+1] = {};
    
    map<char, int> mapa;
    
    for(int i = 0; i < S.size(); i++) mapa[S[i]]++;
       
    if(S.size()%2 == 0) {
        int i = 0;
        for(auto it : mapa) {
            if(it.second%2 != 0) {
                cout << "NO SOLUTION";
                x = !x;
                break;
            }
            
            else {
                int aux = it.second/2;
                while(aux--) {
                    ans[i] = it.first;
                    ans[S.size()-i-1] = it.first;
                    i++;
                }
            }
        }
    }
    
    else {
        int i = 0, count = 0;
        for(auto it : mapa) {
            if(it.second%2 != 0) {
                count++;
                if(count == 2) {
                    cout << "NO SOLUTION";
                    x = !x;
                    break;
                }
                
                ans[S.size()/2] = it.first;
                it.second--;
            }
            
            if(it.second%2 == 0 && it.second != 0) {
                int aux = it.second/2;
                while(aux--) {
                    ans[i] = it.first;
                    ans[S.size()-i-1] = it.first;
                    i++;
                }
            }
        }
    }
    
    if(x) cout << ans;
    
    return 0;
}


