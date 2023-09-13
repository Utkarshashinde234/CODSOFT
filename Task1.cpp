#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout<<"\n\t\t**************************welcome to game**************\n"<<endl;
    cout<<"\n\t\t_____>>you will have guess a number between 1 to 100";
    cout<<"_____Lets play and best of luck"<<endl;

    srand(time(0));
    int randNumber = ( rand() %100 ) + 1;

    cout<< "\n^^**you will have total 5 chances to guess a correct number.**^^\n";
    int chanceLeft = 5;
    int playerInput;

    for(int i = 1;i < 5; i++)
    {
        cout<<"\n****Enter a number:";
        cin>>playerInput;

        if(playerInput == randNumber)
        {
            cout<<"\ncongratulations!!.you have succesfully pass the right number\n";
            cout<<"\nThanks for playing ..have a nice day";
            break;
        }
        else
        {
            if(playerInput > randNumber)
            {
                cout<<"\n""[insert a smaller Number . Try Again"""<<endl;
            }
            else
            {
                cout<< "\n""[ Insert a larger Number .Try Again]"""<<endl;
            }
        }
        chanceLeft --;
        cout<< "\n( chances Left to guess the Randon Number:" << chanceLeft <<")"<<endl;
        
        if (chanceLeft == 0)
        {
            cout<<"\n Sorry your chance has been finished toguess the random number\n"<<endl;
            cout<<"The random number was:" << randNumber <<endl;
            cout<<"Thanks for playing having a nice day"<<endl;
        }
     }
     cout<< "\n ";
     return 0;
}


