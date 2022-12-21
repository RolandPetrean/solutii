// https://codeforces.com/contest/1774/problem/A
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
    string s;
    cin>>n>>s;
    
    bool plus=true;
    for (int i=1; i<n; ++i) {
      if (s[i] == '1') plus = !plus;
      cout<<(plus?"+":"-");
    }
    cout<<endl;
  }
}