#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int min(int num1, int num2) 	
	{
    	return (num1 > num2 ) ? num2 : num1;
    }
int main() 
{ 
	float start_t, end_t, total_t;
    int r = 256, c = 256, i, j,k,B=25, count,jj,kk,temp; 
  
    double a[r][r],b[r][r],x[r][c]; 
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
   	start_t=clock();
	   	 
   	for(jj=0;jj<r;jj+=B)
   		for(kk=0;kk<r;kk+=B)
   			for(i=0;i<r;i++)
   			{
   				for(j=jj;j<min(jj+B,r);j++)
				   {
   					x[i][j]=0;
   					for(k=kk;k<min(kk+B,r);k++)
					   {
   							x[i][j]+=a[i][k]*b[k][j];	
							  				
						}
					
					}
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
