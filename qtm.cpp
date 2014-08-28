#include <iostream>
using namespace std;

int main()
{
   int T;
   long int a,b,c,d;
   cin>>T;
   for(int it=0;it<T;it++){
      cin>>a>>b>>c>>d;
      if(c==1) {
         cout<<"Divisible\n";
      }
      else {
         long int x = a;
         int tm=0;
         while(x%c==0){
            x=x/c;
            tm++;
         }
         //cout<<tm<<endl;
         int btm = b*tm;
         if(d==0)
            cout<<"Divisible\n";
         else if(tm==1 && b>=d)
            cout<<"Divisible\n";
         else if(tm==0)
            cout<<"Not divisible\n";
         else if(btm>=d)
            cout<<"Divisble\n";
         else 
            cout<<"Not divisible\n";
      }
   }
    return 0;
}

