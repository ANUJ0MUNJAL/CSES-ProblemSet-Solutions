#include <bits/stdc++.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;  
#define ll long long
#define loop(i,a,b) for(int i=a;i<b;i++)
#define all(p) p.begin(),p.end()
#define pb(p) push_back(p);
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
void solve();
int main()
{
    
        solve();
    
    return 0;
}
void solve()
{
   ordered_set st;
   ll n,k;
   cin>>n>>k;
   ll start=0;
   
   for(int i=1;i<=n;i++){
           st.insert(i);
   }
   while(st.size() > 0){
       start=start%st.size();
       
       ll rem=(start+k)%st.size();
       start=rem;
       auto val=st.find_by_order(start);
       cout<<*val<<" ";
       st.erase(val);
   }
   
}