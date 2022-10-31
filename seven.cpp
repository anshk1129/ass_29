#include<iostream>
using namespace std;
class Minute{
 int mi;
 public:
 Minute(){

 }

Minute(int m){
mi=m;
} 
void display(){
    cout<<"Minute = "<<mi<<endl;
}
 
};

class Time{
int hour;
int min;
public:
Time(){

}
Time(int x,int y){
    hour=x;
    min=y;
}
int getmin(){
    return min;
}
void display(){
    cout<<"Hour = "<<hour<<" Minutes = "<<min<<endl;
}
operator Minute(){
    Minute t1(min);
    return t1;
}

};


int main(){
  Time t1(2,10);
  cout<<"Time class time is "<<endl;
  t1.display();
  Minute m1;
  m1=t1;
  cout<<"Displaying the minute fetch from time class"<<endl;
  m1.display();
    return 0;
}