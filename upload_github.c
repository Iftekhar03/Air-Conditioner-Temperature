#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d %d %d",&a,&b,&c);
	  if(b>=a && b>=c)
      printf("Yes\n");
    else
      printf("No\n");
	}
	return 0;
}
