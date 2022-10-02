// https://www.pbinfo.ro/probleme/429/cifbin
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  if (n==0) cout<<"1 0";
  else cout<<(int) log2(n)+1-__builtin_popcount(n)<<" "<<__builtin_popcount(n);
}