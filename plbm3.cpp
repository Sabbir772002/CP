#include <bits/stdc++.h>

using namespace std;
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
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
int a,b,d;
void solve()
{
    
    cin>>a>>b>>d;
    int x=0,y=0;
    for(int i=a;i<=d;i*=a){
        if(d%i!=0){
            break;               
        }
        x++;
    }    
    for(int i=b;i<=d;i*=b){
        if(d%i!=0){
            break;
        }
        y++;
    }
   //  cout<<x<<" "<<y<<endl;
    int ans=0;
    set<ll> s;
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            ll g=ceil(pow(a,i))*ceil(pow(b,j));
            // cout<<"i"<<i<<pow(a,i)<<"iiii";
            // cout<<"j"<<j<<pow(b,j)<<" "<<g<<endl;;

       //   cout<<pow(a,i)<<" "<<pow(b,j)<<endl;
            if(g<=d and d%g==0){     // s.insert(d/g);    
              s.insert(g);}

        }
    }
    cout<<s.size()<<endl;


    
}
int main()
{
  #ifndef ONLINE_JUDGE
       freopen("IO/input.txt", "r", stdin);
       freopen("IO/output.txt", "w", stdout);
       freopen("IO/Error.txt", "w", stderr);
 #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t=1;
    //int cs=1;
    cin>>t;
    while (t--)
    {
        //cout<<"Case "<<cs<<":"<<endl;
        solve();
       // cs++;
    }
}