#include <stdio.h>

int main(){

    int id;
    int marks;

    do{
        printf("Enter Student ID: \n");
        scanf("%d", &id);

        if(id == -1){
            break;
        }

        printf("Enter Mark: \n");
        scanf("%d", &marks);

        if(0 <= marks && marks <= 44){
            printf("Grade = F\n");
        }
        else if(45 <= marks && marks <= 54){
            printf("Grade = D\n");
        }
        else if(55 <= marks && marks <= 64){
            printf("Grade = C\n");
        }
        else if(65 <= marks && marks <= 75){
            printf("Grade = B\n");
        }
        else if(75 <= marks && marks <= 100){
            printf("Grade = A\n");
        }

    }while(id != -1);


    return 0;
}