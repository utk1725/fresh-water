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
void insertion_sort(vector<int> &ary, int ary_size){
    for(int iter=1; iter<ary_size; iter++){
        int hand = ary[iter];
        int sorted_ind = iter-1;
        while(sorted_ind>=0 && ary[sorted_ind]>hand){
            ary[sorted_ind+1] = ary[sorted_ind];
            sorted_ind--;
        }
        ary[sorted_ind+1] = hand;
    }
}
void conquer_sorted_arrays(vector<int> &ary, int low, int mid, int high){
    vector<int> tmp;
    int fst_ary_ind=low, snd_ary_ind=mid+1;
    while(fst_ary_ind<=mid && snd_ary_ind<=high)
        ary[fst_ary_ind]<ary[snd_ary_ind]?tmp.push_back(ary[fst_ary_ind++]):tmp.push_back(ary[snd_ary_ind++]);
    while(fst_ary_ind<=mid) tmp.push_back(ary[fst_ary_ind++]);
    while(snd_ary_ind<=high) tmp.push_back(ary[snd_ary_ind++]);
    for(int ind=0;ind<tmp.size();ind++) ary[low++]=tmp[ind];
}
void merge_sort(vector<int> &ary, int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(ary, low, mid);
    merge_sort(ary, mid+1, high);
    conquer_sorted_arrays(ary, low, mid, high);
}
int  partition(vector<int> &ary, int start, int end){
    int pivot_element = ary[end];
    int swaped_ind = start-1;
    for(int ind=start; ind<end; ind++){
        if(ary[ind]<=pivot_element){
            swaped_ind++;
            if(swaped_ind != ind) swap(ary[swaped_ind], ary[ind]);
        }
    }
    swaped_ind++;
    swap(ary[swaped_ind], ary[end]);
    return swaped_ind;
}
void quick_sort(vector<int> &ary, int start, int end){
    if(start>=end) return;
    int pivot_ind = partition(ary, start, end);
    quick_sort(ary, start, pivot_ind-1);
    quick_sort(ary, pivot_ind+1, end);
}
int main(){
    int ary_size;
    cin >> ary_size;
    vector<int> ary(ary_size);
    for(int ind=0; ind<ary_size; ind++) cin>>ary[ind];
//    selection_sort(ary, ary_size);
//    bubble_sort(ary, ary_size);
//    insertion_sort(ary, ary_size);
//    merge_sort(ary, 0, ary_size-1);
      quick_sort(ary, 0, ary_size-1);
    for(int ind=0; ind<ary_size; ind++) cout<<ary[ind]<<" ";
    return 0;
}