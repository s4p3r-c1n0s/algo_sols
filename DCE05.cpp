#include<stdio.h>
int main()
{
int t,tt,n,o;
scanf("%d",&tt);
for(t=0;t<tt;t++){
	scanf("%d",&n);
	for(o=1;n>=o;,o<<=1);
	printf("%d\n",o>>1);
}
return 0;
}
