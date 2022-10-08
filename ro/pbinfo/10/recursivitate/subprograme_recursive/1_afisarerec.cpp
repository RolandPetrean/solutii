// https://www.pbinfo.ro/probleme/829/afisarerec
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

void afis() {
  long long x;
  cin>>x;
  if (x != 0) afis();
  cout<<x<<" ";
}