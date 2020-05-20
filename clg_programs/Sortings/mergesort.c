

  1
  2
  3
  4
  5
  6
  7
  8
  9
 10
 11
 12
 13
 14
 15
 16
 17
 18
 19
 20
 21
 22
 23
 24
 25
 26
 27
 28
 29
 30
 31
 32
 33
 34
 35
 36
 37
 38
 39
 40
 41
 42
 43
 44
 45
 46
 47
 48
 49
 50
 51
 52
 53
 54
 55
 56
 57
 58
 59
 60
 61
 62
 63
 64
 65
 66
 67
 68
 69
 70
 71
 72
 73
 74
 75
 76
 77
 78
 79
 80
 81
 82
 83
 84
 85
 86
 87
 88
 89
 90
 91
 92
 93
 94
 95
 96
 97
 98
 99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162

	

/*
This is a general purpose MergeSort algorithm that sorts specified (during compile-time) type of data.

Steps to be followed:
1.insert the pre-processor macro : #define type int/string/char/float/long/double/unsigned_int/unsigned_long
2.if you doesn't include the above macro it will consider as int type.
3.if you use incorrect type as macro .. it will produce an error(compile - time).
4.stdio.h (used by printArray function)will be included if you haven't included that.
5.After including the macro call Merge(nameofarray,startindex,endindex).The specified
  are indexes [0,len-1].
6.The array will be sorted.
7.You can use a utility function to print the sorted array: PrintArray(arr,start,end).
NOTE: You should insert the pre-processor macro before including this file.
*/


/*
Author: saikiran638
Language:C
*/

/*include stdio.h if it is not previously included*/
#ifndef _INC_STDIO
#include<stdio.h>
#endif

#ifndef _INC_STDLIB
#include<stdlib.h>
#endif

#include<assert.h>

/*if the user haven't included the macro 'type' then include it as int*/
#ifndef type
#define type int
#endif

#define string 0
#define char 1
#define int 2
#define long 3
#define float 4
#define double 5
#define unsigned_int 6
#define unsigned_long 7

#if type==string
	#define String
	#define specifier "%s"
#elif type==char
	#define specifier "%c"
#elif type==int
	#define specifier "%d"
#elif type==long
	#define specifier "%ld"
#elif type==float
	#define specifier "%f"
#elif type==unsigned_int
	#define UInt
	#define specifier "%u"
#elif type==unsigned_long
	#define ULong
	#define specifier "%lu"
#else
	#define specifier "%lf" //double
#endif
/*We need to undef all these otherwise every occurrence of int char etc, will be replaced
with numerals as defined above.Then our program will be meaningless*/
#undef string
#undef char
#undef int
#undef float
#undef double
#undef long
#undef unsigned_int
#undef unsigned_long

#ifdef UInt
	#undef type
	#define type unsigned int
	#undef UInt//We will not use this macro further
#endif

#ifdef ULong
	#undef type
	#define type unsigned long
	#undef UInt//We will not use this macro further
#endif


#ifdef String
	#ifndef _INC_STRING
	#include<string.h>
	#endif	
	#define compare(a,b) strcmp(a,b)
	typedef char*string;
	#undef String//We will not use this macro further
#else
	#define compare(a,b) (a>b)?1:(a<b)?-1:0
#endif

/*
This function merges the two sorted halves into one
*/	
void Merge(type *arr,int start,int mid,int end)
	{
	//type L[mid-start+1],R[end-mid];
	/*
	By creating huge memory in stack we may fail. So,we are using dynamic-allocation
	*/
	type* L=(type*)malloc(sizeof(type)*(mid-start+1));
	type* R=(type*)malloc(sizeof(type)*(end-mid));
	if (L==NULL || R==NULL){
		perror("Terminating on account of an error :");
		assert(L!=NULL);
		assert(R!=NULL);
		}
	register int var=start,index,left,right;
	var=index=left=start;
	right=mid+1;
	for (;var<=mid;L[var-start]=arr[var],var++);
	for (var=mid+1;var<=end;R[var-mid-1]=arr[var],var++);
	while (left<=mid && right<=end)
		{
		if ((var=compare(L[left-start],R[right-mid-1]))==-1 || var==0)
			arr[index++]=L[left++ - start];
		else arr[index++]=R[right++ - mid-1];
		}
	while (left<=mid)arr[index++]=L[left++ - start];
	while (right<=end)arr[index++]=R[right++ - mid-1];
	free(L);//Don't forget to de-allocate 
	free(R);//Don't forget to de-allocate
	}

/*
This function recursively divide the array at middle index
*/
void Partition(type *arr,int start,int end)
	{
	if (start<end)
		{
		int mid=start+(end-start)/2;
		Partition(arr,start,mid);
		Partition(arr,mid+1,end);
		Merge(arr,start,mid,end);
		}
	}
void MergeSort(type* arr,int start,int end)
	{
	Partition(arr,start,end);
	}
	
/*A utility function to print the array of specified type*/

void PrintArray(type *arr,int start,int end)
	{
	register int var=start;
	for (;var<=end;printf(specifier"\n",arr[var++]));
	}
#undef type//we will not use this macro further
#undef compare//We will not use this macro further
#undef specifier//We will not use this macro further

