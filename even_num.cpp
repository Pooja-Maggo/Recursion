#include <iostream>
using namespace std;
void printEvenNum(int n)
{
    if (n<=20){
        if (n%2==0)
        cout << n << endl;
        printEvenNum(n+1);
    }
}
int main()
{
    printEvenNum(0);
   return 0;
}
