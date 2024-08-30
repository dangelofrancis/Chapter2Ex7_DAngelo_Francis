/*
TITLE: Chapter 2 Exercise 7 - Ocean Levels
FILE NAME: Chapter2Ex7_DAngelo_Francis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 8/2024
REQUIREMENTS:Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, 
write a program that displays:
• The number of millimeters higher than the current level 
        that the ocean’s level will be in 5 years.
• The number of millimeters higher than the current level 
        that the ocean’s level will be in 7 years.
• The number of millimeters higher than the current level 
        that the ocean’s level will be in 10 years.
Once you have coded this and placed in your main branch in GitHub, 
create a second branch that revises your code so that the user can enter the number of the 
number of millimeters the ocean level rises per year..
*/

#include <iostream>
using namespace std;
//const double levelRise = 1.5;

int main()
{
    double levelRise;
    double yearLevel5;
    double yearLevel7;
    double yearLevel10;
    cout << "Please enter the millimeter rise you expect each year:";
    cin >> levelRise;
    yearLevel5 = levelRise * 5;
    yearLevel7 = levelRise * 7;
    yearLevel10 = levelRise * 10;

    cout << "After 5 years the ocean will have risen " << yearLevel5 << " millimeters." << endl;
    cout << "After 7 years the ocean will have risen " << yearLevel7 << " millimeters." << endl;
    cout << "After 10 years the ocean will have risen " << yearLevel10 << " millimeters." << endl;
    return 0;
}

