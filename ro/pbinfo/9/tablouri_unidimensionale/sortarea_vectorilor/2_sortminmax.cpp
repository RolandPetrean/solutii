// https://www.pbinfo.ro/probleme/180/sortminmax
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  pair<long long long long> mini{1001,0}, maxi{0,0};
  vector<long long> nr(n);
  for (int i=0; i<n; ++i) {
    cin>>nr[i];
    mini = min(mini, {nr[i],i});
    maxi = max(maxi, {nr[i],i});
  }
  sort(nr.begin()+min(mini.second, maxi.second), nr.begin()+max(mini.second, maxi.second)+1);
  for (auto x : nr) cout<<x<<" ";
}