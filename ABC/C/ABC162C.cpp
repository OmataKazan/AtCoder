//sum of gcc of Tuples
//最大公約数の合計を求めよ
//感想:再帰関数の便利さを味わう。全探索が許される幸福
#include<iostream>
using namespace std;
//3重ループを使わざるを得ないか

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int gcd3(int a,int b,int c){
    int x=0;
  x=gcd(a,b);
  return gcd(x,c);
}

int main(){
  int sum=0;
  int k;
  cin >> k;
  for(int a=1;a<=k;a++){
    for(int b=1;b<=k;b++){
      for(int c=1;c<=k;c++){
        sum+=gcd3(a,b,c);
      }
    }
  }

  cout<<sum;
}
