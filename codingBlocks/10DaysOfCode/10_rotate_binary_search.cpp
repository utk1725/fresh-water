#include<iostream>
#include<vector>
using namespace std;

int rotatedBinarySearch(vector<int> elements, int low, int high, int key){
    while(low <= high){
        int mid = (low+high)/2;
        if(elements[mid] == key) return mid;
        else if(elements[low]<=elements[mid]){
            if(elements[low]<= key and key <= elements[mid]) high=mid-1;
            else low = mid+1;
        }else{
            if(elements[high]>= key and key >= elements[mid]) low=mid+1;
            else high = mid-1;
        }
    }
    return -1;
}
int main(){
    int ary_size;
    cin >> ary_size;
    vector<int> elements(ary_size);
    for(int ind=0; ind<ary_size; ind++)
        cin >> elements[ind];
    int key;
    cin >> key;
    cout << rotatedBinarySearch(elements, 0, ary_size-1, key) << endl;
    return 0;
}
