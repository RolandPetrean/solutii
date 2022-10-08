// https://www.pbinfo.ro/probleme/340/control
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int s=n;
  while (s>10) {
    n = s;
    s = 0;
    while (n>0) {
      s += n%10;
      n /= 10;
    }
  }
  cout<<s;
}