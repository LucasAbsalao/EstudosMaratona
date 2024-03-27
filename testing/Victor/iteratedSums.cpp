#include <iostream>

using namespace std;

int main() {
    int x, y, ans;
    
    cin>>x>>y;
    
    ans = (y * (y + 1) * (2*y + 1)) / 6 - ((x-1) * x * (2*x - 1)) / 6;
    
    cout<<ans;
    

    return 0;
}
