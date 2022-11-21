// https://www.infoarena.ro/problema/ssm
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("ssm.in");
ofstream fout("ssm.out");

int main() {
  int n;
  fin>>n;

  int sum=0, maxi=0, ll=0, l=0, r=0;
  fin>>sum;
  maxi = sum;
  for (int i=1; i<n; ++i) {
    int x;
    fin>>x;
    if (sum<0) {
      sum=0;
      ll = i;
    }
    sum += x;

    if (sum>maxi) {
      maxi = sum;
      l = ll;
      r = i;
    }
  }

  fout<<maxi<<" "<<l+1<<" "<<r+1;
}