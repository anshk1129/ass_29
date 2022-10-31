#include<iostream>
using namespace std;
class Item{
  int i;
  public:
  Item(){

  }
  Item(int r){
    i=r;
  }
   void display(){
    cout<<" I = "<<i<<endl;
   }
};
class Product{
int r,i;
public:
Product(){

}
Product(int x,int y){
r=x;
i=y;
}
operator Item(){
    Item i1(r+i);
    return i1;

}
void display(){
    cout<<"First  product = "<<r<<" Second product = "<<i<<endl;
}
};

int main(){
    Product  c1(11,6);
    Item i;
    c1.display();
    i=c1;
    i.display();

    return 0;

}
