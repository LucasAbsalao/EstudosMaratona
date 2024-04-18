#include <iostream>
#define ll long long

using namespace std;

int main() {
    
    ll int n, sum, sum_vet1 = 0;
    
    cin >> n;
    
    int *vet1 = (int *) calloc(n, sizeof(int));
    int *vet2 = (int *) calloc(n, sizeof(int));
    
    sum = n * (n+1);
    
    sum = sum/2;
    
    if(sum % 2 != 0) cout << "NO";
    
    else {
        sum /= 2;
        ll int count1 = 0, count2 = 0;
        cout << "YES\n";
        for(int i = n; i > 0; i--) {
            if((sum_vet1 + i) <= sum) {
                vet1[count1] = i;
                count1++;
                sum_vet1 += i;
            }
            
            else {
                vet2[count2] = i;
                count2++;
            }
        }
        
        cout << count1 << "\n";
        
        for(int i = 0; i < count1; i++) {
            cout << vet1[i] << " ";
        }
        
        cout << "\n";
        
        cout << count2 << "\n";
        
        for(int i = 0; i < count2; i++) {
            cout << vet2[i] << " ";
        }
    }

    return 0;
}
