#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std ;

void **mul(int **matrix1,int**matrix2,int**c,int row1,int col2,int col1)
{
for(int i=0;i<row1;i++)
{for(int j=0;j<col2;j++)
{c[i][j]=0;
for(int p=0;p<col1;p++)
{
c[i][j]+=matrix1[i][p]*matrix2[p][j];
}}}
for(int i=0;i<row1;i++)
{
for(int j=0;j<col2;j++)
cout<<setw(4)<<c[i][j]<<"    ";
cout<<endl;}}

/*
for ( int i=0 ;i<row1 ; ++i)
		   		for (int j=0; j<row2 ; ++j )
		   		{
		   				c[i][j]=0 ;
		   			for (int k=0 ; k<col1 ; ++k )
		   				{
		   				c[i][j]=c[i][j]+ (matrix1[i][k]*matrix2[k][j]);
		    			}

				}
				  cout << "New matrix  :"<< endl  ;
			 for ( int i=0 ;i<row1 ; i++)
		   	{
		   		for (int j=0; j<row2 ; j++ )
		   		{
		   				cout <<c[i][j] << "       " ;
				}
					 				cout << endl ;
			}


*/


int main ()
{
int col1 , row1,col2,row2;
int **matrix1 ;
int **matrix2 ;
int **c ;

tryagain:
cout << "Enter number of rows and colums first matrix :"<<endl ;
cin >> row1 >> col1 ;
cout << "Enter number of  rows and colums second matrix :"<<endl ;
cin >> row2 >> col2 ;
				if ( col1 == row2){

matrix1= new int *[row1] ;
 	for (int i =0 ; i < row1 ; ++i)
  		  matrix1[i]= new int [col1] ;

cout << "enter elements of first matrix :" << endl ;
   		 for (int i =0 ; i<row1 ; ++i  )
       	    {
    		for(int j=0; j<col1 ; ++j)
		   	  {
    		     cin >> matrix1[i][j];
    		  }
		    }
matrix2= new int *[row2] ;
	for ( int i=0; i < row2 ; ++i)
   			matrix2[i]=new int [col2] 	;
cout << "enter  elements of second matrix :" << endl ;
   		for (int i=0 ; i <row2 ; ++i)
		   {
		   	 for (int j =0 ; j < col2 ; ++j)
		   	 {
		   	   cin >> matrix2[i][j];
		   	 }

		   }


c=new int *[row1];
		for ( int i = 0 ; i < row1 ; ++i)
		    c[i]= new int [col2] ;
		    	cout << endl << endl ;
		  cout<<"the result of the matrix is"<<endl;
		  mul(matrix1,matrix2,c,row1,row2,col1);
		  matrix1=0;
		  matrix2=0;
		  c=0;






														}
 else{
    system ("cls");
	cout << "we cannot multiply  first matrix by second matrix"<<endl ;
    goto tryagain;
}
    
return 0 ;
}
