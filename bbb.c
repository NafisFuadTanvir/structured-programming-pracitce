#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

struct student{
    char ID[15];
    char name[20];
    char add[20];
    char parname[20];
    int Class;
    long unsigned int phone_no;
};

struct student stu;






void gotoxy(int x, int y){


}



void clearWindow(){
    int i,j;
    for(i = 37; i < 78; i++){
        for(j = 7; j < 25; j++){
            gotoxy(i,j);printf(" ");
        }
    }
    return;
}

void window(){

    printf("\n\t\t\t\t\tSTUDENT INFORMATION SYSTEM OF GREEN UNIVERSITY\n\n");

    printf("\t\t\t\t\t\tGreen University of Bangladesh\n\n");

    printf("\t\t\t\t\t\t\tYera: 2021");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");


}


void add_student(){
    clearWindow();

    printf("\t\t\t\t\tAdd Information ");
    printf("\n\t\t\t\t---------------------------------------------------------------\n");
    int print = 37;
    FILE *fp;
    fp = fopen("record.txt","ab+");

    if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }else{
        fflush(stdin);
        printf("\n\t\t\t\tID: ");gets(stu.ID);
        printf("\t\t\t\tName: ");gets(stu.name);
        printf("\t\t\t\tAddress: ");gets(stu.add);
        printf("\t\t\t\tParent's name: ");gets(stu.parname);
        printf("\t\t\t\tSemester: ");scanf("%d",&stu.Class);
        printf("\t\t\t\tPhone Number: ");scanf("%ld",&stu.phone_no);
        fwrite(&stu, sizeof(stu), 1, fp);
        printf("\n\t\t\t\tThe information is sucessfully added\n\n");
    }

    fclose(fp);
    return;
}

void search_student(){
    clearWindow();
    printf("\t\tSearch Student Information, ");


    char s_id[15];
    int isFound = 0;
    printf("Enter ID to Search: ");fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record.txt","rb");
    while(fread(&stu,sizeof(stu),1,fp) == 1){
        if(strcmp(s_id,stu.ID) == 0){
            isFound = 1;
            break;
        }
    }
    if(isFound == 1){
        printf("\n\n\t\t\t\tThe information is Found\n");
        printf("\t\t\t\tID: %s\n",stu.ID);
        printf("\t\t\t\tName: %s\n",stu.name);
        printf("\t\t\t\tAddress: %s\n",stu.add);
        printf("\t\t\t\tParent's Name: %s\n",stu.parname);
        printf("\t\t\t\tSemester: %d\n",stu.Class);
        printf("\t\t\t\tPhone No: %ld\n",stu.phone_no);
    }else{
        printf("\n\t\t\t\tSory, No information found in the database\n\n");
    }

    fclose(fp);
    return;
}

void mod_student(){
    clearWindow();
    printf("Modify Student Information, ");

    char s_id[15];
    int isFound = 0, print = 37;
    printf("Enter ID to Modify: ");fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record.txt","rb+");
    while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.ID) == 0){
            fflush(stdin);
            printf("\n\nID: ");gets(stu.ID);
            printf("Name: ");gets(stu.name);
            printf("Address: ");gets(stu.add);
            printf("Parent's name: ");gets(stu.parname);
            printf("Semester: ");scanf("%d",&stu.Class);
            printf("Phone Number: \n\n");scanf("%ld",&stu.phone_no);
            fseek(fp,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        gotoxy(print, 12);printf("\n\t\t\t\t\tNo Record Found");
    }
    fclose(fp);

    return;
}

void gen_marksheet(){
    printf("\n\t\t\t\t\tMark sheet Information Updating....\n");
}

void change_password()
{
    printf("\n\t\t\t\t\tProcesing....\n");
}

void delete_student(){
    clearWindow();
    printf("\t\tDelete Student Information ");

    char s_id[15];
    int isFound = 0, print = 37;
    printf("Enter ID to Delete: ");fflush(stdin);
    gets(s_id);
    FILE *fp, *temp;
    fp = fopen("record.txt","rb");
    temp = fopen("temp.txt", "wb");
    while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.ID) == 0){
            fwrite(&stu,sizeof(stu),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(37,12);printf("\t\tThe information is sucessfully deleted\n\n");

    return;
}

void main_window(){
    int choice;

    int x = 2;
    while(1){
        printf("\n\n1. Add Student Information\n");
        printf("2. Search Student Information\n");
        printf("3. Modify Student Information\n");
        printf("4. Generate Marksheet\n");
        printf("5. Delete Student Information\n");
        printf("6. Change password\n");
        printf("7. Exit\n");
        printf("\n\nEnter your choice: \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_student();
                break;
            case 2:
                search_student();
                break;
            case 3:
                mod_student();
                break;
            case 4:
                gen_marksheet();
                break;
            case 5:
                delete_student();
                break;
            case 6:
                change_password();
                break;
            case 7:
                exit(0);
                break;
            default:
                break;
        }

    }

}

int main(){


    window();
    main_window();
    return 0;
}

