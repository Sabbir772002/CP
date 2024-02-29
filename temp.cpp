#include <bits/stdc++.h> 
using namespace std; 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
typedef unsigned long long ull;
typedef long double lld;
#define ll        long long
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
#define endl               "\n"
#define fast               ios::sync_with_stdio(0);cin.tie(0);
#define pi                pair<int,int>
#define fr(i, n)           for (ll i=0;i<n;i++)
#define fr1(i, n)          for(ll i=1;i<=n;i++)
#define tc                 int t; cin >> t;   while(t--)
#define pb                 push_back
#define fs(n)              fixed<<setprecision(n)
#define asort(a)           sort(a,a+n)
#define vi                 vector<int>
#define vl                 vector<long long>
#define po                 pop_back
#define allr(x)            ((x).rbegin(), (x).rend())
#define all(x)             (x).begin(), (x).end()
#define dsort(a)           sort(a,a+n,greater<int>())
#define tolower(s)         transform(s.begin(), s.end(), s.begin(), ::tolower)
#define pq                 priority_queue<int>
#define in(v)               for(auto &b:v)cin>>b;
#define inf               (long long)7e8+7
const int mx=4e5+5;
void pagol() {
    int n;
    cin>>n;
   vector<int> v(n);
   in(v);
   

}

int32_t main() {
    #ifndef ONLINE_JUDGE
       freopen("IO/input.txt", "r", stdin);
       freopen("IO/output.txt", "w", stdout);
       freopen("IO/Error.txt", "w", stderr);
 #endif
    int t = 1;

fast;
  cin >> t;
    int c = 1;
    while (t--) {
        //cout << "Case " << c++ << ": ";
        pagol();
    }
    return 0;
}