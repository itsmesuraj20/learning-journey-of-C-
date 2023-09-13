#include <bits/stdc++.h>

using namespace std;

int maxP(int n, int a, int b, int c) {
  if (n == 0) return 0;
  if (n < 0) return -1;

  int res1 = max(maxP(n - a, a, b, c), maxP(n - b, a, b, c));
  int res = max(res1, maxP(n - c, a, b, c)); 
  
  
  if (res == -1) return -1;

  return res + 1;
}

int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  
  int res=maxP(n, a, b, c);
  cout <<res<< endl;

  return 0;
}
