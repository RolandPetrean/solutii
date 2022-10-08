// https://www.pbinfo.ro/probleme/493/constr
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int sumcif(int n) {
  int s=0;
  while (n) {
    s += n%10;
    n /= 10;
  }
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    cout<<x%sumcif(x)<<" ";
  }
}