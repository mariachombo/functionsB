//Maria Chombo
//15 October 2015
//Description: write a single program which implements all of the functions assigned, one function at a time.

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std; 

double feetToInches(double val);
void  feetToInches(double&  val);
double computeRectangle(double valA, double valB);
void computeArea (double valA, double valB, double& valC);
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double& perimeter);
double calcArea(double length, double width);
int main()
{
    /*double valA=2;
    double valB=4;  
    double valC = 3;
    double valD = 2;
    double num, num2;
    
    computeArea (valA, valA,num);
    
  
    computerArea (valA, valB);*/
    
    
    assert (feetToInches(12) == 144);
    assert (feetToInches(10) == 120);
    
    assert (computeRectangle(13, 13) == 169);
    assert (computeRectangle(10, 9) == 90);
    
    assert (calcArea(10,10) == 100);
    assert (calcArea(13,13) == 169);
    
    cout << "Yay it ran" << endl;
    return 0;
}
double feetToInches(double val)
{
    double inches;
    inches  = val * 12;
    
    return inches;
}
void  feetToInches(double&  val)
{
    double inches;
    inches = val * 12;
    
    return;
}
double computeRectangle(double valA, double valB)
{
    double ans;
    
    ans = valA * valB;
    
    return ans;
}
void computeArea (double valA, double valB, double& valC)
{
    valC = valA * valB;
    
    cout << " Expected : 4 " << endl;
    cout << " Actual :  " << valC << endl;
    return;
}
void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (2 * valA) + ( 2 * valB);
    
     cout << "Expected area = 4, expected perimeter = 8 " << "Actual area =  "  << valArea << "Actual perimeter =  "  << valPerimeter << endl;
    cout << "Expected area = 16, expected perimeter = 16 " << "Actual area =  "  << valArea << "Actual perimeter =  "  << valPerimeter << endl;

    return; 
}
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = valA + valB + valC + valD;
    valF = valE /4; 
    
    return; 
}
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    double PI = 3.14159;
    area = PI * pow (radius, 2);
    perimeter = 2 * PI * radius;
    
    return;
}
double calcArea(double length, double width)
{
    double ans; 
    
    ans = length * width;

    return ans;
}
