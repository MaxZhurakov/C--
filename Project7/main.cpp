//HM_19.03.2023
#include <iostream> 
using namespace std;
int main()
{
    int profit[6];
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << ": ";
        cin >> profit[i];
    }
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += profit[i];
    }
    cout << endl << "Profit: " << sum;
    system("pause");
    return 0;
}