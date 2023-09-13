#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char x;
    
    int num=true;
    while (num)
    {

    cout<<"Enter first number"<<endl;
    cin>>num1;

    cout<<"Enter second number"<<endl;
    cin>>num2;

    cout<<"use a for addition"<<endl;
    cout<<"use b for substraction"<<endl;
    cout<<"use c for multiplication"<<endl;
    cout<<"use d for division"<<endl;
    
    
    cin>>x;

    if (x=='a')
    cout<<"The sum ="<<num1+num2<<endl;


    else if (x=='b')
    cout<<"The substarction ="<<num1-num2<<endl;


    else if(x=='c')
    cout<<"The multiplication ="<<num1*num2<<endl;

    else if(x=='d')
    cout<<"The division ="<<num1/num2<<endl;

    

    else if (x==0)
    {
        num=false;
    }

    else 
    cout<<"Invalid operation"<<endl;


    cout<<"********************Thank you************************"<<endl;
   
   }

    return 0;
}