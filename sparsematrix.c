
#include <stdio.h>
void main(){
	int a[100][100], b[100][3],c[100][3], i,j,k=1,m,n;
	printf("Enter no of rows and columns");
	
	scanf("%d %d", &m, &n);
	printf("Enter the element: ");
	
	for(int i=0;i<m;i++){
		for(int j=0;  j<n; j++){
			scanf("%d" , &a[i][j]);
		}	
	}
	
	b[0][0] = m ;
	b[0][1] =n;
	
	for(int i=0;i<m;i++){
		for(int j=0;  j<n; j++){
			if(a[i][j] != 0){
				b[k][0] =i;
				b[k][1] =j;
				b[k][2] = a[i][j];
				k = k+1;
			}
		}	
	}
	
	b[0][2] = k - 1;
	printf("\n");	
	printf("Triplet form");
	printf("\n");	
	for(int i=0;i<k;i++){
	  printf("\n");	
		for(int j=0;  j<3; j++){
			printf("\t%d" , b[i][j]);
		}
		printf("\n");	
	}
	printf("\n");		
	c[0][0] = b[0][1];
	c[0][1] = b[0][0];
	c[0][2] = b[0][2];	
	
	 k = 1;

	 
	 for(int i=1; i<=b[0][2]; i++){
	 	c[i][0] = b[i][1];
	  	c[i][1] = b[i][0];
	  	c[i][2] = b[i][2];
	 }
	 
	 for(int i=1; i<=b[0][2]; i++){
	 	for(int j=i+1; j<=b[0][2]; j++){
	 		if(c[i][0] > c[j][0]){
	 			int temp1 = c[i][0];
	 			int temp2 = c[i][1]; 				 	
	 			int temp3 = c[i][2];
	 			
	 			c[i][0] = c[j][0];
	 			c[i][1] = c[j][1];
	 			c[i][2] = c[j][2]; 
	 			
	 			c[j][0] = temp1;
	 			c[j][1] = temp2;
	 			c[j][2] = temp3;
	 		}
	 	}
	 }
	 
	printf("\n");
	printf("Transpose ");	
	
	for(int i=0;i<=b[0][2];i++){
	     printf("\n");	
		for(int j=0;  j<3; j++){
			printf("\t%d" , c[i][j]);
		}
		printf("\n");	
	}
	printf("\n");	 
}
