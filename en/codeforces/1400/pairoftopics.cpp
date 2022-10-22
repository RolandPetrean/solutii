// https://codeforces.com/problemset/problem/1324/D
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
 
  vector<int> a(n), b(n), d(n);
  for (int i=0; i<n; ++i) cin>>a[i];
  for (int i=0; i<n; ++i) cin>>b[i];
  for (int i=0; i<n; ++i) d[i] = a[i]-b[i];
  sort(d.begin(), d.end());
 
  // Choose 2 numbers of d such that the sum is positive.
  // d: 0 3 -2 5 -1
  // Sorted: -2 -1 0 3 5
 
  long long cnt=0;
  for (int i=0; i<n; ++i) {
    int l=i, r=n-1, p=n, mid=n;
    while (l<=r) {
      mid=(l+r)/2;
      if (d[i]+d[mid]<=0) l=mid+1;
      else {
        p = mid;
        r = mid-1;
      }
    }
 
    if (p == i) ++p;
    cnt += n-p;
  }
 
  cout<<cnt;
}