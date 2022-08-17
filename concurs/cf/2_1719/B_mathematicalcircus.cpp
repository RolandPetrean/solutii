// https://codeforces.com/contest/1719/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  for (int i=0; i<t; ++i) {
    int n, k;
    cin>>n>>k;

    bool ok=true;
    vector<pair<int,int>> f;
    for (int i=1; i<=n; i+=2) {
      if (((i+k)*(i+1)%4)==0) f.push_back({i, i+1});
      else if (((i+k+1)*i%4)==0) f.push_back({i+1, i});
      else ok=false;
    }

    if (ok) {
      cout<<"YES"<<endl;
      for (auto v : f) cout<<v.first<<" "<<v.second<<endl;
    } else cout<<"NO"<<endl;
  }
}