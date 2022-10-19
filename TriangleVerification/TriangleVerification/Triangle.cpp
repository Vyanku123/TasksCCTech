#include <iostream>
using namespace std;

int main()
{
    //Declaration
    int sum;
    float Triangle1, Triangle2, Triangle3;

    //Accept Triangles
    cout << "Enter first angle of triangle"<<endl;
    cin >> Triangle1 ;
    
    cout << "Enter second angle of triangle"<<endl;
    cin >> Triangle2 ;

    cout << "Enter third angle of triangle"<<endl;
    cin >> Triangle3;

     //Formula for the chech triangle is valid or not.


    if (Triangle1 < 0 && Triangle2 < 0 && Triangle3 < 0|| Triangle1 == 0 && Triangle2 == 0 || Triangle2 == 0 && Triangle3 == 0 ||Triangle1 == 0 && Triangle3 == 0)
    {
        cout << "Angle must be greater than Zero" << endl;     //Angle Value Verification
    }
    if ((Triangle1 >= 90 && Triangle2 >= 90) || (Triangle2 >= 90 && Triangle3 >= 90) || (Triangle1 >= 90 && Triangle3 >= 90))
    {
        cout << "Two Angles must  be smaller  than 90 "<<endl; //2 Angle Must be smalller than 90
    }
    sum = Triangle1 + Triangle2 + Triangle3;
    if (sum == 180 )
    {
        cout << "Triangle is Valid";  //Valid Triangle
    }
    else
    {
        cout << "Triangle is Invalid"; // Invalid Triangle.
    }
        
}