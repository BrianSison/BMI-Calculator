#include <iostream>
using namespace std;

int main(){
    double Height; double Weight;
    cout << "BMI Calculator" << endl;
    cout << "Put your Height in meters: "; cin >> Height;
    cout << "Put your Weight in kilograms: "; cin >> Weight;

    double answer = Weight/(Height*Height);
    if (answer < 18.5){
       cout << "results: "<< answer << endl << "You are Underweight!";
    }
    else if(answer > 18.5 && answer < 24.9){
        cout << "results: "<< answer << endl << "You are Normal!";
    }
    else if(answer >25 && answer <34.9){
        cout << "results: "<< answer << endl << "You are Overweight!";
    }
    else if(answer >30 && answer <39.9){
        cout << "results: "<< answer << endl << "You are Obese!";
    }
    else if(answer > 35){
        cout << "results: "<< answer << endl << "You are Severly Obese";
    }
    else {
        cout << "results: "<< answer << endl << "You are Morbid Obese!";
    }
    return 0;
}