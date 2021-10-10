/*Objective : the main obejctive of this program is to Create two sets of classes where the first class object allows you to store the value of distance in meters and centimetres. And the second class object stores the distance in feet and inches. Design a program in such a way so that it can read values of both the class objects and add objects of first with the second. And the final output displayed should be in the feet and inches OR metres and centimetres.
Author : L Adarsh Kumar 
Created on : 10/10/2021
Modified on:
Dependencies : None
  */
//the preprocessor segment including the required files during the compilation
#include<iostream>
#include<cstring>
using namespace std;
class bank
{
int acno;
char AccountHolderName[25], Account_Type[25],city[25];
float bal;  
public:
bank(int acc_no, char *name, char *acc_type,char * place, float Balance)  //Parameterized Constructor
{
acno=acc_no;
strcpy(AccountHolderName, name);
strcpy(Account_Type, acc_type);
strcpy(place,city);
bal=Balance;
}
void deposit();
void withdraw();
void Show();
void interest();
};
void bank::deposit()   //depositing an amount
{
int DepositAmmount1;
cout<<" Enter Deposit Amount = "<<endl;
cin>>DepositAmmount1;
bal+=DepositAmmount1;
}
void bank::withdraw()  //withdrawing an amount
{
int WithdrawAmmount1;
cout<<" Enter Withdraw Amount = "<<endl;
cin>>WithdrawAmmount1;
if(WithdrawAmmount1>bal)
cout<<" Cannot Withdraw Amount"<<endl;
bal-=WithdrawAmmount1;
}
void bank :: interest()
{
  float  Rate = 0.05;
  int Time; //in days;
  cout<<"please enter your how many days are over after you deposited the amount: ";
  cin>>Time;
  if(Time>30)
  {
    /* Calculate simple interest */
    float SI = (bal * Time * Rate) / 100;
  
    /* Print the resultant value of SI */
    cout << "Simple Interest = " << SI<<endl;
    bal =bal+SI;
    cout<<"your balance after adding interset is"<<bal<<endl;
  }
  else
  {
    cout<<"you need to keep 30 days to get interest";
  }
 
}
void bank::Show()  //Showing the details
{
cout<<" *************"<<endl;
cout<<" Accout No. : "<<acno;
cout<<" Name : "<<AccountHolderName;
cout<<"city : "<<city;
cout<<" Account Type : "<<Account_Type;
cout<<" Balance : "<<bal;  
}
int main()
{
  int i,n;
  cout<<"enter how many user account you want  :"<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  {
    int acc_no;
    char name[25], acc_type[25],city[25];
    float Balance;
    int x;
    cout<<" Enter Details: "<<endl;
    cout<<"***********"<<endl;
    cout<<" enter you account number "<<endl;
    cin>>acc_no;
    cout<<" enter your Name : "<<endl;
    cin>>name;
    cout<<"enter your city :"<<endl;
    cin>>city;
    cout<<" Account Type : "<<endl;
    cin>>acc_type;
    cout<<" Balance : "<<endl;
    cin>>Balance;
    bank b1(acc_no, name, acc_type, city , Balance);  //object is created
    cout<<"1.Deposit\n2.Withdraw\n3.To calculate Interest\n4.View account details\n";
    cout<<"Enter choice no.: ";
    cin>>x;
      switch (x)
      {
        case 1:
        {
          b1.deposit();
          break;
        }
        case 2:
        {
          b1.withdraw(); // calling member functions
          break;
        }
        case 3:
        {
          b1.interest();
          break;
        }
        case 4:
        {
          b1.Show(); //
          break;
        }
      }
  }
}