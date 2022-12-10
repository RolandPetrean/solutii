// https://codeforces.com/contest/1758/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    if (n%2==0) {
      cout<<1<<" "<<3<<" ";
      n -= 2;
    }
    for (int i=0; i<n; ++i) cout<<2<<" ";
    cout<<endl;
  }
}