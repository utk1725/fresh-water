#include<bits/stdc++.h>
using namespace std;
class box{
    int private_var;
  public:
      double length;
      double breadth;
      double height;
      double getvolume(void);
      void setlength(double len);
      void setbreadth(double bre);
      void setheight(double hei);
};
double box::getvolume(void){
    return length*height*breadth;
}
void box::setlength(double len){
    length= len;
}
void box::setbreadth(double bre){
    breadth= bre;
}
void box::setheight(double hei){
    height=hei;
}
int main(){
    box box1;
    box box2;
   // box1.private_var=9;
    box1.length= 5.0; box1.breadth=6.0; box1.height=7.0;
    printf("Box1 volume is %f\n", box1.length*box1.height*box1.height);

    box1.setbreadth(13.0); box1.setlength(12.0);box1.setheight(14.0);
    printf("box1 volume is %f\n",box1.getvolume());
    return 0;
}
