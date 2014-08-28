#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int Q;
   cin>>Q;
   long long int l,r,L,R,ARR[1000001];
   ARR[0]=0;
   for(int i=1;i<1000001;i++){
      ARR[i]=ARR[i-1]+i;
   }
   for(int iq=0;iq<Q;iq++){
      int pairC=0;
      cin>>L>>R;
      l=L/2;r=R/2;
      long int ls=floor( sqrt(0.25 + 2.0*l) - 0.50 );
      long int rs=floor( sqrt(0.25 + 2.0*r) - 0.50 );
      if(ls==0)ls++;
      if(rs==0)rs++;
      long int Ls=floor( sqrt(0.25 + 2.0*L) - 0.50 );
      long int Rs=floor( sqrt(0.25 + 2.0*R) - 0.50 );
      //cout<<ls<<":"<<ARR[ls]<<" "<<rs<<":"<<ARR[rs]<<endl;
      //cout<<Ls<<":"<<ARR[Ls]<<" "<<Rs<<":"<<ARR[Rs]<<endl;
      for(long int is=Ls;is<=Rs;is++){
         for(long int os=1;os<ls;os++){
            int K=ARR[is]+ARR[os];
            if(K>=L && K<=R){
            pairC++;
            //cout<<"P=";
            }
            //cout<<ARR[is]<<"+"<<ARR[os]<<"="<<K<<endl;
         }
         for(long int os=rs+1;os<Rs;os++){
            int K=ARR[is]+ARR[os];
            if(K>=L && K<=R){
            pairC++;
            //cout<<"P=";
            }
            //cout<<ARR[is]<<"+"<<ARR[os]<<"="<<K<<endl;
         }
      }
      for(long int is=ls;is<=rs;is++){
         int K=ARR[is]*2;
         int k=is;
         while(K<=R){
            if(K>=L){
               pairC++;
               //cout<<"P=";
            }
            //cout<<ARR[is]<<"+"<<ARR[k]<<"="<<K<<endl;
            K+=++k;
         }
      }
      cout<<pairC<<endl;
   }
    return 0;
}
