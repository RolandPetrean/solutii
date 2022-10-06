// https://www.pbinfo.ro/probleme/829/afisarerec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

void afis() {
  ll x;
  cin>>x;
  if (x != 0) afis();
  cout<<x<<" ";
}