// https://www.pbinfo.ro/probleme/2222/p10-10
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, k;
  cin>>n>>k;
  
  long long z=0;
  while (n!=1) {
    ++z;
    n /= 10;
  }

  cout<<1;
  for (int i=0; i<k; ++i) {
    for (int j=0; j<z; ++j) cout<<0;
  }
}