// https://codeforces.com/contest/1770/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, k;
    cin>>n>>k;
    
    // Place big numbers in descending order and small numbers at the end of the "groups"
    // e.g. n=6 k=3 -> [6 5 1] [4 3 2]
    //                  1 1 1   1 2 2
    // Maximum is always n+1
    int big=n, small=1;
    for (int i=1; i<=k-1; ++i) {
      cout<<big--<<" ";
    }
    for (int i=k; i<=n; ++i) {
      if (i%k==0) cout<<small++<<" ";
      else cout<<big--<<" ";
    }
    cout<<endl;
  }
}