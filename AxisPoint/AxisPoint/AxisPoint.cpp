#include <iostream>
using namespace std;
int main()
{
    int Sets; //Accept Set of Numbers
    float x_axis, y_axis; 
    cout << "Enter Set of Points";
    cin >> Sets;
    for (int i = 0; i < Sets; i++)
    {
        cout << endl;
        cout << "Enter the points(x,y)" << endl;
        cin >> x_axis >> y_axis;  //Accept Points.

        //For the Origin
        if (x_axis == 0 && y_axis == 0)
        {
            cout << "Point lie on Origin";
        }

        //For the Point lies on X-Axis
        else if (y_axis == 0)
        {
            cout << "Point lie on X-axis";
        }
        
        //For the Point lies on  Y Axis
        else if (x_axis == 0)
        {
            cout << "point lie on Y-axis";
        }
        else
        {
            cout << "Points neither lie on X-axis nor Y-axis";
        }
    }
}