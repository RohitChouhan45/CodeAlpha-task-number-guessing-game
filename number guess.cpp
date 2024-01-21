#include <iostream.h>
#include <stdlib>
#include <ctime>
using namespace std;
int main()
{
       int num, guess, tries = 0;
        srand(time(0));
        num = rand() % 100 + 1;
        cout<<"Welcome to the Number Game\n";
        do
        {
             cout<<"Enter a guess between 1 and 100 : ";
             cin>> guess;
             tries++;
             if (guess>num)
                cout<<"Too High\n";
            else if(guess<num)
                cout<<"Too Low\n";
            else
                cout<<"\nCorrect! You got it in "<<tries<<"guesses!\n";

        }   
        while(guess != num);
        return 0;
}