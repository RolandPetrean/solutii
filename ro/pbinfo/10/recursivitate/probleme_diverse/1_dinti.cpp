// https://www.pbinfo.ro/probleme/842/dinti
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void dinti(int n) {
  if (n==0) return;
  dinti(n-1);
  cout<<n<<" ";
  dinti(n-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  dinti(n);
}