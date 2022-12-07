// Your First C++ Program


#include <stdio.h>
#include <iostream>
#include<conio.h>


int main() {
 
int i,j,temp;
int a[5]={55,5,44,4,25};
   

for(i=0;i<5;i++){
    for(j=0;j<5-i-1;j++){
    // printf("\n pass %d",i);
    // printf("\n");

    //        printf("%d",a[j]);
    // printf("\n");
    // printf("%d",a[j+1]);
    printf("\n");

           printf("i = %d",i);
    printf("\n");

           printf("j = %d",j);
    printf("\n");

        if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }

        
    }
//     for(i=0;i<5;i++){
//     printf("%d",a[i]);
//     printf("\n");
// }

    printf("\n");
}
for(i=0;i<5;i++){
    printf("%d",a[i]);
    printf("\n");
}




    return 0;
}


