#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k, n, w;
  cin>>k>>n>>w;

  int p=0;
  for (int i=1; i<=w; ++i) p += i*k;
  cout<<(p-n > 0 ? p-n : 0);
}