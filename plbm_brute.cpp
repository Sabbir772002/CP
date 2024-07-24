#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define inf 1e18
#define ll long long int
#define endl '\n'
#define mem(a,x) memset(a,x,sizeof(a))
#define double long double
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r) (rng);
}
//cout << "0th element: " << *A.find_by_order(0) << endl;
//cout << "No. of elems smaller than 6: " << A.order_of_key(6) << endl;
//priority_queue <int, vector<int>, greater<int>>
ll pow1(ll a,ll b){ll ans=1; while(b>0){if(b%2==0){b=b/2;a=(a*a)%mod;}else{b--;ans=(ans*a)%mod;}}return ans;}
ll mod1=1e9+9;
ll pow2(ll a,ll b){ll ans=1; while(b>0){if(b%2==0){b=b/2;a=(a*a)%mod1;}else{b--;ans=(ans*a)%mod1;}}return ans;}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
const int N=4e5+2;

void is_it_matter()
{
	
	
	
}
// in debug template multiset dubbger not working or set or array
int main()
{
#ifndef ONLINE_JUDGE

       freopen("input.txt", "r", stdin);
       freopen("outbox.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);

 #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t=1;
    int cs=1;
    //cin>>t;
    while (t--)
    {
        //cout<<"Case #"<<cs<<": ";
        is_it_matter();
        cs++;
    }
}


#include <bits/stdc++.h>

using namespace std;
#define Fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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

#ifdef VAMP
#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cout << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args) {
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define dbg(...)
#endif

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

const int N = 4e6 + 9;

int sum;

struct ST {
    int t[4 * N];

    ST() { memset(t, 0, sizeof t); }

    void build(int n, int b, int e) {
        if (b == e) {
            t[n] = 1;
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        build(l, b, mid);
        build(r, mid + 1, e);
        t[n] = t[l] + t[r];
    }

    void upd(int n, int b, int e, int i, int x) {
        if (b > i || e < i) return;
        if (b == e && b == i) {
            t[n] = 0;
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        upd(l, b, mid, i, x);
        upd(r, mid + 1, e, i, x);
        t[n] = t[l] + t[r];
    }


    int query(int n, int l, int r) {
        if (l == r) {
            sum -= t[n];
            return (sum == 0) ? r : INT_MAX;
        }
        if (sum > t[n]) {
            sum -= t[n];
            return (sum == 0) ? r : INT_MAX;
        }
        int mid = (l + r) >> 1;

        int s1 = query(n << 1, l, mid);
        if (sum == 0)
            return s1;
        if (sum) {
            s1 = query((n << 1) | 1, mid + 1, r);
        }
        if (sum == 0)
            return s1;
        return (sum == 0) ? r : INT_MAX;
    }
};

ST st;
int n;

void solve() {
    cin >> n;
    st.build(1, 1, n);
    vector<int> a(n / 2), b(n / 2), ans1, ans2;
    cin >> a;
    cin >> b;
    for (int i = 0; i < n / 2; i++) {
        sum = a[i];
        ans1.push_back(st.query(1, 1, n));
        st.upd(1, 1, n, ans1.back(), 0);
        sum = b[i];
        ans2.push_back(st.query(1, 1, n));
        st.upd(1, 1, n, ans2.back(), 0);
    }
    cout << ans1 << "\n";
    cout << ans2 << "\n";
}

int main() {
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
