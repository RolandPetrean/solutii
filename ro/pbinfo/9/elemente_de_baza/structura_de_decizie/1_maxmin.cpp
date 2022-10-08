// https://www.pbinfo.ro/probleme/9/maxmin
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x, y, z;
  cin>>x>>y>>z;
  cout<<max(x, max(y, z)) - min(x, min(y, z));
}