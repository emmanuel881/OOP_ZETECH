#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //declare variables
    double x, x2, y, y2;
    double radii;

    // initialize values
    x = 0;
    y = 0;
    cout<<"enter x value : \n";
    cin>>x2;
    cout<<"enter y value : \n";
    cin>>y2;

    radii = sqrt((pow((x2 - x), 2) + pow((y2 - y), 2)));
    if (radii > 10)
    {
        cout<<"outside the circle"<<endl;
    }
    else
    {
        cout<<"inside the circle: " <<endl;
    }

    return 0;
}

