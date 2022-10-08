// https://www.pbinfo.ro/probleme/172/difmin
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long lx, n1=0, n2=0;
  pair<long long long long> mini{LONG_LONG_MAX, LONG_LONG_MAX};
  cin>>lx;
  for (int i=1; i<n; ++i) {
    long long x;
    cin>>x;

    if (abs(x-lx) < mini.first || (abs(x-lx) == mini.first && x+lx < mini.second)) {
      mini = {abs(x-lx),x+lx};
      n1 = lx;
      n2 = x;
    }
    lx = x;
  }
  cout<<n1<<" "<<n2;
}