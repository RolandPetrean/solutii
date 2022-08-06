// https://www.pbinfo.ro/probleme/825/cifminrec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll cifmin(ll x) {
  if(x<10) return x;
  if(x%10 > (x/10)%10) return cifmin(x/10);
  return cifmin((x/100)*10 + x%10);
}