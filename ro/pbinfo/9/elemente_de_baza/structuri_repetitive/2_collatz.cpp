// https://www.pbinfo.ro/probleme/654/collatz
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int s=0;
  while (n != 1) {
    if (n&1) n = 3*n+1;
    else n /= 2;
    ++s;
  }
  cout<<s+1;
}