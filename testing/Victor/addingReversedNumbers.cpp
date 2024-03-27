#include <bits/stdc++.h>

using namespace std;

string Reverse_string(string a) {
     for(int i = 0; i < a.size()/2; i++) {
        swap(a[i], a[a.size()-i-1]);
    }
    return a;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int N, ans_int, x_int, y_int, ans_final;
    string x, y, ans, x_aux, y_aux; 
    cin >> N;
    
    while(N--) {
        cin >> x >> y;
       
        x_aux = Reverse_string(x);
        y_aux = Reverse_string(y);
        
        x_int = stoi(x_aux);
        y_int = stoi(y_aux);
        
        ans_int = x_int + y_int;
        ans = to_string(ans_int);
        ans = Reverse_string(ans);
        ans_final = stoi(ans);
        cout << ans_final << endl;
        x_aux.clear();
        x_aux.clear();
    }

    return 0;
}


