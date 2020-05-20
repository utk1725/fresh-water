#include<stdio.h>
int main(){
	char time[10];
	gets(time);
	int i;
	if(time[8]=='P' && !(time[0]==49 && time[1]==50)){
		if(time[1]<=55 && time[0]==48){
			printf("1");printf("%c",time[1]+2);
		}else{
			printf("2");printf("%c",time[1]+2);
		}for(i=2;i<8;i++) printf("%c",time[i]);
	}else{
		if((time[0]==49 && time[1]==50)&&time[8]!='P'){
			printf("00:");
			for(i=3;i<8;i++) printf("%c",time[i]);
		}
		else{
			for(i=0;i<8;i++) printf("%c",time[i]);
		}
	}
	return 0;
}
/*
int main() {
    int hh, mm, ss ;
    char t12[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;

    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}


try adding 0 before %2d , that is , do %0d in your printf statement.
*/
