#include <bits/stdc++.h>

using namespace std;
#define Fast_io             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define cinn(x) \
    for (int i = 0; i < x.size(); i++) cin >> x[i];
#define printa(x) \
    for (int i = 0; i < x.size(); i++) cout << x[i] << " ";
#define LL long long
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define SQR(x) ((x) * (x))
#define loop(i, y) for (int i = 0; i < int(y); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)
#define sz(c) int(c.size())
#define clr(x, y) memset(x, y, sizeof(x))
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

template <typename T>
istream &operator>>(istream &in, vector<T> &a) {
    for (auto &x : a) in >> x;
    return in;
};
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a) {
    for (auto &x : a) out << x << ' ';
    return out;
};

template <class T, class L>
inline T bigMod(T p, T e, L M) {
    LL ret = 1 % M;
    for (; e > 0; e >>= 1) {
        if (e & 1) ret = (ret * p) % M;
        p = ((LL)p * p) % M;
    }
    return (L)ret;
}

/// Constants
#define MAX 200005
#define MOD 1000000007
#define eps 1e-9
#define INF 0x3f3f3f3f3f3f3f3f  // 4,557,430,888,798,830,399
#define inf 0x3f3f3f3f          // 1,061,109,567
#define PI acos(-1.0)           // 3.1415926535897932
#define VT int
vector<int> lis(const vector<int> &a)
{
    vector<int> L(a.size());
    vector<int> Lis(a.size());
    int lisCount = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        int pos = lower_bound(L.begin(), L.begin() + lisCount, a[i])
                     - L.begin();
        L[pos] = a[i];
        if (pos == lisCount)
            ++lisCount;
        Lis[i] = pos + 1;
    }
    // for(int i=0;i<a.size();i++){
    //     cout<<Lis[i]<<" ";
    // }
    return Lis;
}


void solve() {
   int n;
   while(cin>>n){
   vi v(n);
   for(auto &a:v)cin>>a;
    vector<int> d1=lis(v);
     reverse(all(v));
    vector<int> d2=lis(v);
     reverse(all(d2));
int ans=0;
//     for(int i=0;i<n;i++){
//         cout<<d1[i]<<" ";

// }
    for(int i=0;i<n;i++){
            ans=max(ans,2*min(d1[i],d2[i])-1);
    
    }

cout<<ans<<endl;
}
 
}

int main() {
    #ifndef ONLINE_JUDGE

       freopen("input.txt", "r", stdin);
       freopen("outbox.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);

 #endif
    int t = 1;

    Fast_io;

   // cin >> t;
    int c = 1;
    while (t--) {
        // cout << "Case " << c++ << ": ";
        solve();
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long double lld;
#define ll        long long
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
//void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}
// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#define endl               "\n"
#define fast               ios::sync_with_stdio(0);cin.tie(0);
#define fr(i, n)           for (ll i=0;i<n;i++)
#define fr1(i, n)          for(ll i=1;i<=n;i++)
#define tc                 int t; cin >> t;   while(t--)
#define pb                 push_back
#define fs(n)              fixed<<setprecision(n)
#define asort(a)           sort(a,a+n)
#define vi                 vector<int>
#define s                  second
#define f                  first
#define vl                 vector<long long int>
#define vc                 vector<char>
#define po                 pop_back
#define allr(x)            ((x).rbegin(), (x).rend())
#define all(x)             (x).begin(), (x).end()
#define in(v)               for(auto &b:v)cin>>b;
#define dsort(a)           sort(a,a+n,greater<int>())
#define tolower(s)         transform(s.begin(), s.end(), s.begin(), ::tolower)
#define c(v)              cout<<v<<endl;
#define yes                cout<<"Yes"<<endl;
#define in(v)               for(auto &b:v)cin>>b;
#define no                cout<<"No"<<endl;
#define mod                1000000007
#define inf               (long long)7e8+7
const int mx=4e5+5;

void solve() {
 int n;
 cin>>n;
 vector<int> a(n+2),b(n+2);
 for(int i=1;i<=n;i++){
    cin>>a[i];
 } for(int i=1;i<=n;i++){
    cin>>b[i];
 }
 int ret=0,st=1,ed=n;
 for(int i=1;i<=n;i++){
    if(a[i]==b[i]){
        ret++;
    }else{
        st=i;
        break;
    }
 }
  for(int i=n;i>=1;i--){
    if(a[i]==b[i]){
        ret++;
    }else{
        ed=i;
        break;
    }
 }
 int tight=st;
 int tar=0;
for(int i=st;i<=ed;i++){
    int ff=1;
    for(int j=tight;j<=ed;j++){
        if(a[j]==b[i]){
            ff=0;
            tight=++j;
            break;

        }
    }
    if(ff){
        tar=i;
        break;
    }

}
int ans=n;
if(tar>0)ans=n-ret-(tar-st);
else ans=n-ret;
int fight=ed;
int far=n+1;
for(int i=ed;i>=st;i--){
    int ff=1;
    for(int j=fight;j>=st;j--){
        if(a[j]==b[i]){
            ff=0;
            fight=--j;
            break;
        }

    }
    if(ff){
        far=i;
        break;
    }
}

 if(far<(n+1))ans=min(ans,n-ret-(ed-far));
else ans=min(ans,n-ret);
cout<<max(0,ans)<<endl;
}

int32_t main() {
    #ifndef ONLINE_JUDGE

       freopen("input.txt", "r", stdin);
       freopen("outbox.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);

 #endif
    int t = 1;

fast;
   cin >> t;
    int c = 1;
    while (t--) {
        cout << "Case " << c++ << ": ";
        solve();
    }
    return 0;
}