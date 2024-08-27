#include <stdio.h>
int main(void) {
	int n,a,b,c;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
	    scanf("%d %d %d\n",&a,&b,&c);
	    if(a>b+c+1){
	        printf("NO\n");
	    }
	    else if(b>a+c+1){
	        printf("NO\n");
	    }
	    else if(c>b+a+1){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
}
