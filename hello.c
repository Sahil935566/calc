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
<<<<<<< HEAD
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
		printif("erroR");
		break;

=======
switch (ch){
	case '+':
		printf("the add of a and b %d",a+b);
		break;
	case '-':
		printf("the sub of a and b %d",a-b);
                break;
	//`case '*':
		printf("the multiply of a and b %d",a*b);
	//	break;
	//case '/':
		//printf("the divison of a and b %d", a/b);
                //break;
	//default :
		//printf("error!");
>>>>>>> addsub
}
return 0;
}
