// https://www.pbinfo.ro/probleme/2616/paznici1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;
  if (n&1) ++n;
  if (m&1) ++m;
  cout<<(n/2)*(m/2);
}