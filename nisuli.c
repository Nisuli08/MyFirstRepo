#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int x=1,c=0;
	if(num>0){
		while(x<=num){
		if(num%x==0){
			printf("%d ",x);
			c++;
			
		}
		x++;
	}
	printf("\nFactor Count %d: ",c);
	if(c<=2){
		printf("\n\nType:prime number");
	}
	else{
		printf("\n\nType:Composite number");
		printf("Please enter a positive number");
	}
}else{
	printf("Please enter a positive number");
}
getch();
	}
	
