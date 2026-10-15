// vector
vector<int> v(n);                 // n zeros
vector<vector<int>> g(n);         // lista de adjacência
v.push_back(x);  v.back();  v.pop_back();  v.size();
sort(v.begin(), v.end());
sort(v.rbegin(), v.rend());       // decrescente
reverse(v.begin(), v.end());
accumulate(v.begin(), v.end(), 0LL);  // soma (0LL evita overflow)

// sort com comparador (lambda)
sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

// pair / tuple
vector<pair<int,int>> p;
p.push_back({a, b});              // sort ordena por first e depois second
auto [x, y] = p[0];               // structured binding (C++17)

// map / set (árvore balanceada, O(log n), ordenados)
map<string,int> m;
m["abc"]++;                       // operator[] CRIA a chave com 0 se não existir
if (m.count("abc")) { ... }       // ou m.find(k) != m.end()
for (auto& [k, val] : m) { ... }  // percorre em ordem de chave
set<int> s;  s.insert(x);  s.erase(x);  s.count(x);
auto it = s.lower_bound(x);       // primeiro elemento >= x
auto it2 = s.upper_bound(x);      // primeiro elemento > x
if (it != s.end()) cout << *it;

// multiset (aceita repetidos)
multiset<int> ms;
ms.erase(ms.find(x));             // remove UMA ocorrência
// ms.erase(x) remove TODAS (cuidado!)

// unordered_map / unordered_set: O(1) médio, mas sem ordem

// fila, pilha, heap
queue<int> q;       q.push(x);  q.front();  q.pop();
stack<int> st;      st.push(x); st.top();   st.pop();
priority_queue<int> maxh;                              // max-heap
priority_queue<int, vector<int>, greater<int>> minh;   // min-heap

// busca binária em vetor ORDENADO
auto it = lower_bound(v.begin(), v.end(), x);
int idx = it - v.begin();
binary_search(v.begin(), v.end(), x);

// string
string s;  s.size();  s.substr(pos, len);  s += 'a';
s.find("ab");                     // retorna string::npos se não achar