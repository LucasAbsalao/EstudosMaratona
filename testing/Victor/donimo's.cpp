#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, size;
    cin >> n;
    size = 2*n;
    
    vector<long long int> slices;
    slices.resize(size);
    
    vector<long long int> total;
    total.resize(n);
    
    for(int i = 0; i < (2*n); i++) {
        cin >> slices[i];
    }
    
    sort(slices.begin(), slices.end());
    
    for(int i = 0; i < n; i++) {
        total[i] = slices[i] + slices[(2*n)-(i+1)];
    }
    
    sort(total.begin(), total.end());
    
    cout << total[n-1] - total[0];
    
    return 0;
}
