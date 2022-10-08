// https://www.pbinfo.ro/probleme/162/permcirc
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> c(2*n);
  for (int i=0; i<n; ++i) {
    cin>>c[i];
    c[n+i] = c[i];
  }
  for (int i=0; i<n; ++i) {
    for (int j=i; j<n+i; ++j) {
      cout<<c[j]<<" ";
    }
    cout<<endl;
  }
}