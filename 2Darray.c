#include<stdio.h>
#define row 4
#define column 4
int main()
{
	int i,j,sum_r,sum_col,du=0,dd=0;
	int matrix[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16} 
	};
	printf("The matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Sum of all the rows,columns ,upper diagonal and lower diagonal are:\n");  
	for(i=0;i<row;i++)
	{   sum_r = 0; sum_col=0;
		for(j=0;j<column;j++)
	    {
	      sum_r = sum_r + matrix[i][j];
	      sum_col = sum_col + matrix[j][i];
	      if(i==j)
	      {
	      	dd=dd+matrix[i][j];
		  }
		  if((i+j)==3)
		  {
		  	du=du+matrix[i][j];
		  }
		}
		
		printf("Row %d:%3d",(i+1),sum_r);
		printf("\n");
		printf("Column %d:%3d",(i+1),sum_col);
		printf("\n");
    }
     printf("Sum of downwards diagonal is %d \n",dd);
     printf("Sum of upwards diagonal is %d \n",du);
    
//    printf("Sum of all the Columns\n"); // sum of each column
//    for(j=0;j<column;j++)
//    {   sum_col=0;
//    	for(i=0;i<row;i++)
//    	{
//    	   sum_col = sum_col + matrix[i][j];
//		}
//		printf("Column %d:%3d",(j+1),sum_col);
//	    printf("\n");	
//			
//	}
//    printf("Sum of downwards diagonal\n"); // sum of down diagonal
//    dd=0; 
//    for(i=0;i<row;i++)
//    {   
//	    for(j=0;j<=i;j++)
//    	{  if(i==j)
//    	   dd = dd + matrix[i][j];
//		}	
//	}
//	printf("%d\n",dd);
//    printf("Sum of upwards diagonal\n"); // sum of up diagonal
//    du=0; 
//    for(i=0;i<row;i++)
//    {   
//	    for(j=column-1;j>=0;j--)
//    	{  if(j==column-1-i)
//           {du = du + matrix[i][j];
//    	   break;}
//		}	
//	}
//	printf("%d",du);	
return 0;	
}

