#include "functions.h"
#include <iostream>

using namespace std;

void interface_1(){
    cout << "\nAfter incrementing the azimuthal angle of point 1:\n";
}

void interface_2(){
    cout << "After increasing the radial distance of point 2:\n";
}

void input_points(Point &B, Point &C){
    float r, theta, z;
    float x, y;
    cout << "-----------------------ENTER_POINTS------------------------";
    cout << "\npoint 1 is initialized by the constructor by default.\n\n";
    cout << "Input point 2\n";
    do {
        cout << "Enter coordinate in format \"r theta z\"\n";
        cin >> r >> theta >> z;
        if (cin.fail()) {
            cout << "Incorrect format of input data. Try again.\n";
            cin.clear();
            fflush(stdin);
            cout << "Enter coordinate in format \"r theta z\"\n";
            cin >> r >> theta >> z;
        }
    }while(cin.fail());
    B = Point(r, theta, z);
    cout << "\nInput point 3\n";
    cout << "\nSet the coordinates in the rectangular system ant the program\n"
            "itself will translate them into the cylindrical system.\n\n";
    do {
        cout << "Enter coordinate in format \"x y z\"\n";
        cin >> x >> y >> z;
        if (cin.fail()) {
            cout << "Incorrect format of input data. Try again.\n";
            cin.clear();
            fflush(stdin);
            cout << "Enter coordinate in format \"x y z\"\n";
            cin >> x >> y >> z;
        }
    }while(cin.fail());
    C = Point(x, y);
    C.Set_z(z);
}

float input_delta(){
    float n;
    string input;
    bool is_valid_input = false;
    cout << "\n-----------------INCREASING_RADIAL_DISTANCE---------------\n";
    do {
        cout << "Enter the increase amount:\n";
        cin >> input;
        is_valid_input = true;
        for (char c : input) {
            if (!isdigit(c)) {
                is_valid_input = false;
                break;
            }
        }
        if (is_valid_input) {
            n = stoi(input);
            if (n <= 0) {
                cout << "Invalid input. Please enter a positive numeric." << endl;
                is_valid_input = false;
            }
        } else {
            cout << "Invalid input. Please enter a  positive numeric." << endl;
        }
    } while (!is_valid_input);
    return n;
}

void output_points(Point A, Point B, Point C){
    Point array[]={A, B, C};
    cout << endl;
    cout << "------------------------YOUR_POINTS-------------------------\n";
    for(int i=0; i < 3; i++){
        cout << "point " << i + 1 << ": (" << array[i].Get_r() << "; " << array[i].Get_theta() << "; " << array[i].Get_z() << ")\n";
        //cout << array[i].Get_distance() << endl;
    }
}

void equality_points(bool res){
    cout << "\n----------------------EQUALITY_OF_POINTS--------------------\n";
    if(res){
        cout << "\npoint 1 and point 2 are equal\n";
    }
    else{
        cout << "\npoint 1 and point 2 are not equal\n";
    }
}

void calculate_distance(Point A){
    cout << "\n------------------------YOUR_POINTS-------------------------\n";
    cout << "\nDistance from point 3 to the origin of coordinates: " << A.Get_distance() << endl << endl;
    cout << "------------------------------------------------------------\n";
}
