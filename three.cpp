#include<iostream>
using namespace std;
class Product{
int r,i;
public:
Product(){

}
Product(int x,int y){
r=x;
i=y;
}
int getr(){
    return r;
}
int geti(){
    return i;
}
void display(){
    cout<<"First  product = "<<r<<" Second product = "<<i<<endl;
}
};
class Item{
  int i;
  public:
  Item(){

  }
  Item(Product c){
    i=c.getr()+c.geti();
  }
   void display(){
    cout<<" I = "<<i<<endl;
   }
};
int main(){
    Product  c1(5,6);
    Item i;
    c1.display();
    i=c1;
    i.display();

    return 0;

}
