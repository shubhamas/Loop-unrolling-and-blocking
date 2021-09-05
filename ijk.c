#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{ 
	float start_t, end_t, total_t;
    int r = 256, c = 256, i, j,k, count; 
  
    double a[r][r],b[r][c],x[r][c]; 
   /* for (i=0; i<r; i++) 
         a[i] = (double *)malloc(c * sizeof(double));
    for (i=0; i<r; i++) 
		 b[i] = (double *)malloc(c * sizeof(double));*/
   
    count = 0; 
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         a[i][j] = rand();  
  
   /* for (i = 0; i <  r; i++) 
    	{
      		for (j = 0; j < c; j++) 
         		printf("%lf\t", a[i][j]);
    		printf("\n");
   		 }*/
   		 
   	for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         b[i][j] = rand();  
  
   /* for (i = 0; i <  r; i++) 
    	{
      		for (j = 0; j < c; j++) 
         		printf("%lf\t", b[i][j]);
    		printf("\n");
   		 }*/
   	start_t=clock()	;
   	
   	for(i=0;i<r;i++)
   	   
   	    for(j=0;j<c;j++)
   	    {
			x[i][j]=0 ;
   			for(k=0;k<c;k++)
   				x[i][j]+=a[i][k]*b[k][j];
   	    }
   	    
   	end_t=clock();
	
	total_t=(end_t-start_t)/CLOCKS_PER_SEC;
	
	printf("Time taken by program : %lf\n", total_t);
   		
   		
   	/* for (i = 0; i <  r; i++) 
    	{
      		for (j = 0; j < c; j++) 
         		printf("%lf\t", x[i][j]);
    		printf("\n");
    	}*/
   				
   return 0; 
} 
