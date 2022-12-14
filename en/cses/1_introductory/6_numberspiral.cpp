// https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, x, y;
  cin>>t;

  for (int i=0; i<t; i++) {
    int m, mval, val;
    cin>>y>>x; // Values are given in reversed order

    // Finding the value at the nearest diagonal
    m = max(x, y);
    mval = m*m-m+1;

    if (x == y) val = mval; // (x, y) is already on the diagonal
    else if (x < y) {
      if ((m&1)) val = mval - (y - x); // Spiral alternates
      else val = mval + (y - x);
    } else {
      if ((m&1)) val = mval + (x - y);
      else val = mval - (x - y);
    }
    cout<<val<<endl;
  }
}