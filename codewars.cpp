#include <iostream>
using namespace std;
long long rowSumOddNumbers(unsigned n){
  int numberofrow=0;
  int number =0;
  int row = n;
  int oddnumber =0;
  int sum = 0;
  for (numberofrow<=row; numberofrow++)
    {
    int oddsquantity = 0;
      while (oddsquantity!=numberofrow){
      	if (number%2==1){
      		oddnumber = number;
      		oddsquantity++;
		  }
      	number++;
	  }
    }

  if (numberofrow-1 == row)
  {
	int oddsquantity = 0;
	int number = oddnumber;
  	while (oddsquantity !=row){
    	if (number%2==1){
    			sum+=number;
    			oddsquantity+=1;
	}
	number--;
    }
  }
  return sum; 
}
int main()
{
    cout<<rowSumOddNumbers(2);
    return 0;
}
