// https://cses.fi/problemset/task/1072
// https://www.codespeedy.com/the-two-knights-problem-implemented-in-c/
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int k=1; k<=n; k++) {
    cout<<k*k*(k*k-1)/2 - 4*(k-1)*(k-2)<<endl;
  }
}