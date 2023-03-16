#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<"years of candidate should be greater than 20 for better accuracy.\n";

    // Declare variables
    double height, weight, BMI;

    // initialize weight and height
    cout<<"Enter height : \n";
    cin>>height;
    cout<<"Enter weight : \n";
    cin>>weight;

    //calculate BMI
    BMI = weight/pow(height, 2);
    if (BMI < 5)
    {
        cout<<"you have broken the lowest BMI guiness record"<<endl;
    }
    else if (BMI < 18.5)
    {
        cout<<"underweight"<<endl;
    }
    else if (BMI < 25.5)
    {
        cout<<"Normal"<<endl;
    }
    else if (BMI < 30.0)
    {
        cout<<"overweight"<<endl;
    }
    else if (BMI <= 30.0)
    {
        cout<<"Obese"<<endl;
    }
    else
    {
        cout<<"we are working on the matter getting back to you soon hang o tight"<<endl;
    }

    return 0;
}

