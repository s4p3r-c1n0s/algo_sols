#include <iostream>
using namespace std;

int main()
{
   int T;
   long int N,X[100000],rem;
   long long int M;
   cin>>T;
   for(int it=0;it<T;it++) {
      cin>>N;
      cin>>X[0];
      for(long int i=1;i<N;cin>>X[i],X[i]+=X[i-1],i++);
      cin>>M;
      rem = M % X[N-1];
      if(M == 0) {
         cout<<1<<endl;
      } else if(rem == 0) {
         for(long int i=N-1;i>=0;i--) if(X[i]!=X[i-1]) {
            cout<<(i+1)<<endl;
            break;
         }
      } else { 
         for(long int i=0;i<N;i++) if(rem<=X[i]) {
            cout<<(i+1)<<endl;
            break;
         }
      }
   }


   return 0;
}
