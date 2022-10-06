// https://www.pbinfo.ro/probleme/293/cifredistincte
#include <bits/stdc++.h>
using namespace std;

bool distincte(int x) {
  bool freq[10]{};
  while (x>0) {
    if (freq[x%10]) return false;
    freq[x%10] = true;
    x /= 10;
  }
  return true;
}

int main() {
  int n;
  cin>>n;
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    if (!distincte(x)) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}