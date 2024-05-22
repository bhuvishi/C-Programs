/* File handling
program execution --> input --> RAM --> output

program execution --> input --> RAM --> File

File--> input --> RAM --> output

Program to write data to a file
*/
#include <stdio.h>
main()
{
    int a;
    float b;
    char c;
    FILE *fp;                   // file handler
    fp = fopen("abc.dat", "w"); // to open a file for writing
    printf("enter data");
    scanf("%d", &a);
    scanf("%f", &b);
    fflush(stdin);
    scanf("%c", &c);
    fprintf(fp, "%d %f %c", a, b, c); // to write data to a file
    fclose(fp);                       // to close a file
}

/*
File opening modes
w writing
r reading
a append
wb write in binary
rb read in binary
*/

/*
A file copy program
Copy all the contents of a file to other file
*/
#include <stdio.h>
main()
{
    FILE *fs, *ft; // multiple file handlers
    char ch;
    fs = fopen("interest.c", "r"); // already existing file to be read
    ft = fopen("mycopy.c", "w");   // new file to be created for writing
    while (1)                      // infinite loop
    {
        ch = fgetc(fs); // read one character from file with fs handler
        printf("%c", ch);
        if (ch == EOF) // End Of File
            break;
        fputc(ch, ft); // write character to file
    }
    fclose(fs);
    fclose(ft);
}

/*
Write strings to a file
Write a poem to a file
*/
#include <stdio.h>
#include <string.h>
main()
{
    FILE *fp;
    char s[80];
    fp = fopen("poem.txt", "w");
    printf("Enter a poem");
    while (strlen(gets(s)) > 0)
    {
        fputs(s, fp);    // write string to a file
        fputs("\n", fp); // write a new line character to a file
    }
    fclose(fp);
}

/* Read a poem from a file */
#include <stdio.h>
main()
{
    FILE *fp;
    char s[80];
    fp = fopen("poem.txt", "r");
    while (fgets(s, 79, fp) != NULL) // NULL indicates end of a string file
    {
        printf("%s", s);
        // puts(s);
    }
    fclose(fp);
}

/* Write and read structure data */
#include <stdio.h>
#include <process.h>
struct Student
{
    int rollno;
    char name[20];
    char address[30];
};
main()
{
    struct Student s;
    int ch;
    char op;
    FILE *fp;
    do
    {
        printf("\nEnter your choice \n1. Write record \n2. Read Records \n 3. Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            fp = fopen("student6.dat", "w");
            do
            {
                printf("\nEnter rollno");
                scanf("%d", &s.rollno);
                fflush(stdin);
                printf("Enter name");
                gets(s.name);
                printf("Enter address");
                gets(s.address);
                fprintf(fp, "%d %s %s ", s.rollno, s.name, s.address);
                printf("Do you want to add more Y/N");
                op = getche();
            } while (op == 'y' || op == 'Y');
            fclose(fp);
            break;
        case 2:
            fp = fopen("student6.dat", "r");
            while (fscanf(fp, "%d%s%s", &s.rollno, &s.name, &s.address) != EOF)
            {
                printf("Rollno = %d\n", s.rollno);
                printf("Name = %s\n", s.name);
                printf("Address = %s\n", s.address);
            }
            fclose(fp);
            break;
        case 3:
            exit(0); // process.h
            break;
        default:
            printf("Wrong choice");
        }
    } while (ch != 3);
}

/* Write and read structure data in binary form*/
#include <stdio.h>
struct Student
{
    int rollno;
    char name[20];
    char address[30];
};
main()
{
    struct Student s;
    int ch;
    char op;
    FILE *fp;
    do
    {
        printf("\nEnter your choice \n1. Write record \n2. Read Records \n 3. Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            fp = fopen("student2.dat", "wb"); //
            do
            {
                printf("\nEnter rollno");
                scanf("%d", &s.rollno);
                fflush(stdin);
                printf("Enter name");
                gets(s.name);
                printf("Enter address");
                gets(s.address);
                // fprintf(fp,"%d %s %s ",s.rollno,s.name,s.address);
                fwrite(&s, sizeof(s), 1, fp); //
                printf("Do you want to add more Y/N");
                op = getche();
            } while (op == 'y' || op == 'Y');
            fclose(fp);
            break;
        case 2:
            fp = fopen("student2.dat", "rb"); //
            // while(fscanf(fp,"%d%s%s",&s.rollno,&s.name,&s.address)!=EOF)
            while (fread(&s, sizeof(s), 1, fp) == 1) //
            {
                printf("Rollno = %d\n", s.rollno);
                printf("Name = %s\n", s.name);
                printf("Address = %s\n", s.address);
            }
            fclose(fp);
            break;
        case 3:
            printf("Ok Bye");
            exit(0);
            break;
        default:
            printf("Wrong choice");
        }
    } while (ch != 3);
}