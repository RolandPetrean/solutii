// https://www.pbinfo.ro/probleme/2604/schimbarecifre
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  cout<<(n%10*10+n/10%10)*(n%10*10+n/10%10);
}