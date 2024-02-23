#include<stdio.h>
int main(){
int a,b;
char ch;
printf("enter the first no. ");
scanf("%d",&a);
printf("enter the second no. ");
scanf("%d",&b);
printf("enter the operater ");
scanf("%c", &ch);
switch (ch){
	case '+':
		printf("the add of a and b %d",a+b);
		break;
	case '-':
		printf("the sub of a and b %d",a-b);
                break; 
}
return 0;
}
