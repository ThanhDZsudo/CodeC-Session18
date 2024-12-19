#include <stdio.h>  

struct Student{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void displayStudents(struct Student students[], int count);
int main(){
    struct Student students[50] ={{1, "Nguyen Van A", 20, "029292999"},{2,"Tran Thi B",22,"012345678"}};
    int studentCount = 2;
    int searchId;
    int found = 0;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    for(int i = 0; i<studentCount; i++){
        if (students[i].id==searchId){
            found = 1;
            printf("Sinh vien tim thay:\n");
            printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            printf("Nhap ten moi: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("Nhap so dien thoai moi: ");
            getchar();
            fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
            students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0';
            break;
        }
    }
    if(!found){
        printf("Khong tim thay sinh vien co ID = %d\n", searchId);
    }
    displayStudents(students, studentCount);
}
void displayStudents(struct Student students[], int count){
    printf("\nDanh sach sinh vien:\n");  
    for (int i = 0; i<count; i++){
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
