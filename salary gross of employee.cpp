#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate the
// salary of the person
int computeSalary(int basic,
                char grade)
{
    int allowance;
    double hra, da, pf;
 
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
 
    // Condition to compute the
    // allowance for the person
    if (grade == 'A') {
        allowance = 1500;
    }
    else if (grade == 'B') {
        allowance = 1900;
    }
    else {
        allowance = 1400;
    }
    int gross;
 
    // Calculate gross salary
    gross = round(basic + hra + da + allowance - pf);
    return gross;
}
 
// Driver Code
int main()
{
    int basic = 10000;
    char grade = 'A';
 
    cout << computeSalary(basic, grade);
}
