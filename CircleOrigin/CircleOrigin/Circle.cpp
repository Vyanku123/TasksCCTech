//import Library
#include<iostream>
#include<cmath>

using namespace std;
int main()
{   
    
    //Declaration
    double radius, distance;
    float x_circle, y_circle, x1, y1;

    //Accept co-ordinates of center of circle
    cout << "Enter co-ordinates of center of circle";
    cin >> x_circle >> y_circle;

    //Accept co-ordinates of point
    cout << "Enter co-ordinates of point";
    cin >> x1 >> y1;

    // Accept Radious
    cout << "Enter radius of circle";
    cin >> radius;



    if (radius <= 0)
    {
        cout << "Invalid radius"; //Radious must be posiive
    }
    else
    {
        distance = sqrt(pow(x1 - x_circle, 2) + pow(y1 - y_circle, 2)); //Distance Formula 
        if (radius == distance)
        {
            cout << "Point lies on circle";
        }
        else if (radius > distance)
        {
            cout << "Point lies inside circle";
        }
        else
        {
            cout << "Point lies outside circle";
        }
    }
}
