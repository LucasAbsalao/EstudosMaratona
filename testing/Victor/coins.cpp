#include <iostream>

typedef long long ll;

using namespace std;

int main() {
    int t;
    ll n, k;
    cin >> t;
    
    while(t--) {
        cin >> n >> k;
        bool flag = false;
        
        if(n%2 == 0) cout << "YES\n";
        else if(n == 1 && k == 1) cout << "YES\n";
        else if(n == k) cout << "YES\n";
        else if(n < k) cout << "NO\n";
        
        else {
            if((n-k)%2 == 0) {
                cout << "YES\n";
                flag = true;
            }
                   
            if(!flag) cout << "NO\n";
        }
    }

    return 0;
}
