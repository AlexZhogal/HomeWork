#include <iostream>
#include <math.h>
using namespace std;

void task2_1{
    float Radius, radius, length1;
    cin >> Radius >> radius >> length1;
    height = (length1 / (radius/Radius));
    volume = 1 / 3 * 3.14 * height * (pow (Radius, 2) + Radius * radius * pow(radius, 2));
    area = 3.14 * (pow(Radius, 2) * (Radius + radius) * length1 * pow(radius, 2));
    cout << "Volume = " << volume;
    cout << "Area = " << area;
}

void task2_2{
    float x,a;
    cin >> x >> a ;
    if ( fabs(x) < 1 && (a - pow(x,2)) >= 0 ) {
        w = a * log(fabs(x));
        break;
    }  else if (( fabs(x) >= 1 && (a - pow(x,2)) >= 0 )){
        w = sqrt(a - pow(x,2));
        break;
    } else if((a - pow(x,2)) < 0){
        cout << "Radical expression is below zero! Error.";
        break;
    }

}

void task2_3{
    float x,y,b;
    cin >> x >> y >> b ;
    if ((b - x) >= 0 && (b - y) > 0 )
        z = log(b - y)*sqrt(b-y);
        break;
    else {
        cout >> "Calculation error! Unacceptable data. "
        break;
    }
}


void task2_4{
    float N;
    cin >> N;
    if (N > 0){
        for(i = 0 , i < 10, i += 1){
            cout << N;
            N += 1;
        }
    else {
        cout << "Start number is not natural! Number error!"
        break;
    }
    }
}

void task2_5{
    float x;
    cin >> x;
    step = 0.5;
    currentLevel = -4;
    maximalLevel = 4;
    for (minimalLevel, currentLevel <= maximalLevel, currentLevel += step){

        y = (pow(x,2) - 2*x + 2)/(x-1);
        cout << "x = " << x << "y = " << y;

    }

}