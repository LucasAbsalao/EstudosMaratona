#include <bits/stdc++.h>
#define dd double 

using namespace std;

bool check(dd w, int px, int py, int ax, int ay, int bx, int by, dd r) {
    bool flag_O_A, flag_O_B, flag_P_A, flag_P_B;
    flag_O_A = flag_O_B = flag_P_B = flag_P_A = false;
    
    if(pow(ax, 2) + pow(ay, 2) <= pow(w, 2) + 0.00001) flag_O_A = true;
    if(pow(bx, 2) + pow(by, 2) <= pow(w, 2) + 0.00001) flag_O_B = true;
    if(pow((px-ax), 2) + pow((py-ay), 2) <= pow(w, 2) + 0.00001) flag_P_A = true;
    if(pow((px-bx), 2) + pow((py-by), 2) <= pow(w, 2) + 0.00001) flag_P_B = true;
    
    /*if(flag_O_A) cout << "O está em A" << endl;
    if(flag_O_B) cout << "O está em B" << endl;
    if(flag_P_A) cout << "P está em A" << endl;
    if(flag_P_B) cout << "P está em B" << endl;
    */
    
    if(w >= (r/2)) {
        if((flag_O_A || flag_O_B) && (flag_P_A || flag_P_B)) return true;
        else return false;
    }
    
    else {
        if((flag_O_A && flag_P_A) || (flag_O_B && flag_P_B)) return true;
        else return false;
    }
    
}

dd distance(int ax, int bx, int ay, int by) {
    dd dist;
    dist = sqrt((pow((ax-bx), 2) + pow((ay-by), 2)));
    return dist;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    
    int t, px, py, ax, ay, bx, by, d_ab_int;
    
    dd w, r;
    
    cin >> t;
    
    while(t--) {
        priority_queue<dd, vector<dd>, greater<dd>> pq;
        
        cin >> px >> py;
        cin >> ax >> ay;
        cin >> bx >> by;
        
        r = distance(ax, bx, ay, by);
        
        w = r / 2;
        if(check(w, px, py, ax, ay, bx, by, r)) pq.push(w);
        
        w = distance(ax, px, ay, py);
        if(check(w, px, py, ax, ay, bx, by, r)) pq.push(w);
        
        w = distance(bx, px, by, py);
        if(check(w, px, py, ax, ay, bx, by, r)) pq.push(w);
        
        w = distance(ax, 0, ay, 0);
        if(check(w, px, py, ax, ay, bx, by, r)) pq.push(w);
        
        w = distance(bx, 0, by, 0);
        if(check(w, px, py, ax, ay, bx, by, r)) pq.push(w);
        
        
        cout << setprecision(11) << pq.top() << "\n";
    }

    return 0;
}
