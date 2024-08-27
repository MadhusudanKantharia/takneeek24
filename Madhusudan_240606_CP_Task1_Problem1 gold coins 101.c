#include <stdio.h>

int main(void) {
	// your code goes here
	int A,B,X,Y,chef;
	scanf("%d%d%d%d",&A,&B,&X,&Y);
	if(X>Y){
	    chef=A;
	}
	else{
	    chef=B;
	}
	printf("%d",chef);
}


