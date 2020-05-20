#include<bits/stdc++.h>
using namespace std;
class Line {
    private:
        double length;
    public:
        Line(); // This is constructor
        void setLength(double len);
        double getLength(void);
};


Line::Line(void){
    printf("New object created\n");
}
void Line::setLength(double le){
    length= le;
}
double Line::getLength(){
    return length;
}
int main(){
    Line line1;
    line1.setLength(6.0);
    printf("length of line is %f\n",line1.getLength());
    return 0;
}
