#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int n;
    int cases;
    cin >> cases;
    
    while(cases--) {
        cin >> n;
        bool flag = false;
        
        if(n%2 == 1) cout << "YES\n";
        
        else {
            n = n/2;
            while(n > 1) {
                if(n%2 == 1) flag = true;
                 n = n/2;
            }
            
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}



