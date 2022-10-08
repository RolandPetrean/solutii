// https://www.pbinfo.ro/probleme/547/numarare6
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int maxi=-1, mini=INT_MAX;
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    maxi = max(maxi, v[i]);
    mini = min(mini, v[i]);
  }

  int s=0;
  for (int i=0; i<n; ++i) s += (v[i]==(maxi-mini));
  cout<<s;
}