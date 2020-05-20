// Rotate image anit-clockwise : first reverse the rows and do transpose
// If asked for clock-wise, first transpose the matrix and do reverse of each row
#include <iostream>
#include <algorithm>
using namespace std;

void rotate_anti_clockwise(int matrix[][1000], int order){
    for(int row=0;row<order;row++)
        reverse(matrix[row], matrix[row]+order);
    for(int row=0;row<order;row++)
        for(int col=row+1;col<order;col++)
            swap(matrix[row][col], matrix[col][row]);
}

void rotate_clock_wise(int matrix[][1000], int order){
    for(int row=0;row<order;row++)
        for(int col=row+1;col<order;col++)
            swap(matrix[row][col], matrix[col][row]);
    for(int row=0;row<order;row++)
        reverse(matrix[row], matrix[row]+order);
}
int main(){
    int order;
    scanf("%d",&order);
    int matrix[1000][1000];
    for(int row=0;row<order; row++)
        for(int col=0; col<order; col++)
            scanf("%d", &matrix[row][col]);
    rotate_anti_clockwise(matrix, order);
    for(int row=0;row<order; row++){
        for(int col=0; col<order; col++)
            printf("%d ", matrix[row][col]);
        printf("\n");
    }
    return 0;
}