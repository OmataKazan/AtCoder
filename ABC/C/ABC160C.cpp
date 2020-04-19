//start 2020 13:17
//end 2020 13:
/*
学んだこと
C++の動的配列はvectorによって可能である。
円環問題は直線化することで簡単になる
例外を探すべし
一つの例外を省くのなら例外だけを探した方が早い
*/
//C - Traveling Salesman around Lake
#include <vector>
#include<iostream>
using namespace std;

int main(){
  int K,N;
  int box;
    cin >> K;
    cin >> N;
    vector<int> p(N+1,-1);
    vector<int> route(N,-1);
    for(int i=0;i<N;i++){
      cin >> p[i];
    }
    p[N]=K+p[0];

    for(int i=0;i<N;i++){
      //cout<<"i:"<<i<<"  (i+1)%N:"<<(i+1)%N<<endl;
      if((p[(i+1)] - p[i])>=0){
        route[i]=p[(i+1)] - p[i];
      }else{
        route[i]=p[i]-p[(i+1)];
      }
    }

  int max=-1;
  int pn=-1;
  for(int i=0;i<N+1;i++){
    if(route[i]>max){
      max=route[i];
      pn=i;
    }
  }
  int ans=0;
  //for(int i=0;i<N+1;i++){
    //cout<<p[i]<<' ';
  //}
  //cout<<' '<< endl;
  //for(int i=0;i<N+1;i++){
    //cout<<route[i] << ' ';
  //}
  //cout<<' '<<endl;
  for(int i=0;i<N+1;i++){
    if(i!=pn){
      ans+=route[i];
    }
  }
  cout<<ans;

}
