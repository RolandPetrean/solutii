// https://www.pbinfo.ro/probleme/508/cautare-binara
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n;
  set<long long> x;
  for (int i=0; i<n; ++i) {
    long long v;
    cin>>v;
    x.emplace(v);
  }
  cin>>m;
  
  for (int i=0; i<m; ++i) {
    long long v;
    cin>>v;

    bool f=x.find(v) != x.end();
    cout<<f<<" ";
  }
}