// https://www.pbinfo.ro/probleme/487/numarare2
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int ma=0;
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    ma += v[i];
  }
  ma /= n;

  int s=0;
  for (int i=0; i<n; ++i) {
    if (v[i]>ma) ++s;
  }
  cout<<s;
}