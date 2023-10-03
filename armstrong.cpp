#include<iostream>
using namespace std;
int main()
{
    int n, num, rem, sum = 0;
    cout << "Enter a positive  integer: ";
    cin >> num;
    n = num;
    while(n != 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if(sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}