// https://codeforces.com/contest/1770/problem/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

const int MAXP=105;
vector<int> p{};

void ciur() {
  bitset<MAXP> c{};
  for (int i=2; i*i<MAXP; ++i) {
    if (!c[i]) for (int j=i*i; j<MAXP; j+=i) c[j] = true;
  }

  for (int i=2; i<MAXP; ++i) {
    if (!c[i]) p.push_back(i);
  }
}

// If there is some a and b where a%p == b%p then x != p-(a%p) (mod p), because a
// and b would have p as a common factor. 
//
// It's easy to see that if there are 2 numbers that have the same remainder for
// each remainder mod p or there are any 2 identical numbers in the array, the answer 
// is no. Otherwise, the answer is yes.
//
// We only need to check primes <=100 (or <=50, actually) because we need 2*p numbers
// in the array to satisfy the above condition for any prime, and n<=100.
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  ciur();

  while (t--) {
    int n;
    cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];

    vector<vector<int>> ap(MAXP, vector<int>(MAXP));
    bool found=false;
    for (int i=0; i<n; ++i) {
      for (int r:p) ++ap[r][a[i]%r];
      for (int j=i+1; j<n; ++j) {
        if (a[i]==a[j]) found = true;
      }
    }

    for (int r:p) {
      bool ok=true;
      for (int i=0; i<r; ++i) {
        if (ap[r][i]<2) ok = false;
      }
      if (ok) found = true;
    }

    cout<<(found?"NO":"YES")<<endl;
  }
}
