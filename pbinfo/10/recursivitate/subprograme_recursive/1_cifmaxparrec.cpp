// https://www.pbinfo.ro/probleme/824/cifmaxrec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll cifmaxpar(ll n) {
  if (n==0) return -1;
  if (n%10%2==0) {
    if (cifmaxpar(n/10)%2==0) return max(n%10, cifmaxpar(n/10));
    else return n%10;
  } else if (cifmaxpar(n/10)%2==0) return cifmaxpar(n/10);
  return -1;
}