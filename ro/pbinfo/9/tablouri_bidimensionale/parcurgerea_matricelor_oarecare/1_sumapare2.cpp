// https://www.pbinfo.ro/probleme/767/sumapare2
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;

  long long s=0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      long long x;
      cin>>x;
      if (x%2==0) s += x;
    }
  }
  cout<<s;
}