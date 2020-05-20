#include<stdio.h>
int main(){
	int n,c=0,i=0,j=0,cell,cc,g=1;
	scanf("%d",&n);
	int ar[n][n];
	cell=n;
	while(c<n*n){
		cc=0;
		for(;cc<cell;cc++,j=j+g) scanf("%d",&ar[i][j]);
		j=j-g; //because went outside inside loop before breaking
		i=i+g;
		c=c+cc;
		cc=0;
		cell--;
		if(c>=n*n) break;
		for(;cc<cell;cc++,i=i+g) scanf("%d",&ar[i][j]);
		i=i-g;
		j=j-g;
		c+=cc;
		g*=-1;
	}
	for(c=0;c<n;c++){
		for(cc=0;cc<n;cc++) printf("%d ",ar[c][cc]); printf("\n");
	}return 0;
}
/*
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> ans;
    int n=A.size(), m=A[0].size();
    int c=0,i=0,j=0,cc,g=1;
    int cell1=n, cell2=m;
    while(c<n*m){
        cc=0;
        for(;cc<cell2;cc++,j+=g) ans.push_back(A[i][j]);
        j-=g;
        i+=g;
        c+=cc;
        cc=0;
        cell1--;
        if(c>=n*m) break;
        for(;cc<cell1;cc++,i+=g) ans.push_back(A[i][j]);
        i-=g;
        j-=g;
        c+=cc;
        g*=-1;
        cell2--;
    }
    return ans;
}

*/
/*
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> result;
	// DO STUFF HERE AND POPULATE result
	int rows = A.size();
	int cols = A[0].size();
	int top = 0;
	int bottom = rows-1;
	int left = 0;
	int right = cols-1;
	int dir = 0; // 0 for L->R, 1 for T->B, 2 for R->L, 3 for B->T
	
	LOOP:while(top <= bottom && left <= right){
	    if(dir == 0){
	        //L->R
	        for(int j = left; j <= right; j++){
	            result.push_back(A[top][j]);
	        }
	        dir = 1;
	        top++;
	        goto LOOP;
	    }
	    else if(dir == 1){
	        for(int i = top; i <= bottom; i++){
	            result.push_back(A[i][right]);
	        }
	        right--;
	        dir = 2;
	        goto LOOP;
	    }
	    else if(dir == 2){
	        for(int j = right; j >= left; j--){
	            result.push_back(A[bottom][j]);
	        }
	        bottom--;
	        dir = 3;
	        goto LOOP;
	    }
	    else if(dir == 3){
	        for(int i = bottom; i >= top; i--){
	            result.push_back(A[i][left]);
	        }
	        left++;
	        dir = 0;
	        goto LOOP;
	    }
	}
	
	return result;

}

*/