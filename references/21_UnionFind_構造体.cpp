#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
  vector<int> p;
  UnionFind(int n){
    p.resize(n+1);
    for(int i=0; i<=n; i++)  p[i] = i;
  }
  int find(int x){
    if(p[x] == x)  return x;
    return p[x] = find(p[x]);
  }
  void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y)  return;
    p[x] = y;
  }
};

int main(){
  int n, q;  cin >> n >> q;
  UnionFind uf(n);
  while(q--){
  int com , x, y;  cin >> com >> x >> y;
    if(com == 0){
      uf.unite(x, y);
    }else if(com == 1){
      string ans = "Yes";
      if(uf.find(x) != uf.find(y))  ans = "No";
      cout << ans << endl;
    }
  }

  return 0;
}
