// https://www.pbinfo.ro/probleme/382/aproapek
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  if (n%k==0) cout<<n;
  else if (abs(n-k*(n/k))<=abs(n-k*(n/k+1))) cout<<k*(n/k);
  else cout<<k*(n/k+1);
}