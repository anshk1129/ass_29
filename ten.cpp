#include<iostream>
using namespace std;
class Dollar{
float d;
public:
Dollar(){

}
Dollar(float y){
d=y;
}
operator float(){
    return d;
}
float getd(){
    return d;
}
void display(){
    cout<<d<<" Dollar"<<endl;
}
};

class Rupee{
float r;
public:
Rupee(){

}
Rupee(float y){
r=y;
}
operator float(){
    return r;
}
Rupee(Dollar v){
    r=v.getd()*100;
}
operator Dollar(){
    return r/100;
}
void display(){
    cout<<r<<" Rupees"<<endl;
}
};
int main(){
    float y=5000;
    float x;
    Rupee r1(y),r2;
    Dollar d1;
    d1=r1;
    r2=d1;
    x=r1;
    d1.display();
    r1.display();
    r2.display();

    return 0;
}