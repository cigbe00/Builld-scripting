#include <stdio.h>
#include <stdlib.h>
//This code simulates an online banking mech

typedef struct{

  char* firstname;
  char*lastname;
  int age;
  double accountbalance;
}customer;

void setcustomerinfo(customer * x)
{
  x->firstname="john";
  x->lastname="macfason";
  x->age=29; 
  
}

void calcBalance(customer * y)
{
  y->accountbalance=200662167.23;

  

}


int main()
{
  customer john;
  setcustomerinfo(&john);
  calcBalance(&john);
  printf("***********customer account info**************** \n");
  printf("Customer name: %s %s \n",john.firstname,john.lastname);
  printf("%s %s's age: %d \n",john.firstname,john.lastname,john.age);
  printf("Account balance: %f \n",john.accountbalance);

  customer johnson;
  int x=2;
  johnson.age=(customer *) &x;
  x++;
  printf("%s %s's new age: %d \n",john.firstname,john.lastname,johnson.age);

 customer * ada = malloc(sizeof(customer));
 ada->lastname="igbe";
 printf("Ada %s \n ", ada->lastname);

}




