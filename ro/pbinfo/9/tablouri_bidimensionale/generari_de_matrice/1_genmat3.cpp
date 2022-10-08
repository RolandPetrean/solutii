// https://www.pbinfo.ro/probleme/208/genmat3
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;
  
  long long k=1;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      cout<<k*k<<" ";
      k += 2;
    }
    cout<<endl;
  }
}