#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; scanf("%d",&n);
	int ar[n][n];
	int num=0,count=0;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) ar[i][j]=++num;
	int i=0, j=0, down_way=1;
	cout << ar[i][j] << " "; count++;
	while(count<num){
		
		if(down_way){
			
			(j+1)<n ? j++ : i++; //is ar[i][j+1] valid move or not, ifnot goto ar[i+1][j];
			cout << ar[i][j] << " "; count++;							//these 3 lines for jumping into other cell
			if(count>=num) break;
			
			while((i+1) < n and ((j-1)>=0)){ // going down_way upto index not overflow
				i++; j--; cout << ar[i][j]<<" ";  						//keep going diagonal
				count++;
			}
			if(count>=num) break;
			down_way=1-down_way;
		}
		
		if(!down_way){
			
			(i+1)<n ? i++: j++;
			cout << ar[i][j] << " "; count++; 		//these 3 lines for jumping into other cell
			if(count>=num) break;
			
			while((i-1)>=0 and (j+1)<n){
				i--; j++; cout << ar[i][j] << " "; //keep going diagonal
				count++;
			}
			if(count>=num) break;
			down_way=1-down_way;
		}
	}
	return 0;
}