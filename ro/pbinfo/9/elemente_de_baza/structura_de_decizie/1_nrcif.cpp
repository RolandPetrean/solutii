// https://www.pbinfo.ro/probleme/449/nrcif
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int cif=0;
  while (n) {
    ++cif;
    n /= 10;
  }
  cout<<cif;
}