#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t, n, root;

    cin >> t;

    for(int a=0;a<t;a++){
        cin >> n;
        int existe[n];
        for(int i=0;i<n+1;i++) existe[i] = 0;
        
        int matriz[n][n];
        root = (int) sqrt(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> matriz[i][j];
            }
        }
        
        bool isSudoku = true;
        int limite=0;

        for(int i=0;i<n&&isSudoku;i++){
            limite++;
            for(int j=0;j<n&&isSudoku;j++){
                existe[matriz[i][j]]++;
                //cout<< "1 - "<< i << " " << existe[matriz[i][j]] << " " << limite << endl;
                if(existe[matriz[i][j]]>limite) {isSudoku=false;}
            }
        }

        for(int j=0;j<n&&isSudoku;j++){
            limite++;
            for(int i=0;i<n&&isSudoku;i++){
                existe[matriz[i][j]]++;
                if(existe[matriz[i][j]]>limite) isSudoku=false;
            }
        }

        for(int x=0;x<n&&isSudoku;x+=root){
            for(int y=0;y<n&&isSudoku;y+=root){
                limite++;
                for(int i=x;i<x+root&&isSudoku;i++){
                    for(int j=y;j<y+root&&isSudoku;j++){
                        existe[matriz[i][j]]++;
                        if(existe[matriz[i][j]]>limite) isSudoku=false;
                    }
                }
            }
        }
        
        if(isSudoku) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}