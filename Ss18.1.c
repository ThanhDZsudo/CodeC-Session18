#include <stdio.h>  

struct Student {  
    char name[50];  
    int age;  
    char phoneNumber[15];  
};  
int main() {  
    struct Student student1;  
    strcpy(student1.name, "Nguyen Tien Thanh");  
    student1.age = 20;  
    strcpy(student1.phoneNumber, "029292999");  
    printf("Name: %s\n", student1.name);  
    printf("Age: %d\n", student1.age);  
    printf("Phone Number: %s\n", student1.phoneNumber);   
}
