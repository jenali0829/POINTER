#include<stdio.h>

main(){
	int j;
	int s;
	int *v;
	int *k;
	
	printf("Ente value j:");
	scanf("%d",&j);
	
	printf("Enter value s:");
	scanf("%d",&s);
	
	v=&s;
	k=&j;
	
	
	printf("%u%d\n",v,*v);
	printf("%u%d\n",k,*k);
	
}
