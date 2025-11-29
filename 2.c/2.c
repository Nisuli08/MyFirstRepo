#include<stdio.h>
void main()
{
	int x=1,t=0,m;
	while(x<=5){
		printf("%d.Enter the marks: ",x);
		scanf("%d",&m);
		if(m<0){
			continue;
		}
		x++;
		t=t+m;
	}
	printf("Total is: %d",t);
	getch();
}