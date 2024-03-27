#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    string number;
    int count = 0;
    
    cin >> number;
    
    for(int i = 0; i < number.size(); i++) {
        if(number[i] == '7' || number[i] == '4') count ++;
    }
    
    if(count == 4 || count == 7) cout << "YES";
    else cout << "NO";

    return 0;
}
