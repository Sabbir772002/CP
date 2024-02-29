#include <bits/stdc++.h> 
using namespace std; 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define mp          make_pair
#define mem(x,i)    memset(x,i,sizeof(x))
#define ff          first
#define ss          second
#define popcount(x) __builtin_popcount(x)
#define all(x)      x.begin(),x.end()
#define Case(t)     for(int ks=1;ks<=t;ks++)
#define fileout     freopen("output.txt","w",stdout)
#define filein      freopen("input.txt","r",stdin)
#define debug(x)        cerr<< __LINE__ <<": "<< #x << " = "<<(x) <<'\n';
using ll  = long long;
using ld  = long double;
using ull = unsigned long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using pil = pair<int,ll>;
const int INF    = 0x3f3f3f3f;
const ll LL_INF  = 0x3f3f3f3f3f3f3f3f;
const double PI  = acos(-1);
const double eps = 1e-10;
const int mod    = 1000000007;
const int mx     = 1010;
// const int fx[]= {+1,-1,+0,+0};#dfs graph
// const int fy[]= {+0,+0,+1,-1};#dfs graph
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/

//ll powmod(ll a,ll b){ll res=1;a%=mod; assert(b>=0);for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
/*----------------------BitMask-----------------------------------------*/
//inline int setBit(int N,int pos){return N=N | (1<<pos);}
//inline int resetBit(int N,int pos){return N= N & ~(1<<pos);}
//inline bool checkBit(int N,int pos){return (bool) (N& (1<<pos));}
ll f(ll n, ll u) {
    return (u * (n + 1)) - (n * (n + 1)) / 2;
}

void solve(){
   int n;
   cin>>n;
   vector<ll> v(n);
   vector<ll> pref(n+2);
   for(auto &b:v)cin>>b;
   for(int i=1;i<=n;i++){
      pref[i]=v[i-1]+pref[i-1];
   }
  

}
int main()
{
     #ifndef ONLINE_JUDGE
       freopen("Iinput.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);

 #endif
    int t;
    cin>>t;
    while(t--)
    {
     solve();
     
     }

}
