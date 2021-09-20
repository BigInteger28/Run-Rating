#include <iostream>

using namespace std;

int main()
{
    while (1 < 2)
    {
        float distance;
        float hours;
        float minutes;
        float seconds;
        cout << "\n\nDistance in km: ";
        cin >> distance;
        cout << "Finish time hours: ";
        cin >> hours;
        cout << "Finish time minutes: ";
        cin >> minutes;
        cout << "Finish time seconds: ";
        cin >> seconds;
        float time = (hours*3600)+(minutes*60)+seconds;
        float speed = ((distance*1000)/time)*3.6;
        float elo = (speed*100)+(distance*50);

        cout << "\nELO is " << int(elo) << endl;
    }
}
