// https://www.pbinfo.ro/probleme/3747/bile4
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("bile4.in");
ofstream fout("bile4.out");

int main() {
  int c, n, k;
  fin>>c>>n>>k;

  if (c==1) {
    // Proof
    // (n(n+1)/2 - k) / (n-1) = k
    // n(n+1)/2 - k = k(n-1)
    // n(n+1)/2 = k(n-1)+k
    // = k(n-1+1) = kn
    // => k = (n+1)/2
    if (n&1) fout<<(n+1)/2;
    else fout<<-1;
  } else {
    // (a1+a2+...+ak)/k = k
    // a1+a2+...+ak = k^2

    // Solutie pentru k par, dar nu e neaparat minim/maxim lexicografic
    // (k+1)+(k-1)+...+(k+k/2)+(k-k/2) =
    // = k+1+k-1+...+k+k/2+k-k/2
    // = k+k+...+k+k
    // = 2k(k/2) = k^2
  }
}