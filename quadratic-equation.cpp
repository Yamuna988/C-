#include <iostream>
#include <cmath>
int main() 
{
    double a, b, c, determinant, root1, root2;
    std::cout<<"Enter coefficients a, b, and c for the quadratic equation ax^2+bx+c=0:\n";
    std::cout<<"a: ";
    std::cin>>a;
    std::cout<<"b: ";
    std::cin>>b;
    std::cout<<"c: ";
    std::cin>>c;
    determinant=b*b-4*a*c;   // Calculate determinant
    if(determinant>0)      // Calculate roots
	{
        root1=(-b+sqrt(determinant))/(2*a);       
        root2=(-b-sqrt(determinant))/(2*a);
        std::cout<<"The equation has two distinct real roots: " <<root1<<"and"<<root2<<std::endl;
    } 
	else if(determinant==0) 
	{
        root1=-b/(2*a);
        std::cout<<"The equation has one real root: "<<root1<<std::endl;
    } 
	else 
	{
        double realPart=-b/(2*a);
        double imaginaryPart=sqrt(-determinant)/(2*a);
        std::cout <<"The equation has two complex roots: "<<realPart<<"+"<<imaginaryPart<<"i and "<<realPart<<" - "<<imaginaryPart<<"i"<<std::endl;
    }
    return 0;
}
