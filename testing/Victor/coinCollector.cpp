#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int T, n;
    
    cin >> T;
    
    while(T--) {
        cin >> n;
        int coins[n];
        
        for(int i = 0; i < n; i++) {
            cin >> coins[i];
        }
        
        int sum = 0, count = 0;
        
        for(int i = 0; i < n-1; i++) {
            if(coins[i] + sum >= coins[i+1]) count++;
            else sum += coins[i];
        
        }
        
        cout << n - count << "\n";
    }

    return 0;
}


