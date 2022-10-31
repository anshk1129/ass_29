#include<iostream>
using namespace std;
class Time{
int hour;
int min;
public:
Time(){

}
Time(int x){
    hour=x/3600;
    min=x/60;
}
void display(){
    cout<<"Hour = "<<hour<<" Minutes = "<<min<<endl;
}

};
int main(){
    int x=4000;
  Time r1(x);
  r1.display();
  
    return 0;
}