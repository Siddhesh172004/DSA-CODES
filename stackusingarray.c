#include<stdio.h>
#include<conio.h>
int stack[5],sizearray,choice,number,i=0;
int top=-1;
void push(void);
void pop(void);
void display(void);
int main()
{
	printf("Siddhesh Jondhale\n");
	printf("Enter size of  matrix ");	
	scanf("%d",&sizearray);
while(choice!=4)
{
	printf("\n---------------------------------------------------------------------");
	printf("\nEnter option \n1. Push \n 2. Pop \n 3. Display \n 4. Exit :- \t");
	scanf("%d", &choice);
		printf("--------------------------------------------------------------------- \n");
	switch(choice){

	case 1: push();
	break;
	case 2: pop();
	break;
	case 3: display();
	break;
	case 4: choice=4;
	break; 	
	default: printf("\n sorry Enter option ");
	}
}
getch();
return 0;
}

void push(){
	if(top>=sizearray-1){
		printf("Stack overflow"); }
	else{
	printf("Enter a value :  ");
	scanf("%d",&number);
	top=top+1;
	stack[top]=number;
	printf(" Number push done");
	}
}

void pop(){
	if(top==-1){
		printf("Stack underflow");}
	else{
	number=stack[top];
	top=top-1;
	printf(" %d is deleted",number);
	}
}

void display(){
		if(top==-1){
		printf("Stack underflow");}
	else{
		int i;
		for(i=top; i>-1;i--){
			printf("\n Stored value in Stack %d ",stack[i]);
		}
	}
}







