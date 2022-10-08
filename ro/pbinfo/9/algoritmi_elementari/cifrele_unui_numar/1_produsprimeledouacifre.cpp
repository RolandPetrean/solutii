// https://www.pbinfo.ro/probleme/2660/produsprimeledouacifre
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  
  while (n>99) n/=10;
  cout<<n%10*(n/10%10);
}