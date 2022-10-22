// https://codeforces.com/problemset/problem/1538/F
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int l, r;
    cin>>l>>r;
    
    int s=0;
    while (r) {
      s += r-l;
      r /= 10;
      l /= 10;
    }

    cout<<s<<endl;
  }
}