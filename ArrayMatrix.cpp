#include<stdio.h>

void InputAandB(int Array1[3][3],int Array2[3][3],int Array3[3][3]){
		printf("--------------------- Input Matrix A -----------------------\n");
	        for(int i=0;i<3;i++){
		        for(int j=0;j<3;j++){
			        printf("MatA[%d][%d]: ",i,j);
			        scanf("%d",&Array1[i][j]);
		        }
	        }
	    printf("--------------------- Input Matrix A -----------------------\n");
	        for(int i=0;i<3;i++){
		        for(int j=0;j<3;j++){
			        printf("MatB[%d][%d]: ",i,j);
			        scanf("%d",&Array2[i][j]);
		        }
        	}
}

void PrintAandB(int Array1[3][3],int Array2[3][3],int Array3[3][3]){
	printf("--------------------- Matrix A -----------------------\n");
	        for(int i=0;i<3;i++){
		        for(int j=0;j<3;j++){
		        	printf("%d ",Array1[i][j]);
		        }
		        printf("\n");
	        }
	        printf("--------------------- Matrix B -----------------------\n");
	        for(int i=0;i<3;i++){
		        for(int j=0;j<3;j++){
			    printf("%d ",Array2[i][j]);
		        }
		    printf("\n");
            }
}

void Positive(int Array1[3][3],int Array2[3][3],int Array3[3][3]){
	 for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			Array3[i][j]=Array1[i][j]+Array2[i][j];
		    }       
	 }
}

void Negative(int Array1[3][3],int Array2[3][3],int Array3[3][3]){
	 for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			Array3[i][j]=Array1[i][j]-Array2[i][j];
		    }       
	 }
}

void PrintAns(int Array3[3][3]){
	for(int i=0;i<3;i++){
		        for(int j=0;j<3;j++){
			        printf("%d ",Array3[i][j]);
		            }
		        printf("\n");
	            }
}


int main(){
	
	int Array1[3][3],Array2[3][3],Array3[3][3];
	int Case;
	printf("Case1 PlusMatrix()\n");
	printf("Case2 MinusMatrix()\n");
	printf("Please Enter Case: ");
	scanf("%d",&Case);
		
	switch(Case){
		
	
		case 1 ://-----------------------------------------------------------------------------------------------
		        printf("[You Select Case1 PlusMatrix]\n");
	            InputAandB(Array1,Array2,Array3);
	            PrintAandB(Array1,Array2,Array3);
	            Positive(Array1,Array2,Array3);
	    printf("--------------------- positive Matrix A-B -----------------------\n");
	            PrintAns(Array3);
	        break;
	        
	        
	    case 2 ://-------------------------------------------------------------------------------------------------
	            printf("[You Select Case2 MinusMatrix]\n");
	            InputAandB(Array1,Array2,Array3);
	            PrintAandB(Array1,Array2,Array3);
	             Negative(Array1,Array2,Array3);
	    printf("--------------------- Negative Matrix A-B -----------------------\n");
	            PrintAns(Array3);
	        break;
	    default:
	    	printf("[[ProGrams Error!!!]]\n");
	}

}
