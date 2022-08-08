#include <iostream>
#include <iomanip>

using namespace std;

int main()

  { 
      int i=1, sum=0, count=0; 
    while( i++<=10000 )
      {
          if( i%2 == 0 )
          {
              sum += i;
              count++;
          }
      }
      
      cout<<"The number of even numbers between 1 and 10000 is "<<count<<endl;
      cout<<"The sum of all even numbers between 1 and 10000 is "<<sum<<endl;
      cout<<"The average of all even numbers between 1 and 10000 is "<<fixed<<setprecision(3)<<((double) sum / count)<<endl;
      return 0;
  }