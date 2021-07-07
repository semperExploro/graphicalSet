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
    int color = rand() % 7;
   // cout<<"color "<<color<<endl;
    //TODO SET COLORS

    //TODO, GET COLORS
    switch (color)
    {
    case 1:
        Terminal::color_fg(false, Terminal::BLUE);
        break;
    case 2:
        Terminal::color_fg(false, Terminal::GREEN);
        break;
    case 3:
        Terminal::color_fg(false, Terminal::YELLOW);
        break;
    case 4:
        Terminal::color_fg(false, Terminal::WHITE);
        break;
    case 5:
        Terminal::color_fg(false, Terminal::MAGENTA);
        break;
    case 6:
        Terminal::color_fg(false, Terminal::BROWN);
        break;
    default:
        Terminal::color_fg(false, Terminal::DEFAULT_COLOR);
        break;
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
            getColor();

            cout << "=";

            for (int l = remainingSpaces; l < 10 - i / 2; l++)
            {
                sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
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
            getColor();

            cout << "=";

            for (int l = i; l < 10; l++)
            {
                sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
            getColor();

            cout << "=";

            cout << endl;
        }
    }
}