#include<iostream>
#include<stdio.h>
using namespace std;
char a[50][50];
#define FREAD

void print(int r, int c){
	int i,j;
	a[r-1][c-1]='c';
	for(i=0;i<r;i++,cout<<endl)
	for(j=0;j<c;j++)
	cout<<a[i][j];
}
void simple(int r, int c, int m){
	int i,j;
   if(r>c){
      for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         if(m>0) {a[i][j]='*';m--;}
         else a[i][j]='.';
   } else {
      for(j=0;j<c;j++)
      for(i=0;i<r;i++)
         if(m>0) {a[i][j]='*';m--;}
         else a[i][j]='.';
   }
	print(r,c);
}
void solution(int r, int c, int m){
	int i,j,sub = m - ((r-2)*(c-2));
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
      if(i<(r-2) && j<(c-2) && (m>0)){a[i][j]='*';m--;}
      else a[i][j]='.';

	if(sub>0 && sub%2!=0) {a[r-3][c-3]='.'; sub++;}

	i=0;j=c-2;
	while(sub>0 && i<(r-3)){
		a[i][j]=a[i][j+1]='*';
		sub-=2;i++;
	}

	j=0;i=r-2;
	while(sub>0 && j<(c-3)){
		a[i][j]=a[i+1][j]='*';
		sub-=2;j++;
	}

	if(sub>0){a[r-2][c-3]=a[r-1][c-3]='*';sub-=2;}

	if(sub>0){a[r-3][c-2]=a[r-3][c-1]='*';sub-=2;}
		
	print(r,c);
}
int main(void)
{
#ifdef FREAD
freopen("C-large-practice.in","r",stdin);
freopen("C-large-practice.out","w",stdout);
#endif
int t, r, c, m, rem;
cin>>t;
for(int it=1; it <= t; it++){
	cin>>r>>c>>m;
	cout<<"Case #"<<it<<":"<<endl;
   rem = (r*c) - m;
   if(r>2 && c>2){
      switch(rem){
      case 1: simple(r,c,m); break;
      case 2:
      case 3:
      case 5:
      case 7: cout<<"Impossible\n"; break;
      default: solution(r,c,m);
      }
   }
   else if (r>1 && c>1){
      if( (rem>3 && m%2==0) || (rem==1)) simple(r,c,m);
      else cout<<"Impossible\n";
   }
   else{
      if( rem>0 ) simple(r,c,m);
      else cout<<"Impossible\n";
   }
}
#ifdef FREAD
fclose(stdin);
fclose(stdout); 
#endif
return 0;
}

/*
** Local Variables:
**   c-basic-offset: 3
**   tab-width: 3
**   indent-tabs-mode: nil
** End:
**
** vim: softtabstop=3 tabstop=3 expandtab cindent shiftwidth=3
**
*/
