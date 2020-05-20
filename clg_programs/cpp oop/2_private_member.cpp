#include<bits/stdc++.h>
using namespace std;
class box{
    private:
        double width;
    public:
        double length;
        void setwidth(double wd);
        double getwidth(void);
};
double box::getwidth(){
    return width;
}
void box::setwidth(double pk){
    width= pk;
}
int main(){
    box mybox;
    mybox.length=5.0; //since it is public, no
    //member function required.
    mybox.setwidth(6.0);
    printf("width of the box is %f\n",mybox.getwidth());
    return 0;
}
