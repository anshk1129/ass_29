#include<iostream>
using namespace std;
class Dollar{
int r;
public:
Dollar(){

}
Dollar(int x){
    r=x;
}
operator int(){
    return r;
}
void display(){
    cout<<r<<endl;
}
};
int main(){
  Dollar r1(10);
//   int x;
//   x=r1;
  r1.display();
//   cout<<x;
    return 0;
}