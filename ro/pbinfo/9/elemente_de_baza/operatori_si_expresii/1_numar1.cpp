// https://www.pbinfo.ro/probleme/468/numar1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  cout<<(n/100%10*10+n%10)*(n/100%10*10+n%10);
}