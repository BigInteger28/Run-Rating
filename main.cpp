#include <iostream>

using namespace std;

int main()
{
    while (1 < 2)
    {
        int menu = 1;
        cout << "\n\n1.Calculate rating     (Distance & Time known)" << endl;
        cout << "2.Rating to kph        (Rating & Distance known)" << endl;
        cout << "3.Rating to distance   (Rating & Speed known)" << endl;
        cout << "\nChoose: ";
        cin >> menu;

        if (menu == 1)
        {
            float distance;
            float hours;
            float minutes;
            float seconds;
            cout << "\nDistance in km: ";
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

            cout << "\nSpeed is " << speed << " kph" << endl;
            cout << "RATING is " << int(elo) << endl;
        }

        if (menu == 2)
        {
            float rating;
            float distance;

            cout << "\n\nRating: ";
            cin >> rating;
            cout << "Distance in km: ";
            cin >> distance;

            float speed = (rating-(distance*50))/100;
            cout << "\nSpeed is " << speed << " kph" << endl;
        }

        if (menu == 3)
        {
            float rating;
            float speed;

            cout << "\n\nRating: ";
            cin >> rating;
            cout << "Speed in kph: ";
            cin >> speed;

            float distance = (rating-(speed*100))/50;
            cout << "\nDistance is " << distance << " km" << endl;
        }
    }
}
