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

  /*
    例えば、 nCr を (mod = 1e9+7 などの素数) で求める時、

      n * (n - 1) * ... * (n - r + 1)
      -------------------------------
                     r !
    である。
    このとき 分母の r ! を割り算でなく掛け算にする。つまり
    
             1 / r ! 三 ?  (mod p)   

    となる ? を求めたい。
    フェルマーの少定理から、
          Y^(p - 1) 三 1  (mod p)  (p は素数、p と Y は互いに素)
    が成り立つ。これを変形すると、
          Y * Y^(p - 2) 三 1  (mod p)
              Y^(p - 2) 三 Y^(-1)  (mod p)
                 Y^(-1) 三 Y^(p - 2)  (mod p)

    である。よって

             1 / r! 三 (r!)^(p - 2)  (mod p)

    が成り立つ。ここから、

    nCr = {n * (n-1) * ... * (n-r+1)} * {(r!)^(p-2)} % p

    である。
   */
  return 0;
}
