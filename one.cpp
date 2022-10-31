#include<iostream>
using namespace std;
class Complex{
int r,i;
public:
Complex(){

}
Complex(int x,int y){
r=x;
i=y;
}
void display(){
    cout<<"Real part = "<<r<<" Imaginary part = "<<i<<endl;
}
};
int main(){
    Complex  c1(4,5);
    c1.display();
    return 0;

}