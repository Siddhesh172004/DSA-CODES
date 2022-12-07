// Your First C++ Program


#include <stdio.h>
int main() {
 
int i,j,temp;
int a[]={55,5,44,4,25};

int item=69;
int post=1;

for(i=4;i<=post;i--){
a[i+1]=a[i];
}


for(i=0;i<5;i++){
    printf("%d",a[i]);
    printf("\n");
}
printf("after doing this ");
a[post]=item;
    printf("\n");

for(i=0;i<=5;i++){
    printf("%d",a[i]);
    printf("\n");
}
    return 0;
}


