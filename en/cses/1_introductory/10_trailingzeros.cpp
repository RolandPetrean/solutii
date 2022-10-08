// https://cses.fi/problemset/task/1618
// https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, trailing=0;
  cin>>n;

  for (int i=5; i <= n; i*=5) {
    trailing += n / i;
  }
  cout<<trailing;
}