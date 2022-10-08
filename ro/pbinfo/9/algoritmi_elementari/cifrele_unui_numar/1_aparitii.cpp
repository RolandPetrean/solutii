// https://www.pbinfo.ro/probleme/107/aparitii
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if (n == 0) {
    cout<<1;
    return 0;
  }

  long long x = n%10, s=0;
  while (n) {
    if (n%10 == x) ++s;
    n /= 10;
  }
  cout<<s;
}