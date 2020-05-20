#include<bits/stdc++.h>
using namespace std;
class box{
    protected:
        double width;
};
class smallbox:box{ // smallbox is derived from box
    public:
        void setwidth(double wd);
        double getwidth(void);
};
void smallbox::setwidth(double wd){
    width= wd;
}
double smallbox::getwidth(){
    return width;
}
int main(){
    smallbox mysmall;
    mysmall.setwidth(20.0);
    printf("width of small box is %f\n",mysmall.getwidth());
    return 0;
}
