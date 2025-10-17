#include <iostream>
using namespace std;

struct Color
{
    int red, green, blue;
};

int main() {
   
    Color arr[5];
    cout << "Initial RGB values are..\n";
   
   
    for(int i = 0; i < 5 ; i++) //Initializing with random data
    {
        arr[i].red = 255/5*(i+1);
        arr[i].blue = 255/5*(i+1);
        arr[i].green = 255/5*(i+1);
    }
   
    for(int i = 0; i < 5; i++)
    {
        cout << "(" << arr[i].red << ", " << arr[i].green << ", " << arr[i].blue << ")\n";
    }
   
    cout << "Inverting RGB values for first three elements..\n";
   
    for(int i = 0; i<3; i++)
    {
        arr[i].red = (255-arr[i].red);
        arr[i].blue = (255-arr[i].blue);
        arr[i].green = (255-arr[i].green);
    }
   
    cout << "New RGB values..\n";
   
    for(int i = 0; i < 5; i++)
    {
        cout << "(" << arr[i].red << ", " << arr[i].green << ", " << arr[i].blue << ")\n";
    }

}
