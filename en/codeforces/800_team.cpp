// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int cnt=0;
  while (n--) {
    int a, b, c;
    cin>>a>>b>>c;

    if (a+b+c>=2) ++cnt;
  }
  cout<<cnt;
}