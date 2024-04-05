#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int t, n, x;
    int root;
    bool flag;
    
    cin >> t;
    
    while(t--) {
        cin >> n;
        vector<vector<int>> vec(n+1);
        vector<vector<int>> vec2(n+1);
        int aux_i, aux_j, aux_sq;
        flag = true;
        root = (int) sqrt(n);
        map<int, int> mapa1;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> x;
                mapa1[x]++;
                aux_i = i/root;
                aux_j = j/root;
                aux_sq = (aux_i*root) + aux_j + 1;
                
                auto it = find(vec[x].begin(), vec[x].end(), aux_sq);
                auto it2 = find(vec2[x].begin(), vec2[x].end(), j+1);
                
                if(mapa1[x] > i+1 && flag) {  
                    cout << "no\n";
                    flag = false;
                }
                
                else if(it2 != vec2[x].end() && flag) {
                    cout << "no\n";
                    flag = false;
                }
                
                else if(it != vec[x].end() && flag) {
                    cout << "no\n";
                    flag = false;
                }
                
                if(flag) {
                    vec2[x].push_back(j+1);
                    vec[x].push_back(aux_sq);
                }
            }
        }
        
        if(flag) cout << "yes\n";
    }

    return 0;
}

