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
switch(ch){
	case '+':
		printf("%d",a+b); 
		break;
	case '-':
		printf("%d",a-b);
		break;
	case '*':
		printf("%d",a*b);
		break;
	case '/':
		printf("%d",a/b);
		break;
	default :
		printf("erroR");
		break;

}
return 0;
}
