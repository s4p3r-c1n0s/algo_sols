#include<iostream>
#include<stdio.h>
using namespace std;
const int X=30,Y=20;
//#define FREAD
// SIMPLER SOLUTION FOR UNDERSTANDING THE LOGIC
char o=1;
char B[X][Y];
unsigned long A[X][Y];
unsigned long deform(int m, int n){
     //cout<<"<"<<m<<">"<<"<"<<n<<">"<<endl;  
        if(A[m][n]>=12){          
           if (B[m][n]!=o){        
              A[m][n] = deform(m+1,n)+deform(m,n+1)+deform(m+2,n);
              B[m][n]=o;
           }
           return A[m][n];
        }
        else 
        return A[m][n];
}

void form()
{
     unsigned long u=A[0][0],n=u;
     for (int j=0;n>=12;j++){
         if(j!=0)    
         {A[0][j]=u=(n/=3);/*if(u<12)A[0][j]=u;*/}
         for (int i=1;u>=6;i++)
             {A[i][j]=u>>=1;/*if(u<12)A[i][j]=u;*/}
     }
}
        
int main(void)
{
#ifdef FREAD
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
while ((cin>>A[0][0])>0 && o<=10)
{  
   form();
/* for(int i=0;i<X;i++){
           for(int j=0;j<Y;j++)
                   cout<<A[i][j]<<"\t";
           cout<<"\n";
   }*/
   cout<<deform(0,0)<<"\n";
/* for(int i=0;i<X;i++){
           for(int j=0;j<Y;j++)
                   cout<<A[i][j]<<"\t";
           cout<<"\n";
   }*/
   o++;
}
#ifdef FREAD
fclose(stdin);
fclose(stdout); 
#endif
return 0;
}

