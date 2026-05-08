#include <stdio.h>
#include <string.h>

struct Emp{
    int id;
    char name[50];
    float sal;
}

int main(){
    struct Emp a[3];

    for(int i = 0; i<3; i++){
        int x;
        printf("Enter id: ");
        scanf("%d", &x);
        a[i].id = x;


        char name[50];
        printf("Enter name: ");
        scanf("%s", name);
        strcpy(a[i].name, name);
        
        float sal;
        printf("Enter salary: ");
        scanf("%f", &sal);
        a[i].sal = sal;
    }

    for(int i=0; i<3; i++){
        printf("Id: %d\n", a[i].id);
        printf("Name: %s\n", a[i].name);
        printf("Salary: %.2f\n", a[i].sal);
    }
}
//In structure we cannot define functions but in class we can define functions.