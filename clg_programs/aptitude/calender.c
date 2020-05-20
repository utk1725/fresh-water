//include<pi.h>
#include<stdio.h>
void print_day(int d){
	char day[7][10]={"Sun","Mon","Tues","Wednes","Thurs","Fri","Satur"};
	printf("Hey it's ");printf("%s",day[d]);printf("day\n");
}
int no_of_days(int d,int m,int y){
	int i,ans=0;
	for(i=1;i<=m;i++){
		if(i==2) continue;
		else if(i<=7){
			if(i%2==0) ans+=30;
			else ans+=31;
		}
		else{
			if(i%2==0) ans+=31;
			else ans+=30;
		}
	}
	if(m>2){
		if(y%400==0 || (y%4==0 && y%100!=0)) ans+=29;
		else ans+=28;
	}
	return ans+d;
}
int hndrds(int x){
	if(x==0) return 0;
	else if(x==1) return 5;
	else if(x==2) return 3;
	else if(x==3) return 1;
}
int remain(int y){
	int lp=0,odd=0;
	if(y%100==0) lp=y/4-1;
	else lp=y/4;
	odd=(lp*2)+(y-lp);
	return odd%7;
}
int year_ood(int y){
	int odd=0;
	y%=400;
	int hndrd=y/100;
	odd=hndrds(hndrd);
	printf("%d for 300 may be\n",odd);
	y=y-(100*hndrd);
	odd+=remain(y);
	return odd;
}
int main(){
	int d,m,y,odd=0;
	printf("Enter date, month and year one by one.....\n");
	scanf("%d %d %d",&d,&m,&y);
	int p_odd= no_of_days(d,m-1,y);
	odd=p_odd%7;
	printf("months ki    %d\n",odd);
	int y_odd= year_ood(y-1);
	printf("years ki %d\n",y_odd);
	int ans=(odd+y_odd)%7;
	print_day(ans);
	return 0;
}
//http://www.computernetworkingnotes.com/ccna-study-guide/vlan-configuration-commands-step-by-step-explained.html