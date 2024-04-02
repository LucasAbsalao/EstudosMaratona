#include <bits/stdc++.h>

using namespace std;

bool Row_is_occupied(bool mat[][4], int r) {
    bool occupied = true;
    for(int j = 0; j < 4; j++) {
        if(mat[r][j]) occupied = false;
    }
    
    return occupied;
}

bool windows_are_occupied(bool mat[][4], int N) {
    bool occupied = true;
    for(int i = N-1; i >= 0; i--) {
        if(mat[i][0] || mat[i][3]) occupied = false;
    }
    
    return occupied;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int N, answer = 0; 
    string S;
    
    cin >> N;
    
    cin >> S;
    
    bool mat[N][4];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 4; j++) mat[i][j] = true; //true is an empty seat
    }
    
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == 'E') {
            for(int j = N-1; j >= 0; j--) {
                
                if(Row_is_occupied(mat, j)) continue;
                
                if(mat[j][0]) {
                    answer += 10 + (2*j);
                    mat[j][0] = false;
                    break;
                }
                
                else if(mat[j][3]) {
                    answer += 10 + (2*j);
                    mat[j][3] = false;
                    break;
                }
                
                else if(mat[j][1]) {
                    answer += 5 + (2*j);
                    mat[j][1] = false;
                    break;
                }
                
                else if(mat[j][2]) {
                    answer += 5 + (2*j);
                    mat[j][2] = false;
                    break;
                }
            }
            
        }
        
        else {
            
            if(windows_are_occupied(mat, N)) {
                S[i] = 'E';
                i--;
            }
            
            else {
                
                for(int j = N-1; j >= 0; j--) {
                    if(mat[j][0]) {
                        answer += 10 + (2*j);
                        mat[j][0] = false;
                        break;
                    }
                    
                    else if(mat[j][3]) {
                        answer += 10 + (2*j);
                        mat[j][3] = false;
                        break;
                    }
                }
            }
        }
        
    }
    
    cout << answer;

    return 0;
}




