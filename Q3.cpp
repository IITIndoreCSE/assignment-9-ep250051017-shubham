#include <iostream>
using namespace std;

struct Point
{
    float x, y;
};

int main() {
   
    Point arr[7];
    cout<<"Enter coordinates for 7 points (x, y): \n";
    for(int i = 0; i < 7; i++)
    {
        float x, y;
        cout << "Point " << i+1 <<"-x:";
        cin >> x;
        cout << "Point " << i+1 <<"-x:";
        cin >> y;
        arr[i] = {x, y};
       
    }
   
    int num=0;
   
    for ( int i = 0; i < 7; i++)
    {
        if (arr[i].x > 0 && arr[i].y > 0)
        {
            num++;
        }
    }
    cout << "Numbers of points in first quadrant:"<< num <<endl;
    
}
