// https://www.pbinfo.ro/probleme/253/u2pare
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  if (n&1) cout<<n+1<<" "<<n+3;
  else cout<<n+2<<" "<<n+4;
}