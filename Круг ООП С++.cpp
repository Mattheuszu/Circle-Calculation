/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

//S = d2 : 4 × π, где d — это диаметр

//C = π ⋅ d

using namespace std;

class Circle{
    
    float D;

public:    
    
    void setD(float D)
    {
        this->D = D;
    }
    
    float getD()
    {
        return this->D;
    }
    
    float getScircle(Circle circle)
    {
        return ((this->D*this->D) / 4 * 3.14);
    }
    
    float getLcircle(Circle circle)
    {
        return (3.14 * this->D);
    }
};

int main()
{
   Circle circle;
   
   circle.setD(5);
   
   
   cout << "Диаметр круга: " << circle.getD() << endl;
   
   cout << "Площать круга: " << circle.getScircle(circle) << endl;
   
   cout << "Длина окружности круга: " << circle.getLcircle(circle) << endl;

    return 0;
}
