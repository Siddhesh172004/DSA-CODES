// Your First C++ Program


#include <stdio.h>
int main() {
 
int i,j,ni;
printf("enter rows ");
scanf("%d",&ni);

//rows and columns should be same
for(i=1;i<=ni;i++){
    for(j=1;j<=ni;j++){
        if(j<=(ni-i)){
            printf(" ");

        }
        else{
            printf("*");
        }
    }
    printf("\n");
    

}

    return 0;
}




