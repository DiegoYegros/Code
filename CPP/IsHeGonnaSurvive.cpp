/*A hero is on his way to the castle to complete his mission. 
However, he's been told that the castle is surrounded with a couple of powerful dragons! 
each dragon takes 2 bullets to be defeated, our hero has no idea how many bullets he should carry.. 
Assuming he's gonna grab a specific given number of bullets and move forward to fight another specific given number of dragons, 
will he survive?
Return True if yes, False otherwise :) */
#include <iostream>
using namespace std;
int main(){
 bool hero(int bullets, int dragons) {
    int y = 0;
for(int x=0; x<dragons*2; x++){
    if(y<bullets){
        y++;
    }
    else{
        return false;
    }
}
  return true;
} 