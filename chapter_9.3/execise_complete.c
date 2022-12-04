#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	
	double x;
	int n;
	double r;
	
	printf("please enter x:");
	scanf("%lf",&x);
	printf("please enter n:");
	scanf("%d",&n);
	
	r=pow(x,n);
	
	printf("result:%lf\n",r);
	
	return 0;		
	
}

//     your code here
