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
operator int(){
return (r+i);  
}
};
int main(){
    int x;
    Complex  c1(4,5);
    c1.display();
    x=c1;
    // cout<<c1; yaha bhi 9 hi print hoga because cout phle complex ko print krne k kosish krega
                //  lekin ussko complex to print krna aata nhi h isliye vo operator (int) k pass jaega
                // isliye waha se print ho jaegi value 9 
     cout<<" x= "<<x;
    return 0;

}