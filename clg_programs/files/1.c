#include<stdio.h>
int main(){
	 // fopen("file_name","mode");
	 // mode 		present 								not present
	 // "r"			opened									null
	 // "w"			deleted and recreated with nothing		creates file
	 // "a"			opened		can and edit				creates file
	 // "r+"		open read and write						null
	 // "w+"		deleted and recreated with nothing		creates
	 // "a+"		opend edit read write
	 //if we are dealing with binary file then [put suffix as b
	//like "rb"  "wb" "ab" "r+b"  "w+b" "a+b"
	//we have to remember last name or last bite or the file. for this purpose
	//stdio.h provides a structure called FILE 
	//if file is there this fopen return address to the structure FILE. so this structure contains all the finformation about that file
	//fopen return address of the structure of type file. so we need a ointer of type FILE .. so FILE *Fpointer;
	
	FILE *Fpointer;
	Fpointer = fopen("2.c","a");
	if(Fpointer == NULL) printf("Unable to create the file\n");
	else {
		printf("file opened successfully\n");
		fclose(Fpointer); // to close file	
	}
	
	return 0;
}
