#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(int x, int y) {
    return x > y;
}

bool comp2(pair<int, int> x, pair<int, int> y) {
    if(x.first != y.first) return x.first < y.first;
    return x.second > y.second;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    cout<<"Hello World"<<"\n";
    cout<<"ola\n";
    vector<int> vet(10, 6); //todas as 10 posições valem 6, ou seja, for(int i = 0; i < 10; i++) vet[i] = 6;
    vector<int> vet1(10); //cria um vetor de tamanho 10, ou seja, equivale a vet1[10]; 
    cout<<vet[5]<<"\n";
    
    vector<int> vet2; //cria um vetor sem posições alocadas;
    vet2.push_back(3);//equivalente à vet2[0] = 3;
    vet2.push_back(6); //equivale à vet2[1] = 6;
    vet2.push_back(8); //equivale à vet2[1] = 8;
    cout<<vet2[2]<<"\n";
    cout<<vet2.size()<<"\n";
   
    
    vet2.resize(2); //Tipo um realloc, ou seja, realloca para um tamanho igual à 2
    for(int i = 0; i < vet2.size(); i++) cout<<vet2[i]<<" ";
    cout<<endl;
    for(auto a:vet2) cout<<a<<" "; // a = vet2[0] /a = vet2[1] ...(a cada iteração)
    vet2.assign(3, 0); //Nas primeiras 3 posições, insere 0;
    
    vet2.clear(); //Dá free no vetor 
    
    cout<<endl;
    
    vector<vector<int>> matriz(3, vector<int>(4)); //cria uma "matriz de 4 linhas"
    
    matriz[2].push_back(7);
    matriz[2].push_back(9);
    
    matriz[2].pop_back(); //removes the last element from vector
    
    for(int i = 0; i < matriz[2].size(); i++) cout<<matriz[2][i]<<" ";
    cout<<endl;
    
    stack<int> s;
    s.push(3);
    s.push(22);
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    
    cout<<s.empty()<<endl; //retorna 0 se a pilha está vazia e 1 se ela tiver algum elemento
    
    queue<int> q;
    q.push(3); //equivale à enqueue
    q.push(22);
    q.push(10);
    
    cout<<q.front()<<endl; //retorna o primeiro elemento da fila
    
    q.pop(); //retira o primeiro elemento da fila
    
    
    priority_queue<int> pq; //It is implemented as a max heap
    pq.push(4);
    pq.push(6);
    pq.push(5);
    
    while(!pq.empty()) {
        int x = pq.top();
        pq.pop();
        cout<<x<<endl;
    }
    cout<<endl;
    
    priority_queue<int, vector<int>, greater<int>> pq2; //It is implemented as a min heap
    pq2.push(4);
    pq2.push(6);
    pq2.push(5);
    
    while(!pq2.empty()) {
        int x = pq2.top();
        pq2.pop();
        cout<<x<<endl;
    }
    
    string str;
    cin>>str; //reads the string until a space, enter or tab
    //erjfj Victor1207
    cout<<str<<endl;
    
    getline(cin, str); //reads the whole string including space and tab
    cout<<str<<endl;
    
    cout<<str.size()<<endl;
    
    cout<<str.substr(1, str.size())<<endl;
    
    string str2;
    str2 = str.substr(1, str.size()); //o segundo número indica quantos caracteres serão adicionados na substring
    
    cout<<str2<<endl;
    
    int qtd;
    qtd = stoi(str2.substr(6, 3)); //string to int(Victor1207)
    
    cout<<qtd<<endl;
    
    string str_sum;
    str_sum = str + str2; //concatena
    
    cout<<str_sum<<endl;
    
    string str3;
    getline(cin, str3);
    pair<int, string> p;
    p.first = stoi(str3.substr(0, 3)); //Números maiores que 99 e menores que 1000
    p.second = str3.substr(4); //Se o tamanho for omitido, a substing irá até str3.size();
    
    cout<<p.first<<" ";
    cout<<p.second<<endl;
    
    str.clear(); //equivale a free(str)
    
    set<int> st; //conjunto não tem elementos repetidos e está sempre ordenado
    st.insert(10); //insere no conjunto
    st.insert(10);
    st.insert(10);
    st.insert(8);
    cout<<st.size()<<endl;
    
    cout<<st.count(10)<<endl; //verifica se o elemento está no conjunto
    cout<<st.count(5)<<endl;
    
    st.erase(10); //apaga o elemento do conjunto
    
    st.clear(); //apaga todo o conjunto
    
    multiset<int> st1; //conjunto que tem elementos repetidos e está sempre ordenado
    st1.insert(10); //insere no conjunto
    st1.insert(10);
    st1.insert(10);
    st1.insert(8);
    cout<<st1.size()<<endl;
    
    cout<<st1.count(10)<<endl; //verifica se o elemento está no conjunto e diz quantas vezes ele aparece 
    cout<<st1.count(5)<<endl;
    
    st1.erase(10); //apaga todos os elementos do conjunto
    
    st1.clear(); //apaga todo o conjunto
    
    map<string, int> mapa; //funciona como uma hash
    //map<key, element>
    
    mapa["abc"] = 10;
    mapa["cba"] = 13;
    
    cout<<mapa["abc"]<<endl;
    
    int x = mapa.count("abc"); //verifica se existe
    if(mapa.find("abc") != mapa.end()) //achou
    
    
    cout<<x<<endl;
    
    for(auto p : mapa) {
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    vector<pair<string, int>> vec;
        
    copy(mapa.begin(), mapa.end(), back_inserter<vector<pair<string,int>>>(vec)); //copia o mapa para um vetor de pares 
    
    mapa.erase("abc"); //deleta a chave junto com o elemento 
    
    for(auto p : mapa) {
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    mapa.clear(); //renicia o mapa
    
    vector<int> vec5 = {5,2,10,7,11,1};
    
    sort(vec5.begin(), vec5.end());
    
    for(auto it = vec5.begin(); it != vec5.end(); it++) { //iterator
        cout<< *it <<" ";
    }
    
    cout<<endl;
    
    vector<int> vec6 = {5,2,10,7,11,1};
    
    sort(vec6.begin(), vec6.end(), comp);
    
    for(auto it = vec6.begin(); it != vec6.end(); it++) { //iterator
        cout<< *it <<" ";
    }
    
    cout<<endl;
    
    vector<pair<int, int>> vec7 = {{1,5}, {7,4}, {1,3}, {6,9}};
    
    sort(vec7.begin(), vec7.end());
    
    for(auto it : vec7) cout<<it.first<<" "<<it.second<<endl;
    
    reverse(vec7.begin(), vec7.end()); //inverte a ordem
    
    for(auto it : vec7) cout<<it.first<<" "<<it.second<<endl;
    
    vector<pair<int, int>> vec8 = {{1,5}, {7,4}, {1,3}, {6,9}};
    
    sort(vec8.begin(), vec8.end(), comp2);
    
    for(auto it : vec8) cout<<it.first<<" "<<it.second<<endl;
    
    swap(vec8[0], vec8[1]);
    
    for(auto it : vec8) cout<<it.first<<" "<<it.second<<endl;
    
    return 0;
}













