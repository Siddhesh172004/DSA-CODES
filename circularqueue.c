#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1,number;
int queue[100];
int sizeofarray;
void enqueue();
void dequeue();
void display();
int main()
{
int choice;
printf("Enter the size of queue");
scanf("%d",&sizeofarray);

while(choice!=4){
	printf("\nChoose option\n 1. Enqueue \n 2. Dequeue \n3. Display \n 4. Exit :- ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			
			enqueue();
			break;
		case 2:
			dequeue();
			break;	
		case 3:
			display();
			break;	
		case 4:
			NULL;
			break;
		default:
			printf("Invalid Choice");		
	}
}
	getch();
	return 0;	
}


void enqueue(){

	printf("\n Enter value to be inserted : - ");
	scanf("%d",&number);
	if(front==-1 && rear==-1){
		front=0;
		rear=0;
		queue[rear]=number;
	}
	else if((rear+1)%sizeofarray==front)
	{
		printf("Overflow");
	}
	else{
		rear=rear+1;
		queue[rear]=number;
		
	}
}


void dequeue(){
	int currentnum;
	if(front==-1 && rear==-1){
		printf("underflow");
	}
	else if(front==rear){
		front=-1;
		rear=-1;
		
	}
	else{
		currentnum=queue[front];
		front=front+1;
		
	}
}


void display(){
	int i;
	
	for(i=front;i<=rear;i++){
		printf("\n values are : %d",queue[i]);
	}
}
