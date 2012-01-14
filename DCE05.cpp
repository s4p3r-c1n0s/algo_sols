#include<stdio.h>
int main()
{
int t,tt;
long long int n,o;
scanf("%d",&tt);
for(t=0;t<tt;t++){
	scanf("%lld",&n);
	for(o=1;n>0;n>>=1,o<<=1);
	printf("%lld\n",o>>1);
}
return 0;
}
