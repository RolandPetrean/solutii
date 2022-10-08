// https://www.pbinfo.ro/probleme/2420/easyrow
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, p=0;
  cin>>n;

  for(int i=1; i<=n; ++i) {
    int ndiv=0, j=1;
    for(j=1;j*j<i;j++)if(i%j==0)ndiv+=2;
    if(j*j==i)++ndiv;
    p+=ndiv;
  }

  cout<<p;
}