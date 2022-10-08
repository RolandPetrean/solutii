// https://www.pbinfo.ro/probleme/3933/zero-unu
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  bool zero=false, unu=false;
  while (n) {
    if (n%10 == 0) zero = true;
    else if (n%10 == 1) unu = true;
    else {
      cout<<"nu";
      return 0;
    }
    n /= 10;
  }
  if (zero && unu) cout<<"da";
  else cout<<"nu";
}