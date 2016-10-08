#include <stdio.h>

int main(){
	int x,y,*p = NULL;
	p = &x;
	scanf("%d", &x);
	scanf("%d",&y);
	*p = x+y;
	printf("%d",x);
	return 0;
}
