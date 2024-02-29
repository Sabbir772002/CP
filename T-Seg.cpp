#include<bits/stdc++.h>

using namespace std;
#define endl               "\n"
#define fast               ios::sync_with_stdio(0);cin.tie(0);
#define ll                 long long int
#define c(v)              cout<<v<<endl;
#define cy                cout<<"YES"<<end;
#define in(v)            for(auto &b:v)cin>>b;
#define cn                cout<<"NO"<<endl;
#define mod                1000000007
#define inf                (int)1e9+7
#define  limitt            (int)1e5+100
const int limit=100100;
ll arr[50005]; 
string s;

bool tree[4*limit];
void build_tree(int node, int a, int b)
{
    if(a>b)return;
if (a == b)
{
 tree[node]=((s[a]=='0')?false:true);
 return;
}

            ll mid = (a + b) >> 1;
            build_tree(node * 2+1, a, mid);
            build_tree(node * 2+2, mid + 1, b);
           
}
/*void RangeU(int node, int tl, int tr, int l, int r){
if(l>tr || r<tl || tr<tl)return;
 if(tl==l and tr==r){
        tree[node] = !tree[node];
        return;
    }

    int tm = (tr+tl)/2;

    if(r<=tm)
        RangeU(2*node+1, tl, tm, l, r);
    else if(tm<l)
        RangeU(2*node+2, tm+1, tr, l, r);
    else{
        RangeU(2*node+1, tl, tm, l, tm);
        RangeU(2*node+2 , tm+1, tr, tm+1, r);
    }
}*/
bool query_tree(int node, int a, int b, int i)
{     
     

      if (a==b and i==a)
      {
        return tree[node];

      }
      if(tree[node]){
        tree[node*2+1]= !tree[node*2+1];
        tree[node*2+2]= !tree[node*2+2];
        tree[node]=false;
    }
      int mid = (a + b) >> 1;
    if (i <= mid) {
       return query_tree(node * 2 + 1, a, mid, i);
    } else {
      return  query_tree(node * 2 + 2, mid + 1, b, i);
    }

         
}
/*void update(ll node, ll a, ll b, ll idx, ll val) {
    if (a == b) {
        arr[a] = val;
        tree[node].prefix = arr[a];
        tree[node].suffix = arr[a];
        tree[node].total = arr[a];
        tree[node].best = arr[a];
        return;
    }

    ll mid = (a + b) >> 1;
    if (idx <= mid) {
        update(node * 2 + 1, a, mid, idx, val);
    } else {
        update(node * 2 + 2, mid + 1, b, idx, val);
    }

    tree[node].prefix = max(tree[node * 2 + 1].prefix, tree[node * 2 + 1].total + tree[node * 2 + 2].prefix);
    tree[node].suffix = max(tree[node * 2 + 2].suffix, tree[node * 2 + 1].suffix + tree[node * 2 + 2].total);
    tree[node].total = tree[node * 2 + 1].total + tree[node * 2 + 2].total;
    tree[node].best = max(tree[node * 2 + 1].suffix + tree[node * 2 + 2].prefix, max(tree[node * 2 + 1].best, tree[node * 2 + 2].best));
}*/
void update_tree(int node, int a, int b, int l,int r)
{
         if (a > b || a > r || b < l)return; 
         if (a==l and r==b)
         { 
                 tree[node]= !tree[node];
                  return;
         }
         int mid = (a + b) >> 1;
        if(r<=mid)update_tree(node * 2+1, a, mid, l, r);
         else if(l>mid) update_tree(node * 2 + 2, mid + 1, b, l, r);
        else{
         update_tree(node * 2+1, a, mid, l, mid);;
         update_tree(node * 2 + 2, mid + 1, b,mid+1, r);
    }
} 
void printLeafNodes(int node, int a, int b) {
    if (a == b) {
        if (tree[node] == 0) {
           // cout << "Leaf Node: " << a << ", Value: "0" << "";
            printf("0");
        } else {
            printf("1");
            //cout << "Leaf Node: " << a << ", Value: "1" <<"";
        }
        return;
    }

    int mid = (a + b) >> 1;
    printLeafNodes(node * 2 + 1, a, mid);
    printLeafNodes(node * 2 + 2, mid + 1, b);
}
void solve(){
   memset(tree, 0, sizeof(tree));

   ll n;
   cin>>s;
  build_tree(0,0,s.size()-1);

   int newp,i,j;
   cin>>newp;
   while(newp--){
   char c;
   cin>>c;
   if(c!='I'){
      cin>>i;
      bool nod=query_tree(0,0,s.size()-1,i-1);
      printf("%d\n",((nod==false)?0:1));

 }else{
     i,j;
      scanf("%d %d",&i,&j);
            update_tree(0,0,s.size()-1,i-1,j-1);



   }
}

 

}



int main(){
 #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
 #endif

    ll t=1;
    cin >> t;
    int f=1;
   //cout<<t<<endl;
    while (t--) {
     printf("Case %d:\n", f);
       solve();
       f++;
    }
  
}
       
 