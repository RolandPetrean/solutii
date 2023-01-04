// https://codeforces.com/contest/1731/problem/B
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

    cout<<"1 "<<n<<" ";
    for (int i=2; i<n; ++i) cout<<i<<" ";
    cout<<endl;
  }
}