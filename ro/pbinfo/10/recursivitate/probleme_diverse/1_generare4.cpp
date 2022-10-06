// https://www.pbinfo.ro/probleme/881/generare4
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int limit;

void gen(int n) {
  if (n>limit) return;
  for (int i=n/2+1; i<=(3*n)/4; ++i) cout<<i<<" ";
  gen(2*n);
  for (int i=(3*n)/4+1; i<=n; ++i) cout<<i<<" ";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  
  limit = pow(2, n);
  cout<<1<<" ";
  gen(2);
}