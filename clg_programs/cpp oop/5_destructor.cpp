#include<bits/stdc++.h>
using namespace std;
class car{
    public:
        car(); // this is constructor
        ~car(); // this is destructor
        void setrate(double pr);
        double getprice(void);
    private:
        double price;
};
car::car(){
    printf("car object is created\n");
}
car::~car(){
    printf("car object has been deleted\n");
}
void car::setrate(double pr){
    price= pr;
}
double car::getprice(){
    return price;
}
int main(){
    car mycar;
    mycar.setrate(2000.0);
    printf("Price of the car is %f\n",mycar.getprice());
    return 0;
}
