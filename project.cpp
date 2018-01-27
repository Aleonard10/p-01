//Author: Alex leonard
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int MAX = 100; //Number to be used in loops to limit max user input and set the array size
    int Largest; //variable to store the largest number
    int tempLarge; //temporary variable used to store largest number
    int temp; //variable used to store data temporarily
    Largest = 0; //sets the initial value of largest
    int array[MAX]; //variable declaration for array to store user inputs
    int sizeOfArray = 0; // variable that will save the size of the array as the user adds to it
    for (int i = 0 ; i < MAX ; i++) // loop that allows user to input up to 100 integers
    {
        cin >> array[i];
        if (array[i] == 0) //checks if the user entered 0 (Exits the loop)
        {
            i = MAX;
        }
        else if (array[i] < 0) // checks if the user entered a negative number (Not accepted by program)
        {
            i--; //reverts loop by one and allows user to re-enter a value
        }
        else //if it isnt 0 or negative this executes
        {
            sizeOfArray++; //the variable that stores size of array is incremented by 1
            temp = array[i];
            if (Largest < temp)// checks if there is a new largest value and then sets it as the "Largest" variable if it is
            {
                tempLarge = temp;
                Largest = tempLarge;
            }
        }    
        
    }

    
    int row;
    int col;
    col = sizeOfArray; //variables used to set the 
    row = Largest;     //size of the vector of vector of characters
    if (row > 0 && col > 0)
    {

        vector<vector<char> >stars(row, vector<char>(col)); // vector of vector of characters used to store stars
        int i;
        for (int r = 0; r < Largest; r++) //this set of loops adds spaces to every cell of the vector of vector of characters
        {
            for (int c = 0; c < sizeOfArray; c++)
            {
                stars[r][c] = ' ';
            }
        }
        
        for (int c = 0; c < sizeOfArray; c++) // adds stars starting from the bottom left and going to top right
        {
            for (int r = Largest; r > Largest-array[c]; r--)
            {
                stars[r-1][c] = '*';
            }
        }
        
        for (int r = 0; r < Largest; r++) //outputs the stars for the user to see
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
