//Author: Alex leonard
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int MAX = 100;
    int Largest;
    int tempLarge;
    int temp;
    Largest = 0;
    int array[MAX];
    int sizeOfArray = 0;
    cout << "Enter up to " << MAX << " positive integers." << endl;
    cout << "Enter 0 when you want to stop inputting values." << endl;
    for (int i = 0 ; i < MAX ; i++)
    {
        cout << "Enter a number" << endl;
        cin >> array[i];
        if (array[i] == 0)
        {
            i = MAX;
        }
        else if (array[i] < 0)
        {
            cout << "Negative numbers are not accepted, try again." << endl;
            i--;
        }
        else
        {
            sizeOfArray++;
            temp = array[i];
            if (Largest < temp)
            {
                tempLarge = temp;
                Largest = tempLarge;
            }
        }    
        
    }

    
    int row;
    int col;
    col = sizeOfArray;
    row = Largest;
    if (row > 0 && col > 0)
    {

        vector<vector<char> >stars(row, vector<char>(col));
        int i;
        for (int r = 0; r < Largest; r++)
        {
            for (int c = 0; c < sizeOfArray; c++)
            {
                stars[r][c] = ' ';
            }
        }
        
        for (int c = 0; c < sizeOfArray; c++)
        {
            for (int r = Largest; r > Largest-array[c]; r--)
            {
                cout << r << ", " << c << ", " <<array[c] << endl;
                
                stars[r-1][c] = '*';
            }
        }
            
        cout << sizeOfArray << endl;
        cout << Largest << endl;
        for (int r = 0; r < Largest; r++)
        {
            for(int c = 0; c < sizeOfArray ;c++)
            {
                cout << stars[r][c];
            }
            cout << endl;
        }
        
    }
    else
    {
        return 0;
    }
    return 0;
    
}
