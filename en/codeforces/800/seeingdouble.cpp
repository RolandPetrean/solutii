// https://codeforces.com/contest/1758/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    string s;
    cin>>s;
    
    string x=s;
    reverse(x.begin(), x.end());
    cout<<s<<x<<endl;
  }
}