#include <stdio.h>

int main(){

    int A[100],i,size;
    printf("Size of an integer datatype : %d",sizeof(int));

    printf("\n Enter array size : ");
    scanf("%d",&size);

    printf("\n Enter arraye elements");
    for(i=0;i<size;i++){
        scanf("%d",&A[i]);
    }

    printf("\nIndex  - Address    -  values");
	for(i=0;i<size;i++){
       printf("\n %d       - %u       -%d",i,&A[i],A[i]);
    }
		

    return 0;
}