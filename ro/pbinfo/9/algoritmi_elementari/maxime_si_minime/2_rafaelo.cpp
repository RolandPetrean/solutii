// https://www.pbinfo.ro/probleme/561/rafaelo
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int s, n;
  cin>>s>>n;

  pair<int,int> mini{INT_MAX,INT_MAX};
  for (int i=1; i<=n; ++i) {
    int x;
    cin>>x;
    mini = min(mini, {x,i});
  }
  cout<<s/mini.first<<" "<<mini.second;
}