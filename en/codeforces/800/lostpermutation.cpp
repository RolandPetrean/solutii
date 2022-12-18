// https://codeforces.com/contest/1759/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int m, s;
    cin>>m>>s;

    int e=0, maxi=0;
    for (int i=0; i<m; ++i) {
      int x;
      cin>>x;
      e -= x;
      maxi = max(maxi, x);
    }
    e += maxi*(maxi+1)/2;

    while (e<s) e += ++maxi;
    cout<<(e==s?"YES":"NO")<<endl;
  }
}