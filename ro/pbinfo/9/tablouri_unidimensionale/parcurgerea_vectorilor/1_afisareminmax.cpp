// https://www.pbinfo.ro/probleme/490/afisareminmax
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  pair<int,int> mini{INT_MAX,0}, maxi{-1,0};
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    maxi = max(maxi, {v[i],i});
    mini = min(mini, {v[i],i});
  }

  for (int i=min(mini.second, maxi.second); i<=max(mini.second, maxi.second); ++i) cout<<v[i]<<" ";
}