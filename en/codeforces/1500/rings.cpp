// https://codeforces.com/problemset/problem/1562/C
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    string s;
    cin>>n>>s;

    bool found=false;
    for (int i=0; i<n && !found; ++i) {
      if (s[i]=='0') {
        if (i>=n/2) cout<<"1 "<<i+1<<" 1 "<<i;
        else cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n;
        found = true;
      }
    }

    if (!found) cout<<"1 "<<n-1<<" 2 "<<n;
    cout<<endl;
  }
}