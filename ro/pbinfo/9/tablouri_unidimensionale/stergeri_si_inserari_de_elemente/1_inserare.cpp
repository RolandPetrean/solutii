// https://www.pbinfo.ro/probleme/158/inserare
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x, p;
  cin>>n>>x>>p;

  for (int i=1; i<=n; ++i) {
    int a;
    cin>>a;
    if (i == p) cout<<x<<" ";
    cout<<a<<" ";
  }
}