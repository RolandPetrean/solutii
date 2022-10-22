// https://codeforces.com/problemset/problem/1542/B
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, a, b;
    cin>>n>>a>>b;

    int x=1;
    bool found=false;
    while (x<=n && !found) {
      if ((n-x)%b==0) found = true;
      x *= a;
    }

    if (found) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}