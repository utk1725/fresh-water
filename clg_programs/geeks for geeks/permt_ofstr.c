#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
	char tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void perm(char *a,int l,int r){
	int i;
	if(l==r) printf("%s\n",a);
	else{
		for(i=l;i<=r;i++){
			swap((a+l),(a+i));
			perm(a,l+1,r);
			swap((a+l),(a+i));
		}
	}
}
int main(){
	char str[50]; 
	fgets(str,50,stdin);
	printf("given string is %s",str);		// a string of len n has n! permutations
	perm(str,0,strlen(str)-1);
	return 0;
}