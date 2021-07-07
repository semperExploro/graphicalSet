#include <iostream>
#include <string>
#include "Terminal.h"
#include <fstream>
#include <vector>

using namespace std;

void loadFile(string (&inputArray)[26][7])
{
    ifstream myfile("ascii letters.txt");
    if (!myfile.is_open())
    {
        cout << "WARNING file is missing" << endl;
    }

    for (int letterIndex = 0; letterIndex < 26; letterIndex++)
    {
        for (int i = 0; i < 7; i++)
        {
            string readLine = "";
            getline(myfile, readLine);
            // cout << "readline value " << readLine << endl;
            readLine = readLine.substr(0, 10);
            inputArray[letterIndex][i] = readLine;
        }
    }
    myfile.close();
}

void printLetters(string (&inputArray)[26][7])
{

    for (int col = 0; col < 7; col++)
    {
        for (int row = 0; row < 26; row++)
        {
            cout << inputArray[row][col];
        }
    }
    cout << endl;
}

void initializeLetterSet(char (&inputArray)[26])
{
    for (int i = 0; i < 26; i++)
    {
        inputArray[i] = i + 'a';
    }
}

void initializeVector(vector<char> &userSet, string userInput)
{
    for (int i = 0; i < userInput.length(); i++)
    {
        userSet.push_back(userInput[i]);
    }
}

void print(string (&characters)[26][7], vector<char> &userSet, vector<char> &colors)
{

    for (int col = 0; col < 7; col++)
    {
        for (int i = 0; i < userSet.size(); i++)
        {
            if (userSet[i] == 32)
            {
                cout << "\t";
                continue;
            }
            char workingChar = userSet[i] - 'a';

            cout << characters[workingChar][col] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    string characters[26][7];
    char characterSet[26];
    vector<char> userSet;
    loadFile(characters);
    initializeLetterSet(characterSet);
    //TODO get user input
    string userInput;
    cout << "Please enter in your phrase" << endl;
    getline(cin, userInput);

    //TODO count total colors
    int count = 0;
    for (int i = 0; i < userInput.length(); i++)
    {
        if(userInput[i]==32){
            count++;
        }
    }

    //TODO get users preferences of colors
    cout << "What colors do you want" << endl;
    cout << "\t B - blue" << endl;
    cout << "\t G - green" << endl;
    cout << "\t Y - yellow" << endl;
    cout << "\t W - white" << endl;

    vector<char> colors;
    for(int i =0;i<colors.size();i++){
        char input;
        cout<<i<<" color"<<endl;
        cin>>input;
        colors.push_back(input);
    }

    //end of userInput
    initializeVector(userSet, userInput);
    print(characters, userSet, colors);
    cout << "Program has finished" << endl;
    return 0;
}