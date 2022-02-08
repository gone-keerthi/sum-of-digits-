//program to find sum of individual digits of a positive integer
#include<iostream>
using namespace std;
int main()
{
    int num, sum=0, rem;
    cout<<"enter a number: ";
    cin>>num;
    while(num>0)
    {
        rem=num%10; //entered number is divided by 10 and reminder is stored in variable rem
        sum=sum+rem; //add the reminder to sum variable 
        num=num/10; //divide the number by 10 and store the result in num variable and
                        // values gets updated and excution all the steps untill number value greater than zero
    }
    cout<<"sum of the digits of entered number is: "<<sum<<endl;
    return 0;
}