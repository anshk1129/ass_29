#include<iostream>
using namespace std;
class Rupee{
int r;
public:
Rupee(){

}
Rupee(int x){
    r=x;
}
operator int(){
    return r;
}
};
int main(){
  Rupee r1(10);
  int x;
  x=r1;
  cout<<r1<<endl;
  cout<<x;
    return 0;
}