#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int n, number;
    string operation;
    bool reverse=1;

    cin>>n;

    deque<int> dick;

    while(n--){
        cin>>operation;
        if(operation[0] == 't'){
            cin>>number;
            if(reverse) dick.push_front(number);
            else dick.push_back(number);
        }
        if(operation[0] == 'p'){
            cin>>number;
            if(reverse) dick.push_back(number);
            else dick.push_front(number);
        }
        if(operation[0] == 'f'){
            if(dick.empty()) cout<<"No job for Ada?"<<endl;
            else{
                if(reverse){
                    cout<<dick.front()<<endl;
                    dick.pop_front();
                }
                else{
                    cout<<dick.back()<<endl;
                    dick.pop_back();
                }
            }
        }
        if(operation[0] == 'b'){
            if(dick.empty()) cout<<"No job for Ada?"<<endl;
            else{
                if(reverse){
                    cout<<dick.back()<<endl;
                    dick.pop_back();
                }
                else{
                    cout<<dick.front()<<endl;
                    dick.pop_front();
                }
            }
        }
        if(operation[0] == 'r') reverse = !reverse;
    }

    return 0;
}