// https://www.pbinfo.ro/probleme/489/afisare1
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> e(n);
  for (int i=0; i<n; ++i) cin>>e[i];

  for (int i=0; i<n; ++i) {
    if (i&1) cout<<e[n-1-(i/2)];
    else cout<<e[i/2];
    cout<<" ";
  }
}