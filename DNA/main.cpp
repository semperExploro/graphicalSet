#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>
#include <ctime>
#include "Terminal.h"

using namespace std;
using std::this_thread::sleep_for;

void getColor()
{

    //TODO, GET RANDOM NO
    int randomNumber = rand()%6;
    //TODO SET COLORS

    if(randomNumber==0){
Terminal::color_fg(false, Terminal::BLUE);
    }else if(randomNumber==1){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==2){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==3){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==4){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==5){
Terminal::color_fg(false, Terminal::MAGENTA);
    }

  
}
int main()
{
    srand(time(0));

    for (int count = 0; count < 20; count++)
    {
        for (int i = 0; i < 10; i++)
        {
            int remainingSpaces = 0;
            for (int k = 0; k < i / 2; k++)
            {
                remainingSpaces = k;
                cout << " ";
                sleep_for(std::chrono::milliseconds(1));
            }

            //set the color of the console
            getColor();

            cout << "=";

            for (int l = remainingSpaces; l < 10 - i / 2; l++)
            {
                sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
            //set the color of the console
            getColor();

            cout << "=";

            cout << endl;
        }
        for (int i = 10; i > 0; i--)
        {
            int remainingSpaces = 0;
            for (int k = 0; k < i / 2; k++)
            {
                sleep_for(std::chrono::milliseconds(1));

                remainingSpaces = k;
                cout << " ";
            }
            //set the color of the console
            getColor();

            cout << "=";

            for (int l = i; l < 10; l++)
            {
                sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
             //set the color of the console
            getColor();

            cout << "=";

            cout << endl;
        }
    }
}
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>
#include <ctime>
#include "Terminal.h"

using namespace std;
using std::this_thread::sleep_for;

void getColor()
{

    //TODO, GET RANDOM NO
    int randomNumber = rand()%6;
    //TODO SET COLORS

    if(randomNumber==0){
Terminal::color_fg(false, Terminal::BLUE);
    }else if(randomNumber==1){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==2){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==3){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==4){
Terminal::color_fg(false, Terminal::MAGENTA);
    }else if(randomNumber==5){
Terminal::color_fg(false, Terminal::MAGENTA);
    }

  
}
int main()
{
    srand(time(0));

    for (int count = 0; count < 20; count++)
    {
        for (int i = 0; i < 10; i++)
        {
            int remainingSpaces = 0;
            for (int k = 0; k < i / 2; k++)
            {
                remainingSpaces = k;
                cout << " ";
                sleep_for(std::chrono::milliseconds(1));
            }

            //set the color of the console
            getColor();

            cout << "=";

            for (int l = remainingSpaces; l < 10 - i / 2; l++)
            {
                sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
            //set the color of the console
            getColor();

            cout << "=";

            cout << endl;
        }
        for (int i = 10; i > 0; i--)
        {
            int remainingSpaces = 0;
            for (int k = 0; k < i / 2; k++)
            {
                sleep_for(std::chrono::milliseconds(1));

                remainingSpaces = k;
                cout << " ";
            }
            //set the color of the console
            getColor();

            cout << "=";

            for (int l = i; l < 10; l++)
            {
                sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
             //set the color of the console
            getColor();

            cout << "=";

            cout << endl;
        }
    }
}
