//SuperMathEquation.cpp
//G. Li
//5/26/23
//simple solving math equation using OOP

#include <iostream>
#include <math.h>

//NumberValue Class
class NumberValues{

  public: //method with pararmeters
  double  getTotalValue(float pie, int n1, int n2, int n3, 
                      double total);
  
  double getTotalValue2(float pie, int n1, int n2, int n3, 
                      double total2);
};

//accessing the method
double NumberValues::getTotalValue(float pie, int n1, int n2, int n3, 
                      double total) {
  
  //simple equation what the user decide to plug in
  total = pie * (n1 + n2 + n3);

  std::cout<< "Your total is " << total << "\n";
  
  return total;
}  

double NumberValues::getTotalValue2(float pie, int n1, int n2, int n3, 
                      double total2) {
  
  //simple equation what the user decide to plug in
  total2 = pie * (n1 - n2 - n3);

  std::cout<< "Your total is " << total2;
  
  return total2;
}  

int main() {

  NumberValues numValues;
  
  float pieValue = 3.14;

  //user's choice of numbers
  int num1;
  int num2;
  int num3;

  //use for the total values
  double totalValue;
  double totalValue2;

  //test the answer if it true
  bool testValue;

  //welcome for the Math Equation and the user enter 3 values
  std::cout<<"Welcome to the Super Math Equation!";
  std::cout<<"\nPlease enter values for n1, n2, n3\n";
  scanf("%d %d %d", &num1, &num2, &num3);

  //getting the method
  numValues.getTotalValue(pieValue,num1, num2, num3, totalValue);
  numValues.getTotalValue2(pieValue,num1, num2, num3, totalValue2);
  
  //printing the value
  //std::cout<<numValues.getTotalValue(totalValue, num1, num2, num3, pieValue);
  //std::cout<<numValues.getTotalValue2(totalValue2, num1, num2, num3, pieValue);

  //test solution
  if((testValue = true) && (totalValue <100))
    std::cout<<"\nCongrats you got the right answer.";
  else(testValue = false && totalValue >100);
    std::cout<<"\nSorry it failed.";
  return 0;
}