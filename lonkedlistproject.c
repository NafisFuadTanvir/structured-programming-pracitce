#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int id;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;

}* head;
void window(){

    printf("\n\t\t\t\t\tSTUDENT INFORMATION SYSTEM OF GREEN UNIVERSITY\n\n");

    printf("\t\t\t\t\t\tGreen University of Bangladesh\n\n");

    printf("\t\t\t\t\t\t\tYear: 2021");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");


}

void insert(int id, char* name, char* phone, float percentage)
{

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->id = id;
    strcpy(student->name, name);
    strcpy(student->phone, phone);
    student->percentage = percentage;
    student->next = NULL;

    if(head==NULL){

        head = student;
    }
    else{

        student->next = head;
        head = student;
    }

}
void search(int id)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->id==id){
            printf("Roll Number: %d\n", temp->id);
            printf("Name: %s\n", temp->name);
            printf("Phone: %s\n", temp->phone);
            printf("Percentage: %0.4f\n", temp->percentage);
            return;
        }
        temp = temp->next;
    }
    printf("Student of roll number %d is not found !!!\n", id);
}
void modify(int id)
{

    struct Student * temp = head;
    while(temp!=NULL){

        if(temp->id==id){
            printf("Record with roll number %d Found !!!\n", id);
            printf("Enter new name: ");
            gets(temp->name);
            printf("Enter new phone number: ");
            gets(temp->phone);
            printf("Enter new percentage: ");
            scanf("%f",&temp->percentage);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;

    }
    printf("Student of roll number %d is not found !!!\n", id);

}
void Delete(int id)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head;
    while(temp1!=NULL){

        if(temp1->id==id){

            printf("Record with roll number %d Found !!!\n", id);

            if(temp1==temp2){

                head = head->next;
                free(temp1);
            }
            else{

                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
            return;

        }
        temp2 = temp1;
        temp1 = temp1->next;

    }
    printf("Student with roll number %d is not found !!!\n", id);

}
void display()
{
    struct Student * temp = head;
    while(temp!=NULL){

        printf("Roll Number: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Phone: %s\n", temp->phone);
        printf("Percentage: %0.4f\n\n", temp->percentage);
        temp = temp->next;

    }

}
int main()
{
    window();
    head = NULL;
    int choice;
    char name[100];
    char phone[100];
    int id;
    float percentage;
    printf(" 1. to insert student details\n 2. to search for student details\n 3. to delete student details\n 4. to update student details\n 5. to display all student details");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter id: ");
                scanf("%d", &id);
                printf("Enter name: ");
                gets(name);
                printf("Enter phone number: ");
                gets(phone);
                printf("Enter percentage: ");
                scanf("%f", &percentage);
                insert(id, name, phone, percentage);
                break;
            case 2:
                printf("Enter id to search: ");
                scanf("%d", &id);
                search(id);
                break;
            case 3:
                printf("Enter id to delete: ");
                scanf("%d", &id);
                Delete(id);
                break;
            case 4:
                printf("Enter id to update: ");
                scanf("%d", &id);
                modify(id);
                break;
            case 5:
                display();
                break;

                default:
                printf("you enterd the wrong key");
        }

    } while (choice != 0);
}
