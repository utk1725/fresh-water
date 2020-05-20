#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void swap(int &num1, int &num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}
void selection_sort(vector<int> &ary, int ary_size){
    for(int ind=0; ind<ary_size-1; ind++){
        int smallest_ind = ind;
        for(int next_ind= ind+1; next_ind<ary_size; next_ind++){
            if(ary[smallest_ind] > ary[next_ind])
                smallest_ind = next_ind;
        }
        swap(ary[smallest_ind], ary[ind]);
    }
}
void bubble_sort(vector<int> &ary, int ary_size){
    for(int iter=0; iter<ary_size; iter++){
        for(int ind=0; ind<ary_size-iter-1;ind++){
            if(ary[ind] > ary[ind+1]) swap(ary[ind], ary[ind+1]);
        }
    }
}
int main(){
    int ary_size;
    cin >> ary_size;
    vector<int> ary(ary_size);
    for(int ind=0; ind<ary_size; ind++) cin>>ary[ind];
//    selection_sort(ary, ary_size);
    bubble_sort(ary, ary_size);
    for(int ind=0; ind<ary_size; ind++) cout<<ary[ind]<<" ";
    return 0;
}