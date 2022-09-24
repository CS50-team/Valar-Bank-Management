#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Valar Bank Management System By Mohamed Mostafa

// Functions Declaration
void create_acc(void);
void update_acc(void);
void transactions(void);
void acc_data(void);
void rerun();
void add_balance(void);

// Arrays Struct
typedef struct
{
    string name;
    string phone_number;
    string email;
    string id;
    int balance;
    string acc_number;

}mohamed;
// Arrays Struct
typedef struct 
{
    string acc_number;
    string action;
    string date;
    string amount;

}mohamed1;

// Main Function
int main(void)
{
    int select;
    printf("\n\t\t\t-----------------------------------------------------------------------\n");
    printf("\t\t\t\t[$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$]] [$]\n");
    printf("\t\t\t-----------------------------------------------------------------------\n");
    printf("\t\t\t\t[$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$]\n");
    printf("\t\t\t-----------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tValar Bank Management\n\n\t\t\t\t\t\t\b  by Mohamed Mostafa\n");
    printf("\t\t\t-----------------------------------------------------------------------\n");
    printf("\t\t\t\t[$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$]\n");
    printf("\t\t\t-----------------------------------------------------------------------\n");
    printf("\t\t\t\t[$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$] [$]] [$]\n");
    printf("\t\t\t-----------------------------------------------------------------------\n");
    
    printf("\n[1] Create New Bank Account.\n\n[2] Update Information Of Existing Account.\n\n[3] Transactions.\n\n[4] Check The Details Of Existing Account.\n\n[5] Add Balance\n\n[6] Exit.\n\n");
    do
    {
        select = get_int("\n[*] Select ");
        if(select == 1)
        {
            create_acc();
        }
        else if(select == 2)
        {
            update_acc();
        }
        else if(select == 3)
        {
            transactions();
        }
        else if(select == 4)
        {
            acc_data();
        }
        else if(select == 5)
        {
            add_balance();
        }
        else if(select == 6)
        {
            printf("\n[X] Valar Bank Management Has Been Terminated.\n\n");
            return 0;
        }
    }while(select < 1 || select > 5);
}
// Create New Account Function
void create_acc(void)
{
    string fname;string lname;string phone;string id_number;string email;long account_number = 1471471470;int balance = 0;
    printf("\n-------------------------------\n");
    printf("| Bank Account Registeration  |");
    printf("\n-------------------------------\n\n");

    do{fname = get_string("\n[*] Client First Name: ");}while(strlen(fname) > 12 || strlen(fname) < 3);
    do{lname = get_string("\n[*] Client Last Name: ");}while(strlen(lname) > 12 || strlen(lname) < 5 ); 
    do{phone = get_string("\n[*] Client Phone Number:  ");}while(strlen(phone) > 11);
    email = get_string("\n[*] Client Email Address:  ");
    do{id_number = get_string("\n[*] Client National ID Number: ");}while(strlen(id_number) > 14 || strlen(id_number) < 14);
    printf("\n\n--------------------------------------\n");
    printf("| [!] Account Created Sucessfully.   |\n");
    printf("--------------------------------------\n\n");
    printf("-----------------------------------\n");
    printf("| Account Number\tBalance   |\n");
    printf("-----------------------------------\n");
    printf("| 147741147  \t\t%i\t  |\n",balance);
    printf("-----------------------------------\n");
    rerun();

}
// Update Existing Account Information Function
void update_acc(void)
{
    long acc_num;long acc_number = 123456789;int choice;string old_name = "Ahmed ElSharkawy";string old_email = "ahmed.elsharkawy.1121@gmail.com";
    string old_phone = "01245645687";string new_email;string new_name;string new_phone;
    do
    {
        acc_num = get_long("\n[*] Enter Client Account Number: ");
        if(acc_num == acc_number)
        {
            printf("\n---------------------------------------------------------------------------------------");
            printf("\n\n[1] Update Client Name.\n\n[2] Update Client Email Address.\n\n[3] Update Client Phone Number.\n\n");
            do
            {
                choice = get_int("[*] Select: ");
                if(choice == 1)
                {
                    printf("\n[!] Client Old Name Is: %s\n",old_name);
                    new_name = get_string("\n[*] Enter New Name: ");
                    printf("\n[!] Client New Name Is: %s\n",new_name);
                    printf("\n---------------------------------------------------------------------------------------\n");

                }
                else if(choice == 2)
                {
                    printf("\n[!] Client Old Email Is: %s\n",old_email);
                    new_email = get_string("\n[*] Enter New Email: ");
                    printf("\n[!] Client New Email Is: %s\n",new_email);
                    printf("\n---------------------------------------------------------------------------------------\n");

                }
                else if(choice == 3)
                {
                    printf("\n[!] Client Old Phone Number Is: %s\n",old_phone);
                    new_phone = get_string("\n[*] Enter New Phone Number: ");
                    printf("\n[!] Client New Phone Number Is: %s\n",new_phone);
                    printf("\n---------------------------------------------------------------------------------------\n");
                }         
            } while (choice < 1 || choice > 3);
        }
    }while (acc_num != acc_number);
    rerun();
}
// Transactions History Function
void transactions(void)
{
    string acc_num;
    mohamed1 tr[2];
    tr[0].acc_number = "123456789";tr[0].action = "Deposit";tr[0].date = "24/9/2022";tr[0].amount = "90000";
    tr[1].acc_number = "987654321";tr[1].action = "Deposit";tr[1].date = "24/9/2022";tr[1].amount = "77000";
    do
    {

        acc_num = get_string("\n[*] Enter Client Account Number: ");
        for(int x = 0; x < 2; x++)
        {
            if(strcmp(tr[x].acc_number,acc_num) == 0)
            {
                printf("\n\n[Account Last Transactions History In The Last 24 Hours]\n");
                printf("\n-------------------------------------------------------------------------\n");
                printf("| Account No.\t\tAction \t\tDate \t\tAmount  \t|\n");
                printf("-------------------------------------------------------------------------\n");
                printf("| %s\t\t%s\t\t%s\t%s\t\t%s",tr[x].acc_number,tr[x].action,tr[x].date,tr[x].amount,"|");
                printf("\n-------------------------------------------------------------------------\n");
            }
        }
    } while(strcmp(tr[0].acc_number,acc_num) != 0 && strcmp(tr[1].acc_number,acc_num) != 0);
    rerun();
}
// View Clients Data Function
void acc_data(void)
{
    string acc_num;
    mohamed data[2];
    data[0].name = "Ahmed Elmohammady";data[0].email = "mohamed.mostafa00011@gmail.com";data[0].phone_number = "01065465414";data[0].id = "29814253546510";data[0].balance = 650000;data[0].acc_number = "123456789";
    data[1].name = "Mostafa Elgebaly";data[1].email = "ahmed.elgebaly32121@gmail.com";data[1].phone_number = "01265485201";data[1].id = "29612652543121";data[1].balance = 340000;data[1].acc_number = "987654321";

    do
    {
        acc_num = get_string("\n[*] Enter Client Account Number: ");
        for(int x = 0; x < 2; x++)
        {
            if(strcmp(data[x].acc_number,acc_num) == 0)
            {
                printf("\n\n[Client Account Information]\n");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");
                printf("| Client Name\t\tClient Email\t\t\t Client Phone \t\tClient ID \t\tClient Balance | \n");
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("| %s\t%s\t %s\t\t%s\t\t %i\t%s",data[x].name,data[x].email,data[x].phone_number,data[x].id,data[x].balance,"       |");
                printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            }
        }    
    } while (strcmp(data[0].acc_number,acc_num) != 0 && strcmp(data[1].acc_number,acc_num) != 0);
    rerun();
}
// Adding Balance Function
void add_balance(void)
{
    long acc_num;int balance_in;int balance = 0;long acc_number = 123456789;

    printf("\n---------------------------------------------------------------------------------------\n");
    do 
    {
        acc_num = get_long("\n[*] Enter Client Account Number: ");
    }while(acc_num != acc_number);
        balance_in = get_int("\n[*] Enter The Amount Of Balance: ");
        if(acc_num == acc_number)
        {
            balance += balance_in;
            printf("\n\n[$] Balance Has Been Added Sucessfully.\n");
            printf("\n[$] Account Added Balance: %i%s",balance,".\n\n");
            printf("\n---------------------------------------------------------------------------------------\n");

        }
    rerun();
}
// Re Run Function
void rerun(void)
{
    char question;
    do
    {
        question = get_char("\n[?] Do You Wanna Do Another Action? (Y => Continue / N => Exit): ");
        if(question == 'Y' || question == 'y')
        {
            main();
        }
        else if(question == 'N' || question == 'n')
        {
            printf("\n[X] Valar Bank Management Has Been Terminated.\n\n");
        }
    }while(question != 'Y' && question != 'y' && question != 'N' && question != 'n');
}