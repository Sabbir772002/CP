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
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
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
const int mx=1001;
int bit[3*(int)3e5+8]={0};
int n;
void add(int idx) {
    for (++idx; idx < n; idx += idx & -idx)
        bit[idx] +=1;
}

void range(int l, int r, int val) {
    // add(l, val);
    // add(r + 1, -val);
}

int point(int idx) {
    int ret = 0;
    for (++idx; idx > 0; idx -= idx & -idx)
        ret += bit[idx];
    return ret;
}

struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if(abs(a.first-b.first)==1) return 0;
        if(abs((a.first + a.second - point(a.second-1) + 1)-(b.first + b.second - point(b.second-1) + 1))<2) return 1;
        if (a.first == b.first) {
            return a.second < b.second; // sort by index in ascending order when first elements are equal
        }
        return a.first < b.first; // sort by first element in descending order
    }
};

void solve() {
  cin >> n;
  memset(bit,0,sizeof(bit));
  priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

  fr(i, n) {
      int x; cin >> x;
      pq.push({x, i});
  }

  set<ll> s;
  while (!pq.empty()) {
      auto a = pq.top();
      pq.pop();
      s.insert(a.first + a.second - point(a.second-1) + 1);
      add(a.second);
  }

  for (auto it = s.rbegin(); it != s.rend(); ++it) {
      cout << *it << " ";
  }
  cout << endl;
}

int main(){
  fast;

 #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("outbox.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);

 #endif
  ll t=1;
  cin >> t;

  while (t--) {
     solve();
  }
  return 0;
}
