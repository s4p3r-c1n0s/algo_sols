#include<stdio.h>
int main()
{
int n,o,t,tt;
scanf("%d",&tt);
for(t=0;t<tt;t++){
	scanf("%d",&n);
	for (o=0;n>0;n/=5,o+=n);
	printf("%d\n",o);
}
return 0;
}
