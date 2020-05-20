#include <iostream>
#include <string>
using namespace std;

int userToVote[20]={0};
int number;

int main()
{
    for(int i = 0;i<20;i++)
    {
        for(int z = 0;z<3;z++)
        {
            cout << "Hello player "<< i << " This is your chance "<<z+1<<" to which player you want to vote?";
            cin >> number;
            cout << userToVote[number]++;
        }
    }

}