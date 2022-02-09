#include <stdlib.h>
#include <stdio.h>

int main()

{
    
    printf("----------------------------------------------------\n\n");
    int number;
    printf("Enter number of boxes:\n ");
    scanf("%d", &number);
    
    int boxes[number];
    printf("For each box, enter 1 if it has a ball, 0 otherwise:\n");
    
     for(int m=0 ; m<number; m++){    //take each box status from user
        
       printf("Enter 1 or 0 for box %d: ",m+1);
       scanf("%d", &boxes[m]); 
       
         if (boxes[m] != 1 && boxes[m] != 0 )
 	    {			
	  while (boxes[m] != 1 && boxes[m] != 0)     //cheak box status input error
	     {
	      printf ("Wrong input. Please try again.\n");
	      printf("Enter 1 or 0: ");
	      scanf ("%d", &boxes[m]);
	     
	    }
	    
 	  }
	    
    }
    
    int operation[number];
    
    for(int i=0;i<number;i++){       //calculate number of operation
       operation[i]=0;
        for(int j=0;j<number;j++){
            if (i!=j){
                if(boxes[j]!=0){
                   operation[i]=operation[i]+abs(i-j);
                }
            }
        }
	    
	     
	}
	
	for(int k=0;k<number;k++){         //print number of operation for each box
	    
	    printf("Box %d is:%d\n" ,i+1,operation[k]);
	}
	
	printf("----------------------------------------------------");
	

    return 0;
}
