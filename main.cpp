#include <cstdio>

int main(){ // main part of any code  
  int x;    // define int variable    
  int y(10);// initialize int variable x with value 10  
  printf("Hello, world!"); // print to terminal a STRING  
  if(true)printf("true!"); // if statement(condition) statement  
                           // true and false hold their boolean values  
  if(y==10)printf("y=10!");// comparison operators use symbols  
                           // not as in FORTRAN!   
  if(!false)printf("wow not false is true!"); // not (!), AND (&&), and OR (||) are logical operators as well        
  if(y>=5 && y<=20)printf("5<=y<=20"); // example of logical operators use  
  if(false){ //open a bracket to have more than one statement   
  printf("one statement");
  printf("two statement");
  }
  else if(true)printf("else if TRUE!"); //else if statement  
  else printf("everything before was FALSE!");//else statement   
  //IMPORTANT IF: once a boolean expression gives true, no other will be tested  
  //IMPORTANT IF: and its statements will be evaluated  
  return 0;
}
