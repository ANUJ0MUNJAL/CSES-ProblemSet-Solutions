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

#include<bits/stdc++.h>
using namespace std;

const unsigned long long int md = 1000000007; 
const unsigned long long int co = 2000020;
unsigned long long int ft[co];
unsigned long long int fact(unsigned long long int n)
{   
    return ft[n];
}
void fct(){
    ft[0]=1;
    for(unsigned long long int i = 1;i<=2000020;i++){
        ft[i]=(i*ft[i-1]) % md;
    }
}
unsigned long long int power(unsigned long long int x, unsigned long long int n, unsigned long long int mod){
    unsigned long long int result=1; 
    x = x % md;
    while(n>0){
        if(n%2 ==1){
            result = (result*x) % md;
        }
        n= n>>1;
        x= (x*x)% md;   
    }
    return result;
}

void solve();
int main()
{
    
        solve();
    
    return 0;
}
void solve()
{
   ll n;
   cin>>n;
   ll mod=1e9+7;
   cout<<power(2,n,mod)<<endl;
   
}