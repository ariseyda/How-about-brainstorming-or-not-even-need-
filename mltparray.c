#include<stdio.h>
#include<time.h>

//Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
//For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

int main(){
	
	/*time_t t;*/
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);
	int array[size];
	/*srand((unsigned) time(&t));*/
	int i;
	/*for(i=0;i<size;i++){
		array[i]=(rand() %10);
	}*/
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("\nArray:[");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i<size-1){
			printf(",");
		}
	}
	printf("]\n");
	
	int array1[size];
	int mltp=1;
	int k,l;
	for(k=0;k<size;k++){
		for(l=0;l<size;l++){
			while(l==k){
			  if(l+1<size){
				l++;
			  }
			   else if(l+1>=size){
				break;
			  }
			}
		  	if(l!=k){
		  		mltp*=array[l];
			  }
		}
		array1[k]=mltp;
		
	    mltp=1;
	}
	
	printf("\nMltp array:[");
	int m;
	for(m=0;m<size;m++){
		printf("%d",array1[m]);
		if(m<size-1){
			printf(",");
		}
	}
	printf("]\n");
	
	
	return 0;
}
