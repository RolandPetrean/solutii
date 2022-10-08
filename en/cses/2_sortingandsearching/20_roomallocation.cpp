// https://cses.fi/problemset/task/1164
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

struct Customer {
  int start;
  int end;
  int i;

  friend bool operator<(const Customer& a, const Customer& b) {
    return a.end < b.end;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<Customer> c; // Using a struct for cleaner syntax
  for (int i=0; i<n; i++) {
    int a, b;
    cin>>a>>b;
    c.push_back({a, b, i});
  }
  sort(c.begin(), c.end());
  
  int r=0;
  vector<pair<int,int>> rc; // (index, room), used to store outputs & cout in order
  multimap<int,int> rs; // end : room
  for (int i=0; i<n; i++) {
    int curr=0;

    // Find the first end time smaller than the start time (note --it)
    auto it = rs.lower_bound(c[i].start);
    if (it != rs.begin() && c[i].start > (*(--it)).second) {
      curr = (*it).second; // Set current room to the last customer's room
      rs.erase(it); // Erase old customer 
    }
    if (!curr) curr = ++r;

    // Insert data for the new customer
    rs.insert({c[i].end, curr});
    rc.push_back({c[i].i, curr});
  }
  sort(rc.begin(), rc.end());

  cout<<r<<endl;
  for (auto [_, v] : rc) cout<<v<<" ";
}