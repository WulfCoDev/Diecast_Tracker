#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Car {
    string title;
    string brand;
    string model;
    string description;
    string series;
    string color;
    string typeOfVehicle;
    string typeOfWheels;
    string toyNumber;
    string collectorNumber;
    string seriesNumber;
    string asstNumber;
    string modelNumber;
    string Case;
    string scale;
    string yearProduced;
    
};

void addCar(vector<Car>& collection){
    Car newCar;

    cout << "Enter title: ";
    getline(cin, newCar.title);

    cout << "Enter brand: ";
    getline(cin, newCar.brand);

    cout << "Enter model: ";
    getline(cin, newCar.model);

    cout << "Enter description: ";
    getline(cin, newCar.description);

    cout << "Enter series: ";
    getline(cin, newCar.series);

    cout << "Enter year produced: ";
    getline(cin, newCar.yearProduced);

    cout << "Enter color: ";
    getline(cin, newCar.color);

    cout << "Enter type of vehicle: ";
    getline(cin, newCar.typeOfVehicle);

    cout << "Enter type of wheels: ";
    getline(cin, newCar.typeOfWheels);

    cout << "Enter toy number: ";
    getline(cin, newCar.toyNumber);

    cout << "Enter collection number: ";
    getline(cin, newCar.collectorNumber);

    cout << "Enter series number: ";
    getline(cin, newCar.seriesNumber);

    cout << "Enter asst. number: ";
    getline(cin, newCar.asstNumber);

    cout << "Enter model number: ";
    getline(cin, newCar.modelNumber);

    cout << "Enter case: ";
    getline(cin, newCar.Case);

    cout << "Enter scale: ";
    getline(cin, newCar.scale);

    collection.push_back(newCar);
}

void saveCollection(const vector <Car>& collection){
    ofstream file("collection.txt", ios::app);
    for (const Car& car : collection){
        file << "Title: " << car.title << "\n";
        file << "Brand: " << car.brand << "\n";
        file << "Model: " << car.model << "\n";
        file << "Description: " << car.description << "\n";
        file << "Series: " << car.series << "\n";
        file<< "Year Produced: " << car.yearProduced << "\n";
        file<< "Color: " << car.color << "\n";
        file<< "Type of Vehicle: " << car.typeOfVehicle << "\n";
        file<< "Type of Wheels: " << car.typeOfWheels << "\n";
        file << "Toy Number: " << car.toyNumber << "\n";
        file << "Collection Number: " << car.collectorNumber << "\n";
        file << "Series Number: " << car.seriesNumber << "\n";
        file << "Asst. Number: " << car.asstNumber << "\n";
        file << "Model Number: " << car.modelNumber << "\n";
        file << "Case: " << car.Case << "\n";
        file << "Scale: " << car.scale << "\n";
        file << "--------------------------\n";
    }
    file.close();
    cout << "Collection saved!" << endl;
}

int main() {
    vector <Car> collection;
    
    addCar(collection);
    saveCollection(collection);

    return 0;
}