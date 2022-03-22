#include <iostream>
#include <sstring>
using namespace std;


void task1_1{
    float a,b;
    cin >> a >> b;
    summa = a + b;
    diffr = a - b;
    multip = a*b;
    if (b != 0){
        divis = a / b;
    } else{
        divis = "Division impossible";
    }

    cout << summa << diffr << multip << divis;
    
    return (summa,diffr,multip,divis)
}


void task1_2 {
    float b,c;
    cin >> b >> c;
    switch(b){
        case 0:
        if (c == 0){
            cout << "b - any number";
            break;
        }else{
            cout << "No solves"
            break;
        }
        break;
        default:
        cout << (-c/b);
        break;
    }

    
}

void task1_3{
    float a ,b ,c;
    cin >> a >> b >> c;

    D = pow(b,2) - 4*a*c;
    if (D == 0){
            cout >> "There is only one solve : " >> ((-1*b+sqrt(D))/2);
            break;
    }else if (D > 0){
        cout >> "There are two solves :" >> ((-1*b+sqrt(D))/2) >> "and" >> ((-1*b-sqrt(D))/2);
        break;
    }

}


void task1_4{
    string timeStatus, curtainsStatus, lampStatus;
    cin >> timeStatus >> curtainsStatus >> lampStatus;
    if ((timeStatus == "Day" && curtainsStatus == "Opened"  ) ||  lampStatus == "Enabled"){
        cout << "There bright inside!";
        break;
    }else{
        cout << "There dark inside!"
        break;
    }


}