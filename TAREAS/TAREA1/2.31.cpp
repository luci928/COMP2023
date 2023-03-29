#include <iostream>

int main(){
    using namespace std;
    float miles_driven{0}, cost_gallon{0}, miles_per_gallon{0};
    float parking{0}, tolls_day{0};

    float cost_toll{6};

    cout<<"Please enter the total miles you drive per day: ";//80
    cin>> miles_driven;
    cout<<"Cost per gallon of gasoline: ";//18
    cin>> cost_gallon;
    cout<<"Average miles per gallon: ";//40 miles
    cin>> miles_per_gallon;
    cout<<"Parking fees per day: ";//0.5
    cin>> parking;
    cout<<"Tolls per day: ";//2
    cin>> tolls_day;

    float gasoline_gallon = miles_driven/miles_per_gallon;
    float cost_gasoline = cost_gallon*gasoline_gallon;
    float tolls = tolls_day*cost_toll;

    float cost_driving = cost_gasoline + tolls + parking;

    cout<< "Your cost per day of driving to work is "<<cost_driving;

    return 0;
}