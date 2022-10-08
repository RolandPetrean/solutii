// https://www.pbinfo.ro/probleme/3667/cifmaximp
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int cnt=0;
  while (n--) {
    int x;
    cin>>x;

    int mx=0;
    while (x) {
      mx = max(mx, x%10);
      x /= 10;
    }
    if (mx&1) ++cnt;
  }
  cout<<cnt;
}