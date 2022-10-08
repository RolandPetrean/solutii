// https://www.pbinfo.ro/probleme/467/numar
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  cout<<(n%10)*(n/100%10);
}