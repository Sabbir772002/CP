#include <bits/stdc++.h> 
using namespace std; 
#define in(v)               for(auto &b:v)cin>>b;
#define pb                   push_back
#define inf               (long long)1e8+7
#define all(x)             (x).begin(), (x).end()
template <typename T>
istream &operator>>(istream &in, vector<T> &a){
  for (auto &x:a)in>>x;
    return in;
};
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a){
  for (auto &x:a)out<<x<<" ";
    return out;
};
#ifdef Sabbir
#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cerr << name << " = " << arg1 << "\n";
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define dbg(...)
#endif

void pagol(){
  int d;
  scanf("%d",&d);
  printf("%d",d);
 
}
int32_t main() {
  #ifdef Sabbir
      freopen("Error.txt", "w", stderr);
  #endif
  ios::sync_with_stdio(0);cin.tie(0);
    int t = 1;
  cin >> t;
    
    while (t--) {
        pagol();
    }
    return 0;
}

