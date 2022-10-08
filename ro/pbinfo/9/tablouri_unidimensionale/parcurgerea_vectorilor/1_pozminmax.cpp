// https://www.pbinfo.ro/probleme/553/pozminmax
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  pair<int,int> mini{INT_MAX,0}, maxi{0,0};
  for (int i=1; i<=n; ++i) {
    int x;
    cin>>x;
    mini = min(mini,{x,i});
    maxi = max(maxi,{x,i});
  }
  cout<<mini.second<<" "<<maxi.second;
}