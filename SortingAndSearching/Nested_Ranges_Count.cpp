
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set; 
using std::cout;
using std::cin;
using std::endl;  
#define ll long long
#define loop(i,a,b) for(int i=a;i<b;i++)
#define all(p) p.begin(),p.end()
#define pb(p) push_back(p);
int pop_count(long long a){int res=0;while(a){res+=(a&1),a>>=1;}return res;}
template<class T> using _pq = priority_queue<T>;
template<class T> using _pqr = priority_queue<T, vector<T>, greater<T>>;
template<class T> void So(vector<T> &v) {sort(v.begin(),v.end());}
template<class T> void Sore(vector<T> &v) {sort(v.begin(),v.end(),[](T x,T y){return x>y;});}

template<class T> void vec_out(vector<T> &p,int ty=0){
if(ty==2){cout<<'{';for(int i=0;i<(int)p.size();i++){if(i){cout<<",";}cout<<'"'<<p[i]<<'"';}cout<<"}\n";}
else{if(ty==1){cout<<p.size()<<"\n";}for(int i=0;i<(int)(p.size());i++){if(i) cout<<" ";cout<<p[i];}cout<<"\n";}}

template<class T> bool chmin(T &a,const T &b){if(a>b){a=b;return 1;}else return 0;}
template<class T> bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}else return 0;} 

template<class T> T vec_min(vector<T> &a){assert(!a.empty());T ans=a[0];for(auto &x:a) chmin(ans,x);return ans;}
template<class T> T vec_max(vector<T> &a){assert(!a.empty());T ans=a[0];for(auto &x:a) chmax(ans,x);return ans;}
template<class T> T vec_sum(vector<T> &a){assert(!a.empty());T ans=a[0]-a[0];for(auto &x:a) ans+=x;return ans;}

template<class T>  void matcout(vector<vector<T>> &a){for(auto &i:a){ for(auto &j:i){cout<<j<<"  ";}cout<<"\n";}cout<<"\n";}

template<class T> ll LB(vector<T> &v,T a){return lower_bound(v.begin(),v.end(),a)-v.begin();}
template<class T> ll UB(vector<T> &v,T a){return upper_bound(v.begin(),v.end(),a)-v.begin();}

void solve();
int main()
{
    
        solve();
    
    return 0;
}
static bool cmp(const array<int,3>&a,const array<int,3>&b){
  if(a[0]==b[0]){
    return a[1]>b[1];
  }
  return a[0]<b[0];
}
void solve()
{
    ll n;
    cin>>n;
    vector<array<int,3>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        arr[i][2]=i;
    }
    vector<int> first(n);
    vector<int> second(n);
    ordered_set st;
    sort(arr.begin(),arr.end(),cmp);
    for(int j=0,i=n-1;i>=0;j++,i--){
      first[arr[i][2]]=st.order_of_key({arr[i][1]+1,-1});
      st.insert({arr[i][1],j});
    }
    ordered_set an;
    for(int i=0;i<n;i++){
         second[arr[i][2]]=an.size()-an.order_of_key({arr[i][1],-1});
         an.insert({arr[i][1],i});
    }
    for(auto j: first){
       
        cout<<j<<" ";
    }
    cout<<"\n";
    for(auto j: second){
       
        cout<<j<<" ";
    }
    cout<<"\n";

}