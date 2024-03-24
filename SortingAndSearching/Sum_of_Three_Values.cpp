#include <bits/stdc++.h>
using namespace std;
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
   ll n,t;
   cin>>n>>t;
   vector<pair<ll,ll>> arr(n);
   for(int i=0;i<n;i++)
     cin>>arr[i].first,arr[i].second=i+1;
     So(arr);
        if(arr.size()<=2){
            cout<<"IMPOSSIBLE"<<"\n";
            return 0;
        }
        if(arr.size()==3){
            ll sum=arr[0].first+arr[1].first+arr[2].first;
            if(sum==t){
                cout<<1<<" "<<2<<" "<<3<<"\n";
                return 0;
            }else{
                cout<<"IMPOSSIBLE"<<"\n";
                return 0;
            }
        }
     for(int i=0;i<arr.size()-2;i++){
        int j=i+1;
        int k=n-1;

        while(j<=k){
            ll sum=arr[i].first+arr[j].first+arr[k].first;
            if(sum==t){
                cout<<arr[i].second<<" "<<arr[j].second<<" "<<arr[k].second<<"\n";
                return 0;
            }else if(sum > t){
                k--;
            }else{
                j++;
            }
        }
     }
     cout<<"IMPOSSIBLE"<<"\n";
}
void solve()
{
   
}