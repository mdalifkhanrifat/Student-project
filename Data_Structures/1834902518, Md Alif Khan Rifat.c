#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
    char depatment[20];
    char name[50];
    char address[100];
    char email[50];
    char mobile_no[20];
    char result[20];
    int id_no;
    int totall_fee;
    int temp_fee;
    int paid_fee;
    int due_fee;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int count;
    float s1,s2,s3,s4,s5,all;
    float gpa;
    struct node *next;
};
struct node *head=NULL;
struct node *cse=NULL;
struct node *eee=NULL;
char dcse[10]="CSE";
char deee[10]="EEE";
char res[10]="Pass";
char res1[10]="Failed";
int drcse=101;
int dreee=501;
void pay_fee();
struct node *resultcse();
struct node *resulteee();
void AddFaststudent(int n);
void AddStudentBylist();
void updateInfo(struct node *rev);
void eeeprint();
void cseprint();
void headprint();
void deletest();
struct node* swap(struct node* ptr1,struct node* ptr2);
void sortedBygpa(struct node** top);
int userCount();
void src();
void student();
void cseresultlist();
void eeeresultlist();
void fullresultlist();

int main()
{
    int choice=0,choice1=0,choice2=0,choice3=0,choice4=0,count=0;
    printf("\a\n\tWelcome to University Student Management System (data structure mini Project). \n");
    printf("\t\t****************************************************************\n");
    printf("\t\t*\tSubmitted To          !   Submitted By                 *\n");
    printf("\t\t*\t                      !                                *\n");
    printf("\t\t*\tMd. Alif khan Rifat   !   Md Emon Islam Rabbi          *\n");
    printf("\t\t*\tBSc in CSE (Day)      !   Lecturer,Department of CSE   *\n");
    printf("\t\t*\tBatch: 49th (B)       !   City University              *\n");
    printf("\t\t*\tID: 1834902518        !                                *\n");
    printf("\t\t****************************************************************\n\n");

    while(choice!=100)
    {
        printf("\t\t\t\t\t===== Main Menu =====\n");
        printf("\t\t_______________________________________________________________\n");
        printf("\t\t|\t1. Academic  |  2. Teacher  |  3. Student  4. Exit     | \n");
        printf("\t\t_______________________________________________________________\n\n");
        printf("\t\tEnter Your Choice : ");
        choice2=0;
        choice3=0;
        choice4=0;
        scanf("%d",&choice1);
        while(choice1!=5)
        {
            if(choice1==1)
            {
                while(choice2!=10)
                {
                    printf("\a\t\t\t\t\t===== Academic Menu =====\n");
                    printf("\t\t________________________________________________________\n");
                    printf("\t\t|\t1. Admission New Student                      | \n");
                    printf("\t\t|\t2. Show All Student List                      | \n");
                    printf("\t\t|\t3. Update Student Information(Edit)           | \n");
                    printf("\t\t|\t4. Search Student Information                 | \n");
                    printf("\t\t|\t5. Show CSE Student List                      | \n");
                    printf("\t\t|\t6. Show EEE Student List                      | \n");
                    printf("\t\t|\t7. Show Student Result(Sorted Student by GPA) | \n");
                    printf("\t\t|\t8. Delete A Student                           | \n");
                    printf("\t\t|\t9. Back                                       | \n");
                    printf("\t\t________________________________________________________\n\n");
                    printf("\t\tEnter Your Choice : ");
                    scanf("%d",&choice2);
                    if(choice2==1)
                    {
                        if(head==NULL)
                        {
                            AddFaststudent(1);
                        }
                        else
                        {
                            AddStudentBylist();
                        }
                    }
                    else if(choice2==2)
                    {
                        printf("Student list- \n");
                        headprint();
                    }
                    else if(choice2==3)
                    {
                        updateInfo(head);
                    }
                    else if(choice2==4)
                    {
                        src();
                    }
                    else if(choice2==5)
                    {
                        printf("Student list- \n");
                        cseprint();
                    }
                    else if(choice2==6)
                    {
                        printf("Student list- \n");
                        eeeprint();
                    }
                    else if(choice2==7)
                    {
                        sortedBygpa(&head);
                        fullresultlist();
                    }
                    else if(choice2==8)
                    {
                        printf("Student Delete. \n");
                        deletest();
                    }
                    else if(choice2==9)
                    {
                        choice2=10;
                        break;
                    }
                    else
                    {
                        printf("No Try Again.\n");
                    }
                }
                break;
            }

            else if(choice1==2)
            {
                while(choice3!=10)
                {
                    printf("\a\t\t\t\t\t===== Teacher portal =====\n");
                    printf("\t\t__________________________________________________________\n");
                    printf("\t\t|\t1. Show All Student List                          | \n");
                    printf("\t\t|\t2. Search Student                                 | \n");
                    printf("\t\t|\t3. Result input CSE Student                       | \n");
                    printf("\t\t|\t4. Result input EEE Student                       | \n");
                    printf("\t\t|\t5. Show CSE Student List                          | \n");
                    printf("\t\t|\t6. Show EEE Student List                          | \n");
                    printf("\t\t|\t7. Show CSE Student Result(Sorted Student by GPA) | \n");
                    printf("\t\t|\t8. Show EEE Student Result(Sorted Student by GPA) | \n");
                    printf("\t\t|\t9. Back                                           | \n");
                    printf("\t\t__________________________________________________________\n\n");
                    printf("\t\tEnter Your Choice : ");
                    scanf("%d",&choice3);
                    if(choice3==1)
                    {
                        headprint();
                    }
                    else if(choice3==2)
                    {
                        src();
                    }
                    else if(choice3==3)
                    {
                        resultcse();
                    }
                    else if(choice3==4)
                    {
                        resulteee();
                    }
                    else if(choice3==5)
                    {
                        printf("Student list- \n");
                        cseprint();
                    }
                    else if(choice3==6)
                    {
                        printf("Student list- \n");
                        eeeprint();
                    }
                    else if(choice3==7)
                    {
                        printf("CSE result Under Construction\n");
                        sortedBygpa(&head);
                        cseresultlist();
                    }
                    else if(choice3==8)
                    {
                        printf("EEE result Under Construction\n");
                        sortedBygpa(&head);
                        eeeresultlist();
                    }
                    else if(choice3==9)
                    {
                        choice2=10;
                        break;
                    }
                    else
                    {
                        printf("No Try Again.\n");
                    }
                }
                break;
            }
            else if(choice1==3)
            {
                while(choice4!=4)
                {
                    printf("\a\t\t\t\t\t===== Student Portal =====\n");
                    printf("\t\t________________________________________________________\n");
                    printf("\t\t|\t1. My Information                                 | \n");
                    printf("\t\t|\t2. payment                                        | \n");
                    printf("\t\t|\t3. Back                                           | \n");
                    printf("\t\t________________________________________________________\n\n");
                    printf("\t\tEnter Your Choice : ");
                    scanf("%d",&choice4);
                    if(choice4==1)
                    {
                        student();
                    }
                    else if(choice4==2)
                    {
                        pay_fee();
                    }
                    else if(choice4==3)
                    {
                        choice4=4;
                        break;
                    }
                    else
                    {
                        printf("No Try Again.\n");
                    }
                }
                break;
            }

            else if(choice1==4)
            {
                choice1=5;
                choice=100;
                break;
            }

            else
            {
                printf("No Try Again.\n");
            }
        }
    }
    return 0;
}
void AddFaststudent(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    int dechoice=0;
    while(dechoice != 2)
    {
        printf("\nChoice Your department: \n");
        printf("\n1.CSE\n2.EEE \n");

        scanf("%d",&dechoice);
        switch(dechoice)
        {
        case 1:
        {
            printf("\n\t\t\tWelcome to CSE-\n");
            strcpy(head->depatment,dcse);
            head->totall_fee=20000;
            head->id_no=drcse++;
            dechoice=2;
            break;
        }
        case 2:
        {
            printf("\n\t\t\tWelcome to EEE-\n");
            strcpy(head->depatment,deee);
            head->totall_fee=15000;
            head->id_no=dreee++;
            dechoice=2;
            break;
        }

        default:
        {
            printf("Please Enter valid choice ");
        }
        }
    }

    printf("Student admission ID(CSE SL 100-500,EEE SL 501-1000) No.       : %d\n",head->id_no);

    printf(" Enter Student Full Name                                       : ");
    scanf("%*c%[^\n]",head->name);

    printf(" Enter Student Full Address                                    : ");
    scanf("%*c%[^\n]",head->address);

    printf(" Enter Student Mobile No                                       : ");
    scanf("%*c%[^\n]",head->mobile_no);

    printf(" Enter User Mail                                               : ");
    scanf("%*c%[^\n]",head->email);

    head->paid_fee=0;
    head->due_fee=(head->totall_fee)-(head->paid_fee);
    head->gpa=0.00;
    printf("DATA INSERTED SUCCESSFULLY\n\n");
    printf("\n");
    head->next = NULL;
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        int dchoice=0;
        while(dchoice != 2)
        {
            printf("\n\nChoice Your Department: \n");
            printf("\n1.CSE\n2.EEE \n");
            scanf("%d",&dchoice);
            switch(dchoice)
            {
            case 1:
            {
                strcpy(newNode->depatment,dcse);
                newNode->totall_fee=20000;
                newNode->id_no=drcse++;
                dechoice=2;
                break;
            }
            case 2:
            {
                strcpy(newNode->depatment,deee);
                newNode->totall_fee=15000;
                newNode->id_no=dreee++;
                dchoice=2;
                break;
            }

            default:
            {
                printf("Please Enter valid choice ");
            }
            }
        }
        printf(" Student admission ID(CSE SL 0-500,EEE SL 501-1000) No     : %d\n",newNode->id_no);

        printf(" Enter Student Full Name                                       : ");
        scanf("%*c%[^\n]",newNode->name);

        printf(" Enter Student Full Address                                    : ");
        scanf("%*c%[^\n]",newNode->address);

        printf(" Enter Student Mobile No                                       : ");
        scanf("%*c%[^\n]",newNode->mobile_no);

        printf(" Enter User Mail                                               : ");
        scanf("%*c%[^\n]",newNode->email);

        newNode->paid_fee=0;
        newNode->due_fee=(newNode->totall_fee)-(newNode->paid_fee);
        newNode->gpa=0.00;

        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
        printf("\n");
    }
}

void AddStudentBylist()
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {

        int dchoice=0;
        while(dchoice != 2)
        {
            printf("\n\nChoice Your Department: \n");
            printf("\n1.CSE\n2.EEE \n");
            scanf("%d",&dchoice);
            switch(dchoice)
            {
            case 1:
            {
                strcpy(newNode->depatment,dcse);
                newNode->totall_fee=20000;
                newNode->id_no=drcse++;
                dchoice=2;
                break;
            }
            case 2:
            {
                strcpy(newNode->depatment,deee);
                newNode->totall_fee=15000;
                newNode->id_no=dreee++;
                dchoice=2;
                break;
            }

            default:
            {
                printf("Please Enter valid choice ");
            }
            }
        }

        printf(" Student admission ID(CSE SL 0-500,EEE SL 501-1000) No      : %d\n",newNode->id_no);

        printf(" Enter Student Full Name                                       : ");
        scanf("%*c%[^\n]",newNode->name);

        printf(" Enter Student Full Address                                    : ");
        scanf("%*c%[^\n]",newNode->address);

        printf(" Enter Student Mobile No                                       : ");
        scanf("%*c%[^\n]",newNode->mobile_no);

        printf(" Enter User Mail                                               : ");
        scanf("%*c%[^\n]",newNode->email);

        newNode->paid_fee=0;
        newNode->due_fee=(newNode->totall_fee)-(newNode->paid_fee);
        newNode->gpa=0.00;
        newNode->next = NULL;
        temp = head;

        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n\n");
    }
}
void cseprint()
{

    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->id_no<500)
        {
            printf("-----------------------------------------------------------------\n");
            printf("!\tDepartment Name   : %s\t\t\t\t\t!\n",temp->depatment);
            printf("!\tStudent ID        : %d\t\t\t\t\t!\n",temp->id_no);
            printf("!\tStudent Name      : %s\t\t\t\t\t!\n",temp->name);
            printf("!\tStudent Address   : %s\t\t\t\t\t!\n",temp->address);
            printf("!\tStudent Mail      : %s\t\t\t\t\t!\n",temp->email);
            printf("!\tStudent Mobile    : %s\t\t\t\t\t!\n",temp->mobile_no);
            printf("!\tStudent total fee : %d\t\t\t\t!\n",temp->totall_fee);
            printf("!\tStudent paid fee  : %d\t\t\t\t\t!\n",temp->paid_fee);
            printf("!\tStudent due fee   : %d\t\t\t\t!\n",temp->due_fee=(temp->totall_fee)-(temp->paid_fee));
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
            printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

            if(temp->count!=0)
            {
                printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
            }
            printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);

            printf("-----------------------------------------------------------------\n");

            printf("\n\n");
        }
        temp=temp->next;
    }
}

void eeeprint()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->id_no>500)
        {
            printf("-----------------------------------------------------------------\n");
            printf("!\tDepartment Name   : %s\t\t\t\t\t!\n",temp->depatment);
            printf("!\tStudent ID        : %d\t\t\t\t\t!\n",temp->id_no);
            printf("!\tStudent Name      : %s\t\t\t\t\t!\n",temp->name);
            printf("!\tStudent Address   : %s\t\t\t\t\t!\n",temp->address);
            printf("!\tStudent Mail      : %s\t\t\t\t\t!\n",temp->email);
            printf("!\tStudent Mobile    : %s\t\t\t\t\t!\n",temp->mobile_no);
            printf("!\tStudent total fee : %d\t\t\t\t!\n",temp->totall_fee);
            printf("!\tStudent paid fee  : %d\t\t\t\t\t!\n",temp->paid_fee);
            printf("!\tStudent due fee   : %d\t\t\t\t!\n",temp->due_fee=(temp->totall_fee)-(temp->paid_fee));
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
            printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

            if(temp->count!=0)
            {
                printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
            }
            printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);

            printf("-----------------------------------------------------------------\n");

            printf("\n\n");
        }
        temp=temp->next;
    }
}

void headprint()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("-----------------------------------------------------------------\n");
        printf("!\tDepartment Name   : %s\t\t\t\t\t!\n",temp->depatment);
        printf("!\tStudent ID        : %d\t\t\t\t\t!\n",temp->id_no);
        printf("!\tStudent Name      : %s\t\t\t\t\t!\n",temp->name);
        printf("!\tStudent Address   : %s\t\t\t\t\t!\n",temp->address);
        printf("!\tStudent Mail      : %s\t\t\t\t\t!\n",temp->email);
        printf("!\tStudent Mobile    : %s\t\t\t\t\t!\n",temp->mobile_no);
        printf("!\tStudent total fee : %d\t\t\t\t!\n",temp->totall_fee);
        printf("!\tStudent paid fee  : %d\t\t\t\t\t!\n",temp->paid_fee);
        printf("!\tStudent due fee   : %d\t\t\t\t!\n",temp->due_fee=(temp->totall_fee)-(temp->paid_fee));
        if(temp->id_no<500)
        {
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
            printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
            printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

            if(temp->count!=0)
            {
                printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
            }
            printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);

            printf("-----------------------------------------------------------------\n");
        }
        if(temp->id_no>500)
        {
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
            printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
            printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

            if(temp->count!=0)
            {
                printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
            }
            printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);

            printf("-----------------------------------------------------------------\n");
        }
        printf("\n\n");
        temp=temp->next;
    }
}

struct node *resultcse()
{
    struct node *temp=head;
    while (temp != NULL)
    {


        if(temp->id_no<500)
        {
            if(temp->sub1==0)
            {

                printf("\tDepartment Name   : %s\n",temp->depatment);
                printf("\tStudent ID        : %d\n",temp->id_no);
                printf("\tStudent Name      : %s\n",temp->name);
                int ck1=0,ck2=0,ck3=0,ck4=0,ck5=0;
                temp->count=0;
                printf("Please input mark\n");
                printf("\n\nEnter CSE-213(data structure) Marks: ");
                while(ck1!=1)
                {
                    scanf("%d",&temp->sub1);
                    if(temp->sub1 <=100 && temp->sub1 >=0)
                    {
                        break;
                    }
                    else
                    {
                        printf("no valid mark please try again \n");
                    }
                }
                if(temp->sub1<=100&& temp->sub1>=80)
                {
                    temp->s1=4.00;
                    printf("%.2f = A+ \n",temp->s1);
                }
                else if(temp->sub1<=79&& temp->sub1>=75)
                {
                    temp->s1=3.75;
                    printf("%.2f = A \n",temp->s1);
                }
                else if(temp->sub1<=74 && temp->sub1>=70)
                {
                    temp->s1=3.50;
                    printf("%.2f = A- \n",temp->s1);
                }
                else if(temp->sub1<=69 && temp->sub1>=65)
                {
                    temp->s1=3.25;
                    printf("%.2f = B+ \n",temp->s1);
                }
                else if(temp->sub1<=64 && temp->sub1>=60)
                {
                    temp->s1=3.00;
                    printf("%.2f = B \n",temp->s1);
                }
                else if(temp->sub1<=59 && temp->sub1>=55)
                {
                    temp->s1=2.75;
                    printf("%.2f = B- \n",temp->s1);
                }
                else if(temp->sub1<=54 && temp->sub1>=50)
                {
                    temp->s1=2.50;
                    printf("%.2f = C+ \n",temp->s1);
                }
                else if(temp->sub1<=49 && temp->sub1>=45)
                {
                    temp->s1=2.25;
                    printf("%.2f = C \n",temp->s1);
                }
                else if(temp->sub1<=44 && temp->sub1>=40)
                {
                    temp->s1=2.00;
                    printf("%.2f = D \n",temp->s1);
                }
                else
                {
                    temp->s1=0.00;
                    temp->count++;
                    printf("%.2f = Filled \n",temp->s1);
                }

                printf("\n\nEnter CSE-214(data structure lab) Marks: ");
                while(ck2!=1)
                {
                    scanf("%d",&temp->sub2);
                    if(temp->sub2<=100 && temp->sub2>=0)
                    {
                        break;
                    }
                    else
                    {
                        printf("no valid mark please try again \n");
                    }
                }
                if(temp->sub2<=100&& temp->sub2>=80)
                {
                    temp->s2=4.00;
                    printf("%.2f = A+ \n",temp->s2);
                }
                else if(temp->sub2<=79&& temp->sub2>=75)
                {
                    temp->s2=3.75;
                    printf("%.2f = A \n",temp->s2);
                }
                else if(temp->sub2<=74 && temp->sub2>=70)
                {
                    temp->s1=3.50;
                    printf("%.2f = A- \n",temp->s2);
                }
                else if(temp->sub2<=69 && temp->sub2>=65)
                {
                    temp->s2=3.25;
                    printf("%.2f = B+ \n",temp->s1);
                }
                else if(temp->sub2<=64 && temp->sub2>=60)
                {
                    temp->s2=3.00;
                    printf("%.2f = B \n",temp->s2);
                }
                else if(temp->sub2<=59 && temp->sub2>=55)
                {
                    temp->s2=2.75;
                    printf("%.2f = B- \n",temp->s2);
                }
                else if(temp->sub2<=54 && temp->sub2>=50)
                {
                    temp->s2=2.50;
                    printf("%.2f = C+ \n",temp->s2);
                }
                else if(temp->sub2<=49 && temp->sub2>=45)
                {
                    temp->s2=2.25;
                    printf("%.2f = C \n",temp->s2);
                }
                else if(temp->sub2<=44 && temp->sub2>=40)
                {
                    temp->s2=2.00;
                    printf("%.2f = D \n",temp->s2);
                }
                else
                {
                    temp->s2=0.00;
                    temp->count++;
                    printf("%.2f = Filled \n",temp->s2);
                }

                printf("\n\nEnter EEE-301(Electronic Circuit -I) Marks: ");
                while(ck3!=1)
                {
                    scanf("%d",&temp->sub3);
                    if(temp->sub3<=100 && temp->sub3>=0)
                    {
                        break;
                    }
                    else
                    {
                        printf("no valid mark please try again \n");
                    }
                }
                if(temp->sub3<=100&& temp->sub3>=80)
                {
                    temp->s3=4.00;
                    printf("%.2f = A+ \n",temp->s1);
                }
                else if(temp->sub3<=79&& temp->sub3>=75)
                {
                    temp->s3=3.75;
                    printf("%.2f = A \n",temp->s3);
                }
                else if(temp->sub3<=74 && temp->sub3>=70)
                {
                    temp->s3=3.50;
                    printf("%.2f = A- \n",temp->s3);
                }
                else if(temp->sub3<=69 && temp->sub3>=65)
                {
                    temp->s3=3.25;
                    printf("%.2f = B+ \n",temp->s3);
                }
                else if(temp->sub3<=64 && temp->sub3>=60)
                {
                    temp->s3=3.00;
                    printf("%.2f = B \n",temp->s3);
                }
                else if(temp->sub3<=59 && temp->sub3>=55)
                {
                    temp->s3=2.75;
                    printf("%.2f = B- \n",temp->s3);
                }
                else if(temp->sub3<=54 && temp->sub3>=50)
                {
                    temp->s3=2.50;
                    printf("%.2f = C+ \n",temp->s3);
                }
                else if(temp->sub3<=49 && temp->sub3>=45)
                {
                    temp->s3=2.25;
                    printf("%.2f = C \n",temp->s3);
                }
                else if(temp->sub3<=44 && temp->sub3>=40)
                {
                    temp->s3=2.00;
                    printf("%.2f = D \n",temp->s3);
                }
                else
                {
                    temp->s3=0.00;
                    temp->count++;
                    printf("%.2f = Filled \n",temp->s3);
                }


                printf("\n\nEnter MAT-221 (Matrix & Linear Algebra) Marks: ");
                while(ck4!=1)
                {
                    scanf("%d",&temp->sub4);
                    if(temp->sub4<=100 && temp->sub4>=0)
                    {
                        break;
                    }
                    else
                    {
                        printf("no valid mark please try again \n");
                    }
                }
                if(temp->sub4<=100&& temp->sub4>=80)
                {
                    temp->s4=4.00;
                    printf("%.2f = A+ \n",temp->s4);
                }
                else if(temp->sub4<=79&& temp->sub4>=75)
                {
                    temp->s4=3.75;
                    printf("%.2f = A \n",temp->s4);
                }
                else if(temp->sub4<=74 && temp->sub4>=70)
                {
                    temp->s4=3.50;
                    printf("%.2f = A- \n",temp->s4);
                }
                else if(temp->sub4<=69 && temp->sub4>=65)
                {
                    temp->s4=3.25;
                    printf("%.2f = B+ \n",temp->s4);
                }
                else if(temp->sub4<=64 && temp->sub4>=60)
                {
                    temp->s4=3.00;
                    printf("%.2f = B \n",temp->s4);
                }
                else if(temp->sub4<=59 && temp->sub4>=55)
                {
                    temp->s4=2.75;
                    printf("%.2f = B- \n",temp->s4);
                }
                else if(temp->sub4<=54 && temp->sub4>=50)
                {
                    temp->s4=2.50;
                    printf("%.2f = C+ \n",temp->s4);
                }
                else if(temp->sub4<=49 && temp->sub4>=45)
                {
                    temp->s4=2.25;
                    printf("%.2f = C \n",temp->s4);
                }
                else if(temp->sub4<=44 && temp->sub4>=40)
                {
                    temp->s4=2.00;
                    printf("%.2f = D \n",temp->s4);
                }
                else
                {
                    temp->s4=0.00;
                    temp->count++;
                    printf("%.2f = Filled \n",temp->s4);
                }

                printf("\n\nEnter EPE-203 (Engineering Professional Ethics) Marks: ");
                while(ck5!=1)
                {
                    scanf("%d",&temp->sub5);
                    if(temp->sub5<=100 && temp->sub5>=0)
                    {
                        break;
                    }
                    else
                    {
                        printf("no valid mark please try again \n");
                    }
                }
                if(temp->sub5<=100&& temp->sub5>=80)
                {
                    temp->s5=4.00;
                    printf("%.2f = A+ \n",temp->s5);
                }
                else if(temp->sub5<=79&& temp->sub5>=75)
                {
                    temp->s5=3.75;
                    printf("%.2f = A \n",temp->s5);
                }
                else if(temp->sub5<=74 && temp->sub5>=70)
                {
                    temp->s5=3.50;
                    printf("%.2f = A- \n",temp->s5);
                }
                else if(temp->sub5<=69 && temp->sub5>=65)
                {
                    temp->s5=3.25;
                    printf("%.2f = B+ \n",temp->s5);
                }
                else if(temp->sub5<=64 && temp->sub5>=60)
                {
                    temp->s5=3.00;
                    printf("%.2f = B \n",temp->s5);
                }
                else if(temp->sub5<=59 && temp->sub5>=55)
                {
                    temp->s5=2.75;
                    printf("%.2f = B- \n",temp->s5);
                }
                else if(temp->sub1<=54 && temp->sub1>=50)
                {
                    temp->s5=2.50;
                    printf("%.2f = C+ \n",temp->s5);
                }
                else if(temp->sub5<=49 && temp->sub5>=45)
                {
                    temp->s5=2.25;
                    printf("%.2f = C \n",temp->s5);
                }
                else if(temp->sub5<=44 && temp->sub5>=40)
                {
                    temp->s5=2.00;
                    printf("%.2f = D \n",temp->s5);
                }
                else
                {
                    temp->s5=0.00;
                    temp->count++;
                    printf("%.2f = Filled \n",temp->s5);
                }


                if(temp->s1>=2.00 && temp->s2>=2.00 && temp->s3>=2.00 && temp->s4>=2.00 && temp->s5>=2.00)
                {
                    temp->all=(temp->s1+temp->s2+temp->s3+temp->s4+temp->s5)/5.00;
                    if(temp->all==4.00)
                    {
                        printf("cgpa : %.2f (A+)\n",temp->all);
                    }
                    else if(temp->all<=3.99 && 3.75<=temp->all)
                    {
                        printf("cgpa : %.2f (A)\n",temp->all);
                    }
                    else if(temp->all<=3.74 && 3.50<=temp->all)
                    {
                        printf("cgpa : %.2f (A-)\n",temp->all);
                    }
                    else if(temp->all<=3.49 && 3.25<=temp->all)
                    {
                        printf("cgpa : %.2f (B+)\n",temp->all);
                    }
                    else if(temp->all<=3.24 && 3.00<=temp->all)
                    {
                        printf("cgpa : %.2f (B)\n",temp->all);
                    }
                    else if(temp->all<=2.99 && 2.75<=temp->all)
                    {
                        printf("cgpa : %.2f (B-)\n",temp->all);
                    }
                    else if(temp->all<=2.74 && 2.50<=temp->all)
                    {
                        printf("cgpa : %.2f (C+)\n",temp->all);
                    }
                    else if(temp->all<=2.49 && 2.25<=temp->all)
                    {
                        printf("cgpa : %.2f (C)\n",temp->all);
                    }
                    else if(temp->all<=2.24 && 2.00<=temp->all)
                    {
                        printf("cgpa : %.2f (D)\n",temp->all);
                    }
                }
                else
                {
                    printf("\n\n%d subject failed \n\n\n",temp->count);
                }

                if(temp->count==0)
                {
                    strcpy(temp->result,res);
                }
                else
                {
                    strcpy(temp->result,res1);
                }
                temp->gpa=temp->all;
            }
        }
        temp = temp->next;
    }

}
struct node *resulteee()
{
    struct node *temp=head;
    while (temp != NULL)
    {
        if(temp->id_no>500)
        {
            printf("\tDepartment Name   : %s\n",temp->depatment);
            printf("\tStudent ID        : %d\n",temp->id_no);
            printf("\tStudent Name      : %s\n",temp->name);
            int ck1=0,ck2=0,ck3=0,ck4=0,ck5=0;
            temp->count=0;
            printf("Please input mark\n");
            printf("\n\nEnter CSE-213(data structure) Marks: ");
            while(ck1!=1)
            {
                scanf("%d",&temp->sub1);
                if(temp->sub1 <=100 && temp->sub1 >=0)
                {
                    break;
                }
                else
                {
                    printf("no valid mark please try again \n");
                }
            }
            if(temp->sub1<=100&& temp->sub1>=80)
            {
                temp->s1=4.00;
                printf("%.2f = A+ \n",temp->s1);
            }
            else if(temp->sub1<=79&& temp->sub1>=75)
            {
                temp->s1=3.75;
                printf("%.2f = A \n",temp->s1);
            }
            else if(temp->sub1<=74 && temp->sub1>=70)
            {
                temp->s1=3.50;
                printf("%.2f = A- \n",temp->s1);
            }
            else if(temp->sub1<=69 && temp->sub1>=65)
            {
                temp->s1=3.25;
                printf("%.2f = B+ \n",temp->s1);
            }
            else if(temp->sub1<=64 && temp->sub1>=60)
            {
                temp->s1=3.00;
                printf("%.2f = B \n",temp->s1);
            }
            else if(temp->sub1<=59 && temp->sub1>=55)
            {
                temp->s1=2.75;
                printf("%.2f = B- \n",temp->s1);
            }
            else if(temp->sub1<=54 && temp->sub1>=50)
            {
                temp->s1=2.50;
                printf("%.2f = C+ \n",temp->s1);
            }
            else if(temp->sub1<=49 && temp->sub1>=45)
            {
                temp->s1=2.25;
                printf("%.2f = C \n",temp->s1);
            }
            else if(temp->sub1<=44 && temp->sub1>=40)
            {
                temp->s1=2.00;
                printf("%.2f = D \n",temp->s1);
            }
            else
            {
                temp->s1=0.00;
                temp->count++;
                printf("%.2f = Filled \n",temp->s1);
            }

            printf("\n\nEnter CSE-214(data structure lab) Marks: ");
            while(ck2!=1)
            {
                scanf("%d",&temp->sub2);
                if(temp->sub2<=100 && temp->sub2>=0)
                {
                    break;
                }
                else
                {
                    printf("no valid mark please try again \n");
                }
            }
            if(temp->sub2<=100&& temp->sub2>=80)
            {
                temp->s2=4.00;
                printf("%.2f = A+ \n",temp->s2);
            }
            else if(temp->sub2<=79&& temp->sub2>=75)
            {
                temp->s2=3.75;
                printf("%.2f = A \n",temp->s2);
            }
            else if(temp->sub2<=74 && temp->sub2>=70)
            {
                temp->s1=3.50;
                printf("%.2f = A- \n",temp->s2);
            }
            else if(temp->sub2<=69 && temp->sub2>=65)
            {
                temp->s2=3.25;
                printf("%.2f = B+ \n",temp->s1);
            }
            else if(temp->sub2<=64 && temp->sub2>=60)
            {
                temp->s2=3.00;
                printf("%.2f = B \n",temp->s2);
            }
            else if(temp->sub2<=59 && temp->sub2>=55)
            {
                temp->s2=2.75;
                printf("%.2f = B- \n",temp->s2);
            }
            else if(temp->sub2<=54 && temp->sub2>=50)
            {
                temp->s2=2.50;
                printf("%.2f = C+ \n",temp->s2);
            }
            else if(temp->sub2<=49 && temp->sub2>=45)
            {
                temp->s2=2.25;
                printf("%.2f = C \n",temp->s2);
            }
            else if(temp->sub2<=44 && temp->sub2>=40)
            {
                temp->s2=2.00;
                printf("%.2f = D \n",temp->s2);
            }
            else
            {
                temp->s2=0.00;
                temp->count++;
                printf("%.2f = Filled \n",temp->s2);
            }

            printf("\n\nEnter EEE-301(Electronic Circuit -I) Marks: ");
            while(ck3!=1)
            {
                scanf("%d",&temp->sub3);
                if(temp->sub3<=100 && temp->sub3>=0)
                {
                    break;
                }
                else
                {
                    printf("no valid mark please try again \n");
                }
            }
            if(temp->sub3<=100&& temp->sub3>=80)
            {
                temp->s3=4.00;
                printf("%.2f = A+ \n",temp->s1);
            }
            else if(temp->sub3<=79&& temp->sub3>=75)
            {
                temp->s3=3.75;
                printf("%.2f = A \n",temp->s3);
            }
            else if(temp->sub3<=74 && temp->sub3>=70)
            {
                temp->s3=3.50;
                printf("%.2f = A- \n",temp->s3);
            }
            else if(temp->sub3<=69 && temp->sub3>=65)
            {
                temp->s3=3.25;
                printf("%.2f = B+ \n",temp->s3);
            }
            else if(temp->sub3<=64 && temp->sub3>=60)
            {
                temp->s3=3.00;
                printf("%.2f = B \n",temp->s3);
            }
            else if(temp->sub3<=59 && temp->sub3>=55)
            {
                temp->s3=2.75;
                printf("%.2f = B- \n",temp->s3);
            }
            else if(temp->sub3<=54 && temp->sub3>=50)
            {
                temp->s3=2.50;
                printf("%.2f = C+ \n",temp->s3);
            }
            else if(temp->sub3<=49 && temp->sub3>=45)
            {
                temp->s3=2.25;
                printf("%.2f = C \n",temp->s3);
            }
            else if(temp->sub3<=44 && temp->sub3>=40)
            {
                temp->s3=2.00;
                printf("%.2f = D \n",temp->s3);
            }
            else
            {
                temp->s3=0.00;
                temp->count++;
                printf("%.2f = Filled \n",temp->s3);
            }


            printf("\n\nEnter MAT-221 (Matrix & Linear Algebra) Marks: ");
            while(ck4!=1)
            {
                scanf("%d",&temp->sub4);
                if(temp->sub4<=100 && temp->sub4>=0)
                {
                    break;
                }
                else
                {
                    printf("no valid mark please try again \n");
                }
            }
            if(temp->sub4<=100&& temp->sub4>=80)
            {
                temp->s4=4.00;
                printf("%.2f = A+ \n",temp->s4);
            }
            else if(temp->sub4<=79&& temp->sub4>=75)
            {
                temp->s4=3.75;
                printf("%.2f = A \n",temp->s4);
            }
            else if(temp->sub4<=74 && temp->sub4>=70)
            {
                temp->s4=3.50;
                printf("%.2f = A- \n",temp->s4);
            }
            else if(temp->sub4<=69 && temp->sub4>=65)
            {
                temp->s4=3.25;
                printf("%.2f = B+ \n",temp->s4);
            }
            else if(temp->sub4<=64 && temp->sub4>=60)
            {
                temp->s4=3.00;
                printf("%.2f = B \n",temp->s4);
            }
            else if(temp->sub4<=59 && temp->sub4>=55)
            {
                temp->s4=2.75;
                printf("%.2f = B- \n",temp->s4);
            }
            else if(temp->sub4<=54 && temp->sub4>=50)
            {
                temp->s4=2.50;
                printf("%.2f = C+ \n",temp->s4);
            }
            else if(temp->sub4<=49 && temp->sub4>=45)
            {
                temp->s4=2.25;
                printf("%.2f = C \n",temp->s4);
            }
            else if(temp->sub4<=44 && temp->sub4>=40)
            {
                temp->s4=2.00;
                printf("%.2f = D \n",temp->s4);
            }
            else
            {
                temp->s4=0.00;
                temp->count++;
                printf("%.2f = Filled \n",temp->s4);
            }

            printf("\n\nEnter EPE-203 (Engineering Professional Ethics) Marks: ");
            while(ck5!=1)
            {
                scanf("%d",&temp->sub5);
                if(temp->sub5<=100 && temp->sub5>=0)
                {
                    break;
                }
                else
                {
                    printf("no valid mark please try again \n");
                }
            }
            if(temp->sub5<=100&& temp->sub5>=80)
            {
                temp->s5=4.00;
                printf("%.2f = A+ \n",temp->s5);
            }
            else if(temp->sub5<=79&& temp->sub5>=75)
            {
                temp->s5=3.75;
                printf("%.2f = A \n",temp->s5);
            }
            else if(temp->sub5<=74 && temp->sub5>=70)
            {
                temp->s5=3.50;
                printf("%.2f = A- \n",temp->s5);
            }
            else if(temp->sub5<=69 && temp->sub5>=65)
            {
                temp->s5=3.25;
                printf("%.2f = B+ \n",temp->s5);
            }
            else if(temp->sub5<=64 && temp->sub5>=60)
            {
                temp->s5=3.00;
                printf("%.2f = B \n",temp->s5);
            }
            else if(temp->sub5<=59 && temp->sub5>=55)
            {
                temp->s5=2.75;
                printf("%.2f = B- \n",temp->s5);
            }
            else if(temp->sub1<=54 && temp->sub1>=50)
            {
                temp->s5=2.50;
                printf("%.2f = C+ \n",temp->s5);
            }
            else if(temp->sub5<=49 && temp->sub5>=45)
            {
                temp->s5=2.25;
                printf("%.2f = C \n",temp->s5);
            }
            else if(temp->sub5<=44 && temp->sub5>=40)
            {
                temp->s5=2.00;
                printf("%.2f = D \n",temp->s5);
            }
            else
            {
                temp->s5=0.00;
                temp->count++;
                printf("%.2f = Filled \n",temp->s5);
            }


            if(temp->s1>=2.00 && temp->s2>=2.00 && temp->s3>=2.00 && temp->s4>=2.00 && temp->s5>=2.00)
            {
                temp->all=(temp->s1+temp->s2+temp->s3+temp->s4+temp->s5)/5.00;
                if(temp->all==4.00)
                {
                    printf("cgpa : %.2f (A+)\n",temp->all);
                }
                else if(temp->all<=3.99 && 3.75<=temp->all)
                {
                    printf("cgpa : %.2f (A)\n",temp->all);
                }
                else if(temp->all<=3.74 && 3.50<=temp->all)
                {
                    printf("cgpa : %.2f (A-)\n",temp->all);
                }
                else if(temp->all<=3.49 && 3.25<=temp->all)
                {
                    printf("cgpa : %.2f (B+)\n",temp->all);
                }
                else if(temp->all<=3.24 && 3.00<=temp->all)
                {
                    printf("cgpa : %.2f (B)\n",temp->all);
                }
                else if(temp->all<=2.99 && 2.75<=temp->all)
                {
                    printf("cgpa : %.2f (B-)\n",temp->all);
                }
                else if(temp->all<=2.74 && 2.50<=temp->all)
                {
                    printf("cgpa : %.2f (C+)\n",temp->all);
                }
                else if(temp->all<=2.49 && 2.25<=temp->all)
                {
                    printf("cgpa : %.2f (C)\n",temp->all);
                }
                else if(temp->all<=2.24 && 2.00<=temp->all)
                {
                    printf("cgpa : %.2f (D)\n",temp->all);
                }
            }
            else
            {
                printf("\n\n%d subject failed \n\n\n",temp->count);
            }

            if(temp->count==0)
            {
                strcpy(temp->result,res);
            }
            else
            {
                strcpy(temp->result,res1);
            }
            temp->gpa=temp->all;
        }
        temp = temp->next;
    }
}

void pay_fee()
{
    struct node *temp=head;
    int check_id,count=0,ck=0;

    while(ck!=1)
    {
        printf("Please inter your id : ");
        scanf("%d",&check_id);
        temp=head;
        while(temp!=NULL)
        {
            if(temp->id_no==check_id)
            {
                printf("\tStudent ID        : %s\t\n",temp->depatment);
                printf("\tStudent Name      : %s\t\n",temp->name);
                temp->temp_fee=temp->totall_fee;
                printf("\tStudent due fee   : %d\t\n",temp->due_fee=(temp->temp_fee)-(temp->paid_fee));
                printf("\t\t\t Enter your paid Amount : ");
                scanf("%d",&temp->paid_fee);
                temp->temp_fee = temp->due_fee;
                printf("\tStudent due fee   : %d\t\n",temp->due_fee=(temp->temp_fee)-(temp->paid_fee));
                temp->due_fee=(temp->temp_fee)-(temp->paid_fee);
                count++;
                break;
            }
            temp=temp->next;
            printf("\n\n");
        }
        if(count!=0)
        {
            break;
        }
        else
        {
            printf("Try again\n");
        }
    }
}

void updateInfo(struct node *rev)
{
 int number,choce,count=0,ck=0;
    struct node *temp = rev;
    while(ck!=1)
    {

        printf("\n\tEnter Student Id No : ");
        scanf("%d",&number);
        while(temp != NULL)
        {
            if(temp->id_no == number || rev->id_no == number)
            {
                count++;
                printf("!\tDepartment Name   : %s\t\t\t\t\t!\n",temp->depatment);
                printf("!\tStudent Name      : %s\t\t\t\t\t!\n",temp->name);
                printf("!\tStudent Address   : %s\t\t\t\t\t!\n",temp->address);
                printf("!\tStudent Mail      : %s\t\t\t\t\t!\n",temp->email);
                printf("!\tStudent Mobile    : %s\t\t\t\t\t!\n\n\n",temp->mobile_no);
                printf("\n\tChoice '1' For Update Student Name : ");
                printf("\n\tChoice '2' For Update Student E-Mail : ");
                printf("\n\tChoice '3' For Update Student Mobile Number : \n");
                //printf("\n\tChoice '4' For Update Student Address : \n");
                printf("\n\tChoice Any One : ");
                scanf("%d",&choce);
                if(choce == 1)
                {
                    printf("\n\tEnter Student New Name    : ");
                    scanf("%*c%[^\n]",temp->name);
                    printf("\tName Update Successful !!\n");
                    break;
                }
                else if(choce == 2)
                {
                    printf("\n\tEnter Student New E-mail    : ");
                    scanf("%*c%[^\n]",temp->email);
                    printf("\tE-mail Update Successful !!\n");
                    break;
                }
                else if(choce == 3)
                {
                    printf("\n\tEnter Student New User Number    : ");
                    scanf("%d",&temp->mobile_no);
                    printf("\tMobile Number Update Successful !!\n");
                    break;
                }
//                else if(choce == 4)
//                {
//                    printf("\n\tEnter Student New address   : ");
//                    scanf("%d",&temp->address);
//                    printf("\tAddress Update Successful !!\n");
//                    break;
//                }

            }
            temp = temp->next;
        }

        if(count!=0)
        {
            break;
        }
        else
        {
            printf("Try again\n");
        }
    }
}
void deletest()
{
    struct node *prev, *cur;
    int key,ck=0,count=0;
    while(ck!=1)
    {
        printf("Inter Delete student Id: ");
        scanf("%d",&key);
        while (head != NULL && head->id_no == key)
        {
            count++;
            prev = head;
            head = head->next;
            free(prev);
            return;
        }

        prev = NULL;
        cur  = head;
        while (cur != NULL)
        {
            if (cur->id_no == key)
            {
                count++;
                if (prev != NULL)
                    prev->next = cur->next;
                free(cur);
                return;
            }

            prev = cur;
            cur = cur->next;
        }

        if(count!=0)
        {
            break;
        }
        else
        {
            printf("Try again\n");
        }
    }
}

struct node* swap(struct node* ptr1,struct node* ptr2)
{
    struct node* temp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = temp;
    return ptr2;
}

void sortedBygpa(struct node** top)
{
    struct node** temp;
    int i, j, swapped;

    for (i = 0; i <= userCount(); i++)
    {

        temp = top;
        swapped = 0;

        for (j=0; j<userCount()-i-1; j++)
        {

            struct node* user1 = *temp;
            struct node* user2 = user1->next;
            if (user1->gpa < user2->gpa)
            {
                *temp = swap(user1, user2);
                swapped = 1;
            }
            temp = &(*temp)->next;
        }

        if (swapped == 0)
            break;
    }
    printf("\tData Sorted Successful !!! \n");
}
int userCount()
{
    struct node *temp = head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void src()
{
    struct node *temp=head;
    int id,count=0;

    printf("Enter Student Id No : ");
    scanf("%d",&id);
    while(temp!=NULL)
    {
        if(temp->id_no==id)
        {
            count++;
            printf("-----------------------------------------------------------------\n");
            printf("!\tDepartment Name   : %s\t\t\t\t\t!\n",temp->depatment);
            printf("!\tStudent ID        : %d\t\t\t\t\t!\n",temp->id_no);
            printf("!\tStudent Name      : %s\t\t\t\t\t!\n",temp->name);
            printf("!\tStudent Address   : %s\t\t\t\t\t!\n",temp->address);
            printf("!\tStudent Mail      : %s\t\t\t\t\t!\n",temp->email);
            printf("!\tStudent Mobile    : %s\t\t\t\t\t!\n",temp->mobile_no);
            printf("!\tStudent total fee : %d\t\t\t\t!\n",temp->totall_fee);
            printf("!\tStudent paid fee  : %d\t\t\t\t\t!\n",temp->paid_fee);
            printf("!\tStudent due fee   : %d\t\t\t\t!\n",temp->due_fee=(temp->totall_fee)-(temp->paid_fee));
            if(temp->id_no<500)
            {
                printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
                printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
                printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
                printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
                printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
                printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

                if(temp->count!=0)
                {
                    printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
                }
                printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);

                printf("-----------------------------------------------------------------\n");
            }
            if(temp->id_no>500)
            {
                printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
                printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
                printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
                printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
                printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
                printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

                if(temp->count!=0)
                {
                    printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
                }
                printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);

                printf("-----------------------------------------------------------------\n");
            }


        }

        temp=temp->next;
    }
    if (count==0)
    {
        printf("Sorry invalid Id\n");
    }
    printf("\n\n");
}
void student()
{
    struct node *temp=head;
    int id,count=0,count2=0;
    printf("Enter Your Id No : ");
    scanf("%d",&id);
    while(temp!=NULL)
    {
        if(temp->id_no==id)
        {
            count++;
            printf("-----------------------------------------------------------------\n");
            printf("!\tDepartment Name   : %s\t\t\t\t\t!\n",temp->depatment);
            printf("!\tStudent ID        : %d\t\t\t\t\t!\n",temp->id_no);
            printf("!\tStudent Name      : %s\t\t\t\t\t!\n",temp->name);
            printf("!\tStudent Address   : %s\t\t\t\t\t!\n",temp->address);
            printf("!\tStudent Mail      : %s\t\t\t\t\t!\n",temp->email);
            printf("!\tStudent Mobile    : %s\t\t\t\t\t!\n",temp->mobile_no);
            printf("!\tStudent total fee : %d\t\t\t\t!\n",temp->totall_fee);
            printf("!\tStudent paid fee  : %d\t\t\t\t\t!\n",temp->paid_fee);
            printf("!\tStudent due fee   : %d\t\t\t\t!\n",temp->due_fee=(temp->totall_fee)-(temp->paid_fee));
            if(temp->id_no<500)
            {
                if(temp->due_fee<=0)
                {
                    count2++;
                    printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
                    printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
                    printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
                    printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
                    printf("!\tStudent result    : CSE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
                    printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

                    if(temp->count!=0)
                    {
                        printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
                    }
                    printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);
                }

                printf("-----------------------------------------------------------------\n");
            }
            if(temp->id_no>500)
            {
                if(temp->due_fee<=0)
                {
                    count2++;
                    printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub1,temp->s1);
                    printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub2,temp->s2);
                    printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub3,temp->s3);
                    printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub4,temp->s5);
                    printf("!\tStudent result    : EEE-213: %d= gpa (%.2f)\t\t!\n",temp->sub5,temp->s5);
                    printf("!\tStudent result    : %.2f                  \t\t! \n",temp->gpa=temp->all);

                    if(temp->count!=0)
                    {
                        printf("!\tStudent filed     : %d subject \t\t\t\t! \n",temp->count);
                    }
                    printf("!\tStudent result    : %s\t\t\t\t!\n",temp->result);
                }

                printf("-----------------------------------------------------------------\n");
            }
        }

        temp=temp->next;
    }
    if (count==0)
    {
        printf("Sorry invalid Id\n");
    }
    if (count2==0)
    {
        printf("Do you ant to see your result? Please Try again after paying the fee - \n");
    }
    printf("\n\n");
}

void cseresultlist()
{

    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->id_no<500)
        {
            printf("-----------------------------------------------------------------\n");
            printf("|\t ID : %d ! Name : %s ! Result : %s ! CGPA : =  %.2f\t\t|\n",temp->id_no,temp->name,temp->result,temp->all);
            printf("-----------------------------------------------------------------\n");
        }

        temp=temp->next;
    }
}

void eeeresultlist()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->id_no>500)
        {
            printf("-----------------------------------------------------------------\n");

            printf("|\t ID : %d ! Name : %s ! Result : %s ! CGPA : =  %.2f\t\t|\n",temp->id_no,temp->name,temp->result,temp->all);

            printf("-----------------------------------------------------------------\n");
        }

        temp=temp->next;
    }
}

void fullresultlist()
{
    struct node *temp=head;
    while(temp!=NULL)
    {

            printf("-----------------------------------------------------------------\n");

            printf("|\t ID : %d ! Name : %s ! Result : %s ! CGPA : =  %.2f\t\t|\n",temp->id_no,temp->name,temp->result,temp->all);

            printf("-----------------------------------------------------------------\n");


        temp=temp->next;
    }
}
