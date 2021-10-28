// Cheesy Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    //displaying welcome message
    cout << "***********************************************************" << endl;
    cout << "*************** Lets make some cheese! **************" << endl;
    cout << "***********************************************************" << endl;
    cout << "\n" << endl;
    //declaring constants
    const float chs_per_cont = 2.76, cost_per_cont = 4.12, profit_per_cont = 1.45;
    int cheese, containers;
    float cost, profit;
    //taking input from the user
    cout << "Please Enter the total number of kilograms of cheese produced:";
    cin >> cheese;
    containers = cheese / chs_per_cont + 1;
    cout << "The number of containers to hold the cheese is:..............." << containers << endl;
    //calculating profit and cost
    profit = containers * profit_per_cont;
    cost = containers * cost_per_cont;
    //displaying the result
    cout << "The cost for producing " << containers << " container(s) of cheese is:.........." << cost << endl;
    cout << "The proft for producing " << containers << " container(s) of cheese is:.........." << profit << endl;
    return 0;
}