#include <bits/stdc++.h> 
using namespace std; 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ll    long long
#ifndef ONLINE_JUDGE
#include <E:\CodeBox\TempBox\Debug\debug.h>
#else
#define dbg(x...)
#endif
#define endl               "\n"
#define pb                 push_back
#define all(x)             (x).begin(), (x).end()
#define pq                priority_queue<int>
#define in(v)               for(auto &b:v)cin>>b;
#define inf               (long long)1e8+7
const int mx=4e5+5;

//clear global variable before everytime......
void pagol() {
    int n;
    cin>>n;
   vector<int> v(n);
   in(v);
   cout<<10<<endl;

}

int32_t main() {


  ios::sync_with_stdio(0);cin.tie(0);
    int t = 1;
  cin >> t;
  
    while (t--) {
        pagol();
    }
    return 0;
}