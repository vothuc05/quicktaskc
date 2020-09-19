#include<stdio.h>
#include<math.h>
int main() {
	int a,i,b;
	scanf("%d",&a);
	if(a<2)
	return 0;
	for(i=2;i<=sqrt(a);i++)
	if(a%i==0)
	return 0;
	return 1;
}
