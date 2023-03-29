#include <iostream>

int main(){
    using namespace std;
    float weight_kg{55},heigh_kg{1.50};
    float BMI = weight_kg/(heigh_kg*heigh_kg);

    cout<<"BMI VALUES"<<endl;
    cout<<"Your BMI is  "<<BMI<<endl;
    cout<<"Underweight: "<<"less than 18.5"<<endl;
    cout<<"Normal:      "<<"between 10.5 and 24.9"<<endl;
    cout<<"Overweight:  "<<"between 25 and 29.9"<<endl;
    cout<<"Obese:       "<<"30 or greater";
return 0;
}