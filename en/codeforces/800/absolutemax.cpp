// https://codeforces.com/contest/1763/problem/A
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
    
    int maxi=0, mini;
    cin>>mini;
    maxi |= mini;
    for (int i=1; i<n; ++i) {
      int x;
      cin>>x;
      maxi |= x;
      mini &= x;
    }

    cout<<maxi-mini<<endl;
  }
}