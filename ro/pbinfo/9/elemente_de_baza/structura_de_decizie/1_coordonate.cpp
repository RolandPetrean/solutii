// https://www.pbinfo.ro/probleme/2248/coordonate
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x, y, val;
  cin>>n>>x>>y>>val;

  cout<<n*(x-1)+y<<" "<<ceil((float) val/n)<<" "<<((val%n) == 0 ? n : val%n);
}