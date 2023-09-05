// exFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool win = false;
    bool players = false;
    int i, j, k;
    int x1, y1, x2, y2, x3, y3, width, height;
    int turn = 0;
    int choice;

 

        bool x1check = false, x2check = false, y1check = false, y2check = false;
        bool x3check = false, y3check = false, widthCheck = false, heightCheck = false, matCheck = false;
     

        // Getting the players' locations

        while (x1check == false)
        {
            cout << "Welcome to 'Winner's Mat'" << endl << endl << "Enter first player's location: " << endl << "X --> ";
            cin >> x1;
            if (x1 > 30 || x1 < 1)
            {
                cout << "Value must be between 1 and 30" << endl << endl;
            }
            else
            {
                x1check = true;
                break;
            }
        }
        while (y1check == false)
        {
            cout << "Y --> ";
            cin >> y1;
            cout << endl;
            if (y1 > 30 || y1 < 1)
            {
                cout << "Value must be between 1 and 30" << endl << endl;
            }
            else
            {
                y1check = true;
                break;
            }
        }
        while (x2check == false)
        {
            cout << "Enter second player's location: " << endl << "X --> ";
            cin >> x2;
            if (x2 > 30 || x2 < 1)
            {
                cout << "Value must be between 1 and 30" << endl << endl;
            }
            else
            {
                x1check = true;
                break;
            }
        }
        while (y2check == false)
        {
            cout << "Y --> ";
            cin >> y2;
            cout << endl;
            if (y2 > 30 || y2 < 1)
            {
                cout << "Value must be between 1 and 30" << endl << endl;
            }
            if ((x2 == x1) && (y2 == y1))
            {
                cout << "Players can't start on the same square" << endl << endl;
            }
            else
            {
                y2check = true;
                break;
            }
        }

        // Getting the winners mat's location and size

        while (x3check == false)
        {
            cout << "Enter winners mat's top-left corner location: " << endl << "X --> ";
            cin >> x3;
            if (x3 > 30 || x3 < 1)
            {
                cout << "Value must be between 1 and 30" << endl << endl;
            }
            else
            {
                x3check = true;
                break;
            }
        }
        while (y3check == false)
        {
            cout << "Y --> ";
            cin >> y3;
            cout << endl;
            if (y3 > 30 || y3 < 1)
            {
                cout << "Value must be between 1 and 30" << endl << endl;
            }
            else
            {
                y3check = true;
                break;
            }
        }
        while (matCheck == false)
        {
            while (widthCheck == false)
            {
                cout << "Enter winners mat's width: " << endl;
                cin >> width;
                cout << endl;
                if (x3 + width > 31 || width < 1)
                {
                    cout << "Value is out of bounds" << endl << endl;
                }
                else
                {
                    widthCheck = true;
                    break;
                }
            }
            while (heightCheck == false)
            {
                cout << "Enter winners mat's height: " << endl;
                cin >> height;
                if (y3 + height > 31 || height < 1)
                {
                    cout << "Value is out of bounds" << endl << endl;
                }
        
                else
                {
                    heightCheck = true;
                    cout << endl << endl;
                    break;
                }
            }
            if ((x1 >= x3 && x1 < x3 + width) && (y1 >= y3 && y1 < y3 + height) || (x2 >= x3 && x2 < x3 + width) && (y2 >= y3 && y2 < y3 + height))
            {
                cout << "Players can't start on the winners mat" << endl << endl;
            }   
            else
            {
                matCheck = true;
                break;
            }
        }
        
        // Building the game map

        cout << "GAME MAP" << endl << endl;

        for (i = 0; i <= 31; i++)
        {
            cout << '#';
        }
        cout << endl;
        for (i = 0; i < 30; i++)
        {
            cout << '#';
            for (j = 0; j < 30; j++)
            {
                if (i == y1 && j == x1)
                {
                    cout << '1';
                    j = x1 + 1;
                }
                if (i == y2 && j == x2)
                {
                    cout << '2';
                    j = x2 + 1;
                }
                if ((i >= y3 && i < y3 + height) && (j >= x3 && j < x3 + width))
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }

            cout << '#' << endl;
        }
        for (i = 0; i <= 31; i++)
        {
            cout << '#';
        }
        cout << endl << endl;

        // Starting the game

        while (win == false)
        {
            cout << "Player " << (turn % 2) + 1 << ", please enter your choice:" << endl << endl
                 << "1 --> Move up" << endl
                 << "2 --> Move down" << endl
                 << "3 --> Move right" << endl
                 << "4 --> Move left" << endl << endl;
            cin >> choice;
            
            switch (choice)
            {
                case 1:
                {
                    if (turn % 2 + 1 == 1)
                    {
                        y1 -= 1;
                        turn += 1;
                        if (y1 == 31)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                    else
                    {
                        y2 -= 1;
                        turn += 1;
                        if (y2 == 31)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                }
                case 2:
                {
                    if (turn % 2 + 1 == 1)
                    {
                        y1 += 1;
                        turn += 1;
                        if (y1 == 0)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                    else
                    {
                        y2 += 1;
                        turn += 1;
                        if (y2 == 0)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                }
                case 3:
                {
                    if (turn % 2 + 1 == 1)
                    {
                        x1 += 1;
                        turn += 1;
                        if (x1 == 31)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                    else
                    {
                        x2 += 1;
                        turn += 1;
                        if (x2 == 0)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                }
                case 4:
                {
                    if (turn % 2 + 1 == 1)
                    {
                        x1 -= 1;
                        turn += 1;
                        if (x1 == 0)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                    else
                    {
                        x2 -= 1;
                        turn += 1;
                        if (x2 == 0)
                        {
                            cout << endl << "Choice invalid, player is out of bounds" << endl << endl;
                        }
                        break;
                    }
                }
                default:
                {
                    cout << endl << "Choice invalid, try again" << endl << endl;
                    break;
                }
            }
            if (((x1 == x3) || (x1 == x3 + width - 1)) && ((y1 == y3) || (y1 == y3 + height - 1)))
            {
                cout << endl << "PLAYER 1 WON!" << endl << endl;
                win == true;
                break; 
            }
            if (((x2 == x3) || (x2 == x3 + width - 1)) && ((y2 == y3) || (y2 == y3 + height - 1)))
            {
                cout << endl << "PLAYER 2 WON!" << endl << endl;
                win == true;
                break;
            }
            else
            {
                for (i = 0; i <= 31; i++)
                {
                    cout << '#';
                }
                cout << endl;
                for (i = 0; i < 30; i++)
                {
                    cout << '#';
                    for (j = 0; j < 30; j++)
                    {
                        if (i == y1 && j == x1)
                        {
                            cout << '1';
                            j = x1 + 1;
                        }
                        if (i == y2 && j == x2)
                        {
                            cout << '2';
                            j = x2 + 1;
                        }
                        if ((i >= y3 && i < y3 + height) && (j >= x3 && j < x3 + width))
                        {
                            cout << '*';
                        }
                        else
                        {
                            cout << ' ';
                        }
                    }

                    cout << '#' << endl;
                }
                for (i = 0; i <= 31; i++)
                {
                    cout << '#';
                }
                cout << endl << endl;
            }
        }
}

