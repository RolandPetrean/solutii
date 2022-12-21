// https://codeforces.com/contest/1772/problem/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int k, n;
    cin>>k>>n;

    vector<int> a(k);
    a[0] = 1;
    for (int i=1; i<k; ++i) {
      a[i] = a[i-1]+i;
      if (n-a[i-1]<k-1) a[i] = a[i-1]+1;
    }

    for (int v:a) cout<<v<<" ";
    cout<<endl;
  }
}