// https://infoarena.ro/problema/scmax
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("scmax.in");
ofstream fout("scmax.out");

int main() {
  int n;
  fin>>n;

  vector<int> a(n+2), lg(n+1, n+1), prev(n+1, 0);
  a[n+1] = INT_MAX;
  a[0] = INT_MIN;
  lg[0] = 0;
  for (int i=1; i<=n; ++i) {
    fin>>a[i];

    int l=0, r=n, res=0;
    while (l <= r) {
      int mid=(l+r)/2;
      if (a[i] > a[lg[mid]]) {
        l = mid+1;
        res = mid;
      } else r=mid-1;
    }

    prev[i] = lg[res];
    if (a[i]<a[lg[res+1]]) lg[res+1] = i;
  }

  for (int i=n; i>=0; --i) {
    if (lg[i] <= n) {
      stack<int> rezultat{};
      int curr=lg[i];
      while (curr != 0) {
        rezultat.push(a[curr]);
        curr = prev[curr];
      }
      fout<<rezultat.size()<<endl;
      while (!rezultat.empty()) {
        fout<<rezultat.top()<<" ";
        rezultat.pop();
      }
      break;
    }
  }
}