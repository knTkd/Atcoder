#include <bits/stdc++.h>
using namespace std;

long modpow(long a, long n, long m){
  long r = 1;
  while(n > 0){
    if(n & 1)  r = r * a % m;
    a = a * a % m;
    n >>= 1;
  }
  return r;
}


long modinv(long a, long m){ // 使える条件はmが素数  それ以外は拡張ユークリッド
  return modpow(a, m-2, m);
}  

int main(){
  cout << modinv(8, 13) << endl;

  return 0;
}
