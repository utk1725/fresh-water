#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int fina_ind=1;
        for(int i=1;i<nums.size();i++){
            if(nums[fina_ind-1]!=nums[i]) swap(nums[i],nums[fina_ind++]);
        }
        return fina_ind;
    }
};
int main(){
	int n;scanf("%d",&n);
	vector<int> ar(n);
	for(int i=0;i<n;i++) scanf("%d",&ar[i]);
	int fd=removeDup(ar);
	for(int i=0;i<fd;i++) printf("%d ",ar[i]);
	return 0;
}