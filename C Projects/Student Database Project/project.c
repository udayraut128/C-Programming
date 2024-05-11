#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void gotoxy(int, int);
void menu();
void addStudent();
void displayStudents();
void searchStudent();
void modify();
void deleteStudent();

struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
    char year[20];
    char address[100];
};
int main()
{
    gotoxy(15, 8);
    printf("<--:Student Record Management System:-->");
    gotoxy(19, 15);
    printf("Press any key to continue.");
    getch();
    menu();
    return 0;
}
void menu()
{
    int choice;
    system("cls");
    gotoxy(10, 3);
    printf("<--:MENU:-->");
    gotoxy(10, 5);
    printf("Enter appropriate number to perform following task.");
    gotoxy(10, 7);
    printf("1 : Add Record.");
    gotoxy(10, 8);
    printf("2 : View Record.");
    gotoxy(10, 9);
    printf("3 : Search Record.");
    gotoxy(10, 10);
    printf("4 : Modify Record.");
    gotoxy(10, 11);
    printf("5 : Delete.");
    gotoxy(10, 12);
    printf("6 : Exit.");
    gotoxy(10, 15);
    printf("Enter your choice.");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addStudent();
        break;

    case 2:
        displayStudents();
        break;

    case 3:
        searchStudent();
        break;

    case 4:
        modify();
        break;

    case 5:
        deleteStudent();
        break;

    case 6:
        exit(1);
        break;

    default:
        gotoxy(10, 17);
        printf("Invalid Choice.");
    }
}
void addStudent()
{
    FILE *fp;
    struct student std;
    char another = 'y';
    system("cls");

    fp = fopen("record.txt", "ab+");
    if (fp == NULL)
    {
        gotoxy(10, 5);
        printf("Error opening file");
        exit(1);
    }
    fflush(stdin);
    while (another == 'y')
    {
        gotoxy(10, 3);
        printf("<--:ADD RECORD:-->");
        gotoxy(10, 5);
        printf("Enter details of student.");
        gotoxy(10, 7);
        printf("Enter Name : ");
        //        gets(std.name);///???
        gets(std.name);
        gotoxy(10, 8);
        printf("Enter Mobile Number : ");
        gets(std.mobile);
        gotoxy(10, 9);
        printf("Enter Roll No : ");
        scanf("%d", &std.rollno);
        fflush(stdin);
        gotoxy(10, 10);
        printf("Enter Course : ");
        //        gets(std.course);///???
        gets(std.course);
        gotoxy(10, 11);
        printf("Enter Branch : ");
        gets(std.branch);
        gotoxy(10, 12);
        printf("Enter Year : ");
        gets(std.year);
        gotoxy(10, 13);
        printf("Enter your address : ");
        gets(std.address);

        fwrite(&std, sizeof(std), 1, fp);
        gotoxy(10, 15);
        printf("Want to add of another record? Then press 'y' else 'n'.");
        fflush(stdin);

        another = getch();
        system("cls");
        fflush(stdin);
    }
    fclose(fp);
    gotoxy(10, 18);
    printf("Press any key to continue.");
    getch();
    menu();
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}