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

void loadCollection(vector<Car>& collection) {
    ifstream file("collection.txt");
    if (!file) {
        cout << "No saved collection file found.\n";
        return;
    }

    Car car;
    string line;
    while (getline(file, car.title)) {
        getline(file, car.brand);
        getline(file, car.model);
        getline(file, car.description);
        getline(file, car.series);
        getline(file, car.yearProduced);
        getline(file, car.color);
        getline(file, car.typeOfVehicle);
        getline(file, car.typeOfWheels);
        getline(file, car.toyNumber);
        getline(file, car.collectorNumber);
        getline(file, car.seriesNumber);
        getline(file, car.asstNumber);
        getline(file, car.modelNumber);
        getline(file, car.Case);
        getline(file, car.scale);
        getline(file, line);  // Read the "---" separator
        collection.push_back(car);
    }

    file.close();
    cout << "Collection loaded!\n";
}

void viewCars(const vector<Car>& collection) {
    if (collection.empty()) {
        cout << "The collection is empty.\n";
    } else {
        for (const Car& car : collection) {
            cout << "Title: " << car.title << "\n";
            cout << "Brand: " << car.brand << "\n";
            cout << "Model: " << car.model << "\n";
            cout << "Description: " << car.description << "\n";
            cout << "Series: " << car.series << "\n";
            cout << "Year Produced: " << car.yearProduced << "\n";
            cout << "Color: " << car.color << "\n";
            cout << "Type of Vehicle: " << car.typeOfVehicle << "\n";
            cout << "Type of Wheels: " << car.typeOfWheels << "\n";
            cout << "Toy Number: " << car.toyNumber << "\n";
            cout << "Collection Number: " << car.collectorNumber << "\n";
            cout << "Series Number: " << car.seriesNumber << "\n";
            cout << "Asst. Number: " << car.asstNumber << "\n";
            cout << "Model Number: " << car.modelNumber << "\n";
            cout << "Case: " << car.Case << "\n";
            cout << "Scale: " << car.scale << "\n";
            cout << "--------------------------\n";
        }
    }
}

void searchByBrand(const vector<Car>& collection, const string& brand) {
    bool found = false;
    for (const Car& car : collection) {
        if (car.brand == brand) {
            cout << "Found Car -\n";
            cout << "Title: " << car.title << "\n";
            cout << "Brand: " << car.brand << "\n";
            cout << "Model: " << car.model << "\n";
            cout << "Description: " << car.description << "\n";
            cout << "Series: " << car.series << "\n";
            cout << "Year Produced: " << car.yearProduced << "\n";
            cout << "Color: " << car.color << "\n";
            cout << "Type of Vehicle: " << car.typeOfVehicle << "\n";
            cout << "Type of Wheels: " << car.typeOfWheels << "\n";
            cout << "Toy Number: " << car.toyNumber << "\n";
            cout << "Collection Number: " << car.collectorNumber << "\n";
            cout << "Series Number: " << car.seriesNumber << "\n";
            cout << "Asst. Number: " << car.asstNumber << "\n";
            cout << "Model Number: " << car.modelNumber << "\n";
            cout << "Case: " << car.Case << "\n";
            cout << "Scale: " << car.scale << "\n";
            cout << "--------------------------\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No cars found for brand: " << brand << endl;
    }
}

void searchByModel(const vector<Car>& collection) {
    string model;
    cout << "Enter model to search: ";
    getline(cin, model);
    
    bool found = false;
    for (const Car& car : collection) {
        if (car.model == model) {
            cout << "Found Car -\n";
            cout << "Title: " << car.title << "\n";
            cout << "Brand: " << car.brand << "\n";
            cout << "Model: " << car.model << "\n";
            cout << "Description: " << car.description << "\n";
            cout << "Series: " << car.series << "\n";
            cout << "Year Produced: " << car.yearProduced << "\n";
            cout << "Color: " << car.color << "\n";
            cout << "Type of Vehicle: " << car.typeOfVehicle << "\n";
            cout << "Type of Wheels: " << car.typeOfWheels << "\n";
            cout << "Toy Number: " << car.toyNumber << "\n";
            cout << "Collection Number: " << car.collectorNumber << "\n";
            cout << "Series Number: " << car.seriesNumber << "\n";
            cout << "Asst. Number: " << car.asstNumber << "\n";
            cout << "Model Number: " << car.modelNumber << "\n";
            cout << "Case: " << car.Case << "\n";
            cout << "Scale: " << car.scale << "\n";
            cout << "--------------------------\n";
            found = true;
        }
    }
    if (!found) cout << "No cars found with model: " << model << endl;
}

void searchBySeries(const vector<Car>& collection) {
    string series;
    cout << "Enter series to search: ";
    getline(cin, series);
    
    bool found = false;
    for (const Car& car : collection) {
        if (car.series == series) {
            cout << "Found Car -\n";
            cout << "Title: " << car.title << "\n";
            cout << "Brand: " << car.brand << "\n";
            cout << "Model: " << car.model << "\n";
            cout << "Description: " << car.description << "\n";
            cout << "Series: " << car.series << "\n";
            cout << "Year Produced: " << car.yearProduced << "\n";
            cout << "Color: " << car.color << "\n";
            cout << "Type of Vehicle: " << car.typeOfVehicle << "\n";
            cout << "Type of Wheels: " << car.typeOfWheels << "\n";
            cout << "Toy Number: " << car.toyNumber << "\n";
            cout << "Collection Number: " << car.collectorNumber << "\n";
            cout << "Series Number: " << car.seriesNumber << "\n";
            cout << "Asst. Number: " << car.asstNumber << "\n";
            cout << "Model Number: " << car.modelNumber << "\n";
            cout << "Case: " << car.Case << "\n";
            cout << "Scale: " << car.scale << "\n";
            cout << "--------------------------\n";
            found = true;
        }
    }
    if (!found) cout << "No cars found with series: " << series << endl;
}

void searchByAsstNumber(const vector<Car>& collection) {
    string asstNumber;
    cout << "Enter asst. number to search: ";
    getline(cin, asstNumber);
    
    bool found = false;
    for (const Car& car : collection) {
        if (car.asstNumber == asstNumber) {
            cout << "Found Car -\n";
            cout << "Title: " << car.title << "\n";
            cout << "Brand: " << car.brand << "\n";
            cout << "Model: " << car.model << "\n";
            cout << "Description: " << car.description << "\n";
            cout << "Series: " << car.series << "\n";
            cout << "Year Produced: " << car.yearProduced << "\n";
            cout << "Color: " << car.color << "\n";
            cout << "Type of Vehicle: " << car.typeOfVehicle << "\n";
            cout << "Type of Wheels: " << car.typeOfWheels << "\n";
            cout << "Toy Number: " << car.toyNumber << "\n";
            cout << "Collection Number: " << car.collectorNumber << "\n";
            cout << "Series Number: " << car.seriesNumber << "\n";
            cout << "Asst. Number: " << car.asstNumber << "\n";
            cout << "Model Number: " << car.modelNumber << "\n";
            cout << "Case: " << car.Case << "\n";
            cout << "Scale: " << car.scale << "\n";
            cout << "--------------------------\n";
            found = true;
        }
    }
    if (!found) cout << "No cars found with asst. number: " << asstNumber << endl;
}

void searchMenu(const vector <Car>& collection){
    int searchChoice;
    while (true){
        cout << "\nSearch menu:\n";
        cout << "1. Search by Model\n";
        cout << "2. Search by Series\n";
        cout << "3. Search by Asst. NUmber\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter Choice: ";
        cin >> searchChoice;
        cin.ignore();

                switch (searchChoice) {
            case 1:
                searchByModel(collection);
                break;
            case 2:
                searchBySeries(collection);
                break;
            case 3:
                searchByAsstNumber(collection);
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("CLS");
    #else
        cout << "\033[H\033[2J\033[3J";
        cout.flush();
    #endif
}


int main() {
    vector<Car> collection;
    loadCollection(collection);
    int choice;

    do {
        cout << "\nDiecast Collection Organizer\n";
        cout << "1. Add Car\n";
        cout << "2. View Collection\n";
        cout << "3. Search\n";
        cout << "4. Save Collection to File\n";
        cout << "5. Load Collection from File\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addCar(collection);
                break;
            case 2:
                viewCars(collection);
                break;
            case 3: {
                searchMenu(collection);
                break;
            }
            case 4:
                saveCollection(collection);
                break;
            case 5:
                loadCollection(collection);
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}