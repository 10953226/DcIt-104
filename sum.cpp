# include <iostream>
using namespace std;
int main()
{
   //Declaring variables
 int n, i, upto, sum = 2;

   //Accepting input
   cout << "Calculate the sum of all prime numbers less than: ";
   cin >> upto;

     for(n = 1; n <= upto; n++)
      {
         for(i = 2; i <= (n / 2); i++) 
             {
               if(n % i ==0)
                 {
                    i = n;
                    break;
                 }

             }
         if(i != n)
             {
                sum +=n;
             }
      }
   cout << endl << "The sum of all prime numbers upto " << upto << " is " << sum;
       return 0;
}