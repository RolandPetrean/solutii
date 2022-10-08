// https://www.pbinfo.ro/probleme/1452/stergere-element
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, p;
  cin>>n>>p;
  for (int i=1; i<=n; ++i) {
    int x;
    cin>>x;
    if (i != p) cout<<x<<" ";
  }
}