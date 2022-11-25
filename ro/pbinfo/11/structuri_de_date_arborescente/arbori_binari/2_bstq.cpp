// https://www.pbinfo.ro/probleme/4088/bstq
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

ifstream fin("bstq.in");
ofstream fout("bstq.out");

int main() {
  int n;
  fin>>n;

  ordered_set a{};
  for (int i=0; i<n; ++i) {
    int c, x;
    fin>>c>>x;

    if (c==1) a.insert({x, i});
    else fout<<(*a.find_by_order(--x)).first<<endl;
  }
}