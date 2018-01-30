//Project 1
//Bauer, Greg
//gbauer1
#include <iostream>
#include <string>

using namespace std;

int findLargest();

int const MAX = 100;

int main()
{
        int line[MAX] ={ 0 };
        int userInput;

        cout<<"Enter up to 100 intergers greater than 0"<<endl;
        cout<<"Enter 0 when finished"<<endl;
        //asks user for what they want to input
        cin>>userInput;


        for( int i = 0; i < MAX; i++)
        {
                if(userInput > 0)
                {
                        line[i] = userInput;                 
                }
                else
                {
                        break;
                }

        }
        //verifies user input isn't negative, then breaks if not

        int largest = findLargest(int line);

        for(int i = 0; i < MAX; i++)
        {
                if(line[i] >= largest)
                {
                        largest = line[i];
                }
        }

        return 0;
}

int findLargest(int line[])
{
        int largest = 0;

        for(int i = 0; i < MAX; i++)
        {
                if(line[i] >= largest)
                {
                        cout<<"*";
                }
                else
                {
                        cout<< " ";
                }
        }
        cout << endl;

        return largest;
}

