#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    int n;
    cin >> cases;
    
    while(cases--) {
        cin >> n;
        vector<long long int> array;
        array.resize(n);
        for(int i = 0; i < n; i++) {
            cin >> array[i]; 
        }
        
        bool flag = true;
       
        sort(array.begin(), array.end());
        
        for(int j = 1; j < n && flag; j++) {
            if(array[j-1] == array[j]) flag = false;
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
