#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using std::this_thread::sleep_for;

int main()
{

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
            cout << "=";

            for (int l = remainingSpaces; l < 10 - i / 2; l++)
            {
                            sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
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
            cout << "=";

            for (int l = i; l < 10; l++)
            {
                            sleep_for(std::chrono::milliseconds(1));

                cout << " ";
            }
            cout << "=";

            cout << endl;
        }
    }
}