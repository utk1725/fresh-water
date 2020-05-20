/*pi*/
#include<stdio.h>
void swap(int *i,int *j){
	int tmp=*i;
	*i=*j;
	*j=tmp;
}
int part(int *ar,int p,int r){
	int i,j,x;
	x=ar[r];
	i=p-1;
	for(j=p;j<r;j++){
		if(ar[j]<=x){
			i++;
			if(i!=j) swap(&ar[i],&ar[j]);
		}
	}
	i++;
	swap(&ar[i],&ar[r]);
	return i;
}
void quick(int *ar,int low,int high){
	if(low<high){
		int a;
		int q = part(ar,low,high);
		printf("\n%d\n",q);
		printf("\n");for(a=low;a<high;a++) printf("%d ",ar[a]);printf("\n");
		quick(ar,low,q-1);
		//printf("\n");for(a=low;a<high;a++) printf("%d ",ar[a]);printf("\n");
		//quick(ar,q+1,high);
		//printf("\n");for(a=low;a<high;a++) printf("%d ",ar[a]);printf("\n");
	}
}
int main(){
	int n,I;
	//scanf("%d",&n);
	int ar[10]={9,9,1,2,1,3,1,9,3,5};
	//for(I=0;I<n;I++) scanf("%d",&ar[I]);
	quick(ar,0,9);
	//for(I=0;I<n;I++) printf("%d ",ar[I]);
	return 0;
}
/*
// quick sort in java frist element as pivot
class QuickSort
{
    /* This function takes last element as pivot,
       places the pivot element at its correct
       position in sorted array, and places all
       smaller (smaller than pivot) to left of
       pivot and all greater elements to right
       of pivot */
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high]; 
        int i = (low-1); // index of smaller element
        for (int j=low; j<high; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (arr[j] <= pivot)
            {
                i++;

                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // swap arr[i+1] and arr[high] (or pivot)
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i+1;
    }


    /* The main function that implements QuickSort()
      arr[] --> Array to be sorted,
      low  --> Starting index,
      high  --> Ending index */
    void sort(int arr[], int low, int high)
    {
        if (low < high)
        {
            /* pi is partitioning index, arr[pi] is 
              now at right place */
            int pi = partition(arr, low, high);

            // Recursively sort elements before
            // partition and after partition
            sort(arr, low, pi-1);
            sort(arr, pi+1, high);
        }
    }

    /* A utility function to print array of size n */
    static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }

    // Driver program
    public static void main(String args[])
    {
        int arr[] = {10, 7, 8, 9, 1, 5};
        int n = arr.length;

        QuickSort ob = new QuickSort();
        ob.sort(arr, 0, n-1);

        System.out.println("sorted array");
        printArray(arr);
    }
}
*/