#include <iostream>
#include <conio.h>
using namespace std;   
int main(void) {  

cout<<"\tNama :haidir"<<endl;
cout<<"\tkelompok : 12 "<<endl;
	  
double a[5][9],b[3][3],c[6][9];      
int i,j;      
cout<<endl<<"  Elemen matriks A : "<<endl;     
for (i=0;i<2;i++){         
for (j=0;j<2;j++){           
cout<<"  Elemen matrik A baris ke-" <<i<<" kolom ke "<<j<<": ";             
cin>>a[i][j];         
}     
}		
cout<<endl<<"  Elemen matriks B : "<<endl;     
for (i=0;i<2;i++){         
for (j=0;j<2;j++)
{             
cout<<"Elemen matrik B baris ke- "<<i<<" kolom ke "<<j<<": ";             
cin>>b[i][j];         
}     
}     
cout<<endl;  		
for (i=0;i<2;i++){         
for (j=0;j<2;j++){             c[i][j]=a[i][j]-b[i][j];                
}     
}  
cout<<"  Element matriks C [hasil] : "<<endl;     
 for (i=0;i<2;i++){         
		 for (j=0;j<2;j++){             	
cout<<"    "<<c[i][j];         
}  
cout<<endl;     
}    
getch();     
}

