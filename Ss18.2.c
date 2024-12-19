#include <stdio.h>  

struct Student {  
    char name[50];  
    int age;  
    char phoneNumber[15];  
};  
int main() {  
    struct Student student1;  
    printf("Nhap ten sv: ");  
    fgets(student1.name, sizeof(student1.name), stdin);  
    printf("Nhap tuoi sv: ");  
    scanf("%d", &student1.age);  
    printf("Nhap sdt: ");  
    scanf("%s", student1.phoneNumber);  
    printf("Thong tin sv:\n");  
    printf("Ten: %s", student1.name);  
    printf("Tuoi: %d\n", student1.age);  
    printf("Sdt: %s\n", student1.phoneNumber);  
}
