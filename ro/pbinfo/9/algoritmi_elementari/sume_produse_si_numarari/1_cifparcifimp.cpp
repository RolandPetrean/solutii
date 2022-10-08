// https://www.pbinfo.ro/probleme/3664/cifparcifimp
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long p=0, imp=0;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    if (x==0) ++p;
    while (x>0) {
      if (x%10&1) ++imp;
      else ++p;
      x /= 10;
    }
  }
  cout<<p<<" "<<imp;
}