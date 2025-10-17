#include <iostream>
using namespace std;

struct Item{
    int id;
    float cost;
};

int main() {
   
    Item arr[6];
    for(int i = 0; i<4; i++)// initializing with random data
    {
        arr[i].id = i+1;
        arr[i].cost = (i+1)*20;
    }
    cout << "Details of items with cost more than 50 are : \n";
    for(int i = 0; i < 6; i++)
    {
        if(arr[i].cost > 50)
        {
            cout << "ID : "<<arr[i].id <<", cost : "<<arr[i].cost << endl;
        }
    }

}
