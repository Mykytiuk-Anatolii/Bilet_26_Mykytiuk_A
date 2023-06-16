
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int num_of_wheels;
    string model;
    int year;
public:
    Vehicle() {
        num_of_wheels = 0;
        model = "No Model";
        year = 0;
    }
    Vehicle(int n, string m, int y) {
        num_of_wheels = n;
        model = m;
        year = y;
    }
    ~Vehicle() {} //Dtor
    void setWheels(int n) {
        if (n <= 0 && n >= 20) {
            cout << "The number of wheels : " << n << " not exists, the number is :  " << num_of_wheels << endl;
        }
        else {
            num_of_wheels = n;
        }
    }
    void setModel(string m) {
        model = m;
    }
    void setYear(int y) {
        if (y <= 0 && y > 2023) {
            cout << "Year of creation : " << y << " not exists, year is :  " << year << endl;
        }
        else {
            year = y;
        }
    }
    string toString() {
        string n, y, r;
        n = to_string(num_of_wheels);
        y = to_string(year);
        r = "The number og wheels : " + n + ", " + "model : " + model + ", " + "year of creation : " + y;
        return r;
    }
    void Input() {
        cout << "Enter the number of wheels : ";
        cin >> num_of_wheels;
        cout << "Enter the model : ";
        cin >> model;
        cout << "Enter year of creation : ";
        cin >> year;
    }
    void Output() {
        cout << toString() << endl;
    }
};


class Car : public Vehicle {
    int airbags;
    int seats;
public:
    Car() {
        airbags = 0;
        seats = 0;
    }
    Car(int n, string m, int y, int ai, int s) :
        Vehicle(n, m, y) {
        airbags = ai;
        seats = s;
    }
    ~Car() {}//Dtor
    void setAirbags(int ai) {
        if (ai <= 0 && ai > 10) {
            cout << "Number of airbags : " << ai << " not exisis, the number is : " << airbags << endl;
        }
        else {
            airbags = ai;
        }
    }
    void setSeats(int s) {
        if (s <= 0 && s > 8) {
            cout << "Number of seats : " << s << " not exisis, the number is : " << seats << endl;
        }
        else {
            seats = s;
        }
    }
    string toString() {
        string sai, ss;
        sai = to_string(airbags);
        ss = to_string(seats);
        string s = Vehicle::toString() + ", " + "number of airbags : " + sai + ", " + " number of seats : " + ss + "\n";
        return s;
    }
    void Input() {
        Vehicle::Input();
        cout << "Enter the number of airbags : ";
        cin >> airbags;
        cout << "Enter the number of seats : ";
        cin >> seats;
    }
    void Output() {
        cout << toString() << endl;
    }
};

class Truck : public Vehicle {
    int loadcapacity;
public:
    Truck() {
        loadcapacity = 0;
    }
    Truck(int n, string m, int y, int l) :
        Vehicle(n, m, y) {
        loadcapacity = l;
    }
    ~Truck() {}//Dtor
    void setLoadCapacity(int l) {
        if (l <= 1 && l >= 100) {
            cout << "Load capacity : " << l << " not exisis, the number is : " << loadcapacity << endl;
        }
        else {
            loadcapacity = l;
        }
    }
    string toString() {
        string sl;
        sl = to_string(loadcapacity);
        string s = Vehicle::toString() + ", " + "load capacity : " + sl + "\n";
        return s;
    }
    void Input() {
        Vehicle::Input();
        cout << "Enter the load capacity : ";
        cin >> loadcapacity;
    }
    void Output() {
        cout << toString() << endl;
    }
};

class Steamship : public Vehicle {
    int passenger;
public:
    Steamship() {
        passenger = 0;
    }
    Steamship(int n, string m, int y, int p) :
        Vehicle(n, m, y) {
        passenger = p;
    }
    ~Steamship() {}//Dtor
    void setPassenger(int p) {
        if (p <= 0 && p > 8000) {
            cout << "Passenger capacity : " << p << " not exisis, the number is : " << passenger << endl;
        }
        else {
            passenger = p;
        }
    }
    string toString() {
        string sp;
        sp = to_string(passenger);
        string s = Vehicle::toString() + ", " + "passenger capacity : " + sp + "\n";
        return s;
    }
    void Input() {
        Vehicle::Input();
        cout << "Enter the passenger capacity : ";
        cin >> passenger;
    }
    void Output() {
        cout << toString() << endl;
    }
};

class Plane : public Vehicle {
    int height;
public:
    Plane() {
        height = 0;
    }
    Plane(int n, string m, int y, int h) :
        Vehicle(n, m, y) {
        height = h;
    }
    ~Plane() {}//Dtor
    void setHeight(int h) {
        if (h < 150 && h > 30000) {
            cout << "Altitude : " << h << " not exisis, the number is : " << height << endl;
        }
        else {
            height = h;
        }
    }
    string toString() {
        string sh;
        sh = to_string(height);
        string s = Vehicle::toString() + ", " + "altitude : " + sh + "\n";
        return s;
    }
    void Input() {
        Vehicle::Input();
        cout << "Enter the altitude : ";
        cin >> height;
    }
    void Output() {
        cout << toString() << endl;
    }
};


void Final() {
    cout << "Vehicle : " << endl;
    Vehicle v;
    v.Input();
    v.Output();
    cout << "Car : " << endl;
    Car c;
    c.Input();
    c.Output();
    cout << "Truck : " << endl;
    Truck t;
    t.Input();
    t.Output();
    cout << "Steamship : " << endl;

    Steamship st;
    st.Input();
    st.Output();
    cout << "Plane : " << endl;
    Plane pl;
    pl.Input();
    pl.Output();
}

int main()
{
    cout << " Final result " << endl;
    system("cls");
    Final();
}