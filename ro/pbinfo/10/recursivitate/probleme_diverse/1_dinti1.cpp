// https://www.pbinfo.ro/probleme/1799/dinti1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

long long sumdinti(int n) {
  if (n==0) return 0;
  return n+2*sumdinti(n-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  cout<<sumdinti(n);
}