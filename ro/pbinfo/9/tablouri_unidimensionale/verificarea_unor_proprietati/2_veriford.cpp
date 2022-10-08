// https://www.pbinfo.ro/probleme/287/veriford
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    long long m;
    cin>>m;

    long long l, o=1;
    cin>>l;
    for (int j=1; j<m; ++j) {
      long long x;
      cin>>x;
      if (x<l) o=0;
      l=x;
    }
    cout<<o<<" ";
  }
}