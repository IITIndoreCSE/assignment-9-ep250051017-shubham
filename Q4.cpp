#include <iostream>
using namespace std;

struct SalesRecord
{
    string month;
    float amount;
};

int main() {
   
    SalesRecord year[12];
    cout <<"Enter sales data for each month:"<<endl;
    for(int i = 0; i < 12; i++)
    {
        string name;
        float sales;
        cout << "month "<<i+1<<" Name:";
        cin >> name;
        cout << "Sales amount:";
        cin >> sales;
       
        year[i].month = name;
        year[i].amount = sales;
    }
        int max_index=-1, min_index=-1;
        float max = -1, min = 3000000000000;
   
        for(int i = 0; i < 12; i++)
        {
            if(year[i].amount > max)
            {
                max = year[i].amount;
                max_index = i;
            }
        }
    for(int i = 0; i < 12; i++)
        {
            if(year[i].amount < min)
            {
                min = year[i].amount;
                min_index = i;
            }
        }
   
        cout << "Months with maximum sales " << year[max_index].month << endl;
        cout << "MOnth with minimum sales " << year[min_index].month << endl;

}
