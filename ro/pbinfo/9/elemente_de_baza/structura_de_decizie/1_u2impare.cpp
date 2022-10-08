// https://www.pbinfo.ro/probleme/252/u2impare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  if (n&1) cout<<n-4<<" "<<n-2;
  else cout<<n-3<<" "<<n-1;
}