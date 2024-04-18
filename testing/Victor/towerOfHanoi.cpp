#include <bits/stdc++.h>

using namespace std;

void Hanoi_tower(int origem, int destino, int n) {
    int mid;
    if(n == 1) cout << origem << " " << destino << "\n";
    
    else {
        if((origem == 1 && destino == 3) || (origem == 3 && destino == 1)) mid = 2;
        else if((origem == 2 && destino == 3) || (origem == 3 && destino == 2)) mid = 1;
        else if((origem == 1 && destino == 2) || (origem == 2 && destino == 1)) mid = 3;
        Hanoi_tower(origem, mid, n-1);
        cout << origem << " " << destino << "\n";
        Hanoi_tower(mid, destino, n-1);
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int n, k;
    
    cin >> n;
    
    k = pow(2,n) - 1;
    
    cout << k << "\n";
    
    Hanoi_tower(1, 3, n);

    return 0;
}
