#include <iostream>
#include <math.h>

using namespace std;

float toPace(float kph) {
    float seconds = 1000/(kph/3.6);
    float minutes = int(seconds/60);
    seconds = (seconds-(minutes*60))/100;
    return minutes+seconds;
}

float toTime(float kph, float distance) {
    float time = 60*(distance/kph);
    float minutes = int(time);
    float seconds = (time-minutes)*0.6;
    return minutes+seconds;
}

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
            float pace = toPace(speed);
            float elo = (speed*100)+(distance*50);
            elo = roundf(elo * 100) / 100;

            cout << "\nSpeed is " << speed << " kph" << endl;
            cout << "Pace is " << pace << " min/km" << endl;
            cout << "RATING is " << elo << endl;
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
            float pace = toPace(speed);
            float time = toTime(speed,distance);
            float hours = 0;
            while (time>60) {
                hours++;
                time -=60;
            }

            cout << "\nSpeed is " << speed << " kph" << endl;
            cout << "Pace is " << pace << " min/km" << endl;
            cout << "Running time is " << hours << " hours " << time << " min.sec" << endl;
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
