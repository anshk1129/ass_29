#include<iostream>
using namespace std;
class Invent2{
  float x,y;
  public:
  Invent2(float i,float j){
    x=i;
    y=j;
  }
  Invent2(){

  }
  void display(){
    cout<<"x = "<<x<<" y = "<<y<<endl;
  }

};
class Invent1{
float i1,i2;
public:
Invent1(float x,float y){
    i1=x;
    i2=y;
}
operator float(){
    return (i1+i2);
}
void display(){
    cout<<i1<<" "<<i2<<endl;
}
operator Invent2(){
  Invent2 k(i1,i2); 
  return k;
}
};

int main(){
    Invent1 i(10.023f,11.234f);
    Invent2 d;
    float k;
    k=i;
    d=i;
    cout<<"\nThis is invent1 class to float result "<<k;
   cout<<"\nDisplaying result of invent1 class to invent2 class "<<endl;
   d.display();
    
}