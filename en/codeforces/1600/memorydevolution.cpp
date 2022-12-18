// https://codeforces.com/contest/712/problem/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int x, y;
  cin>>x>>y;

  int a=y, b=y, c=y, t=0, s=0;
  while (true) {
    if (a>=x && b>=x && c>=x) {
      cout<<s;
      return 0;
    }

    if (t%3==0) a = b+c-1;
    else if (t%3==1) b = a+c-1;
    else c = a+b-1;
    ++t; ++s;
  }
}