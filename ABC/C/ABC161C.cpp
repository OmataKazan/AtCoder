//Replacing Integer
//xとxをKの差の絶対値で置き換える
//最小かどうかの判断が難しい
//どのタイミングで止めればいい？

//自力で解くのに失敗
//得たもの->答えを絞り込めたら、どうにかして数式化できないか
//考察する
#include<iostream>
using namespace std;

int main(){
  long long x,k;
  cin>>x;
  cin>>k;
  long long ans=0;
  ans=min(x%k,k-(x%k));
  cout<<ans;
}
