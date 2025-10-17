#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long C;
typedef complex<C> P; // punto o vector
#define X real()
#define Y imag()
using vl = vector<ll>;
using vi = vector<int>;
using vll = vector<vector<ll>>;
using vb = vector<bool>;
using pii = pair<int,int>;
using mapii = map<int,int>;
const ll MOD = 998244353;
const int MAXN = 1e6+5;
const int INF = 1<<30;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define finout ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl;
#define raya cerr << "=================" << endl;
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forr(i,a,n) for(int i=a; i<int(n); i++)
#define dforn(i,n) for(ll i=ll(n)-1;i>=0;i--)
#define pb push_back
#define mp make_pair
#define endl "\n";
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define esta(x, c) ((c).find(x) != (c).end())
template<typename T>
void show_(const T &v) {
   cerr << "[ ";
   for (auto &x : v) cerr << x << " ";
   cerr << "]\n";
}

void solve(){
   ll n,m,k; 
   cin >> n >> m >> k;
   map<ll,ll> person_task;
   vl order;
   vl ans;

   forn(i,k){
      ll a,b; 
      cin >> a;
      cin >> b;
      person_task[a]++;
      if(person_task[a] == m) ans.pb(a);
   }

   for(ll val:ans){
      cout << val << " ";
   }
   cout << endl;
}

int main(){
   finout
   
   int t=1;
   // cin >> t;
   while(t--){
      solve();
   }
   
   return 0;
}