#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int t;
    long long int ans, i, j;

    cin >> t;
    
    while(t--) {
        cin >> i >> j;
        i--;
        j--;
    
        if(i > j) {
            if(i%2 == 0) ans = i*i + 1 + j;
            
            else ans = (i+1)*(i+1) - j;
        }
        
        else {
            if(j%2 == 0) ans = (j+1)*(j+1) - i;
                
            else ans = j*j + 1 + i;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
