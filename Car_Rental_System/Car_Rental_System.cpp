#include <iostream>   // Input/output stream operations
#include <fstream>    // Input/output stream class to operate on files
#include <limits>     // Provides various properties of the fundamental types
#include <conio.h>    // Console input/output functions (used for _getch())
#include <stdlib.h>   // General utilities library (used for system())
#include <unistd.h>   // Access to the POSIX operating system API
#include <iomanip>    // Formatting and manipulators for streams
#include <windows.h>  // Windows API functions (used for system("CLS") and sleep())
using namespace std;

string billname="Bill0.txt";
int billcount=1;
class customer {
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
};

class Car {
public:
    virtual void displayDetails() const = 0;
    virtual int calculateRentalFee(int days) const = 0;
    virtual ~Car() {}
};

class Tesla2023 : public Car {
    int price=250;
public:
    void displayDetails() const override {
        cout << "You have chosen Tesla model 2023" << endl;
        ifstream inA("A.txt");
        char str[200];
        while (inA) {
            inA.getline(str, 200);
            if (inA) cout << str << endl;
        }
        Sleep(2000);
    }
    int calculateRentalFee(int days) const override {
        return days * price;
    }
};

class Hyundai2020 : public Car {
    int price=175;
public:
    void displayDetails() const override {
        cout << "You have chosen Hyundai model 2020" << endl;
        ifstream inA("B.txt");
        char str[200];
        while (inA) {
            inA.getline(str, 200);
            if (inA) cout << str << endl;
        }
        Sleep(2000);
    }
    int calculateRentalFee(int days) const override {
        return days * price;
    }
};

class Ford2022 : public Car {
    int price=215;
public:
    void displayDetails() const override {
        cout << "You have chosen Ford 2022" << endl;
        ifstream inA("C.txt");
        char str[200];
        while (inA) {
            inA.getline(str, 200);
            if (inA) cout << str << endl;
        }
        Sleep(2000);
    }
    int calculateRentalFee(int days) const override {
        return days * price;
    }
};

class ToyotaCamry : public Car {
    int price=280;
public:
    void displayDetails() const override {
        cout << "You have chosen Ford 2022" << endl;
        ifstream inA("D.txt");
        char str[200];
        while (inA) {
            inA.getline(str, 200);
            if (inA) cout << str << endl;
        }
        Sleep(2000);
    }
    int calculateRentalFee(int days) const override {
        return days * price;
    }
};

class HondaAccord : public Car {
        int price=220;
public:
    void displayDetails() const override {
        cout << "You have chosen Ford 2022" << endl;
        ifstream inA("E.txt");
        char str[200];
        while (inA) {
            inA.getline(str, 200);
            if (inA) cout << str << endl;
        }
        Sleep(2000);
    }
    int calculateRentalFee(int days) const override {
        return days * price;
    }
};

class Lamborghini : public Car {
        int price=5000;
public:
    void displayDetails() const override {
        cout << "You have chosen Ford 2022" << endl;
        ifstream inA("F.txt");
        char str[200];
        while (inA) {
            inA.getline(str, 200);
            if (inA) cout << str << endl;
        }
        Sleep(2000);
    }
    int calculateRentalFee(int days) const override {
        return days * price;
    }
};


class rent : public customer {
public:
    Car* selectedCar;
    int days = 0, rentalfee = 0;
    int getIntegerInput(const string& prompt, const string& errorMessage, int lowerBound, int upperBound) {
        int userInput;
        while (true) {
            cout << prompt;
            if (!(cin >> userInput)) {
                cout << errorMessage << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            } else if (userInput < lowerBound || userInput > upperBound) {
                cout << "Input out of bounds. Please enter a value between "
                    << lowerBound << " and " << upperBound << "." << endl;
            } else {
                break;
            }
        }
        return userInput;
    }
    void data() {
        int login();
        login();
        cout << "\tPlease Enter your Name: ";
        cin >> customername;
        cout << endl;
        do {
            cout << "\t======== Car Rental System ======== \n\n" << endl;
            cout << "\tPlease Select a Car" << endl;
            cout << "\tEnter 'A' for Tesla 2023." << endl;
            cout << "\tEnter 'B' for Hyundai 2020." << endl;
            cout << "\tEnter 'C' for Ford 2022." << endl;
            cout << "\tEnter 'D' for Toyota Camry." << endl;
            cout << "\tEnter 'E' for Honda Accord." << endl;
            cout << "\tEnter 'F' for Lamborghini Huracán." << endl;
            cout << endl;
            cout << "\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\033[1;36m";
            cout << "--------------------------------------------------------------------------" << endl;
            if (carmodel != "A" && carmodel != "B" && carmodel != "C" &&
                carmodel != "D" && carmodel != "E" && carmodel != "F") {
                cout << "Invalid Car Model. Please try again!" << endl;
                continue;
            }
            if (carmodel == "A") {
                system("CLS");
                selectedCar = new Tesla2023();
                Sleep(2000);
            }
            cout << "\033[1;32m"; 
            if (carmodel == "B") {
                system("CLS");
                selectedCar = new Hyundai2020();
                Sleep(2000);
            }
            cout << "\033[1;33m";
            if (carmodel == "C") {
                system("CLS");
                selectedCar = new Ford2022();
                Sleep(2000);
            }
            cout << "\033[1;34m";
            if (carmodel == "D") {
                system("CLS");
                selectedCar = new ToyotaCamry();
                Sleep(2000);
            }
            cout << "\033[1;35m";
            if (carmodel == "E") {
                system("CLS");
                selectedCar = new Tesla2023();
                Sleep(2000);
            }
            cout << "\033[1;31m";
            if (carmodel == "F") {
                system("CLS");
                selectedCar = new Tesla2023();
                Sleep(2000);
            }
            cout << "\033[1;31m";
            if (carmodel != "A" && carmodel != "B" && carmodel != "C" &&
                carmodel != "D" && carmodel != "E" && carmodel != "F")
                cout << "Invalid Car Model. Please try again!" << endl;
        } while (carmodel != "A" && carmodel != "B" && carmodel != "C" &&
                carmodel != "D" && carmodel != "E" && carmodel != "F");
        selectedCar->displayDetails();
        cout << "\033[1;36m";
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide the following information: " << endl;
        cout << "Please select a Car No. : ";
        cin >> carnumber;
        days = getIntegerInput("Number of hours you wish to rent the car: ", "Invalid input. Please enter a valid number.", 1, 100);
        cout << endl;
    }

    void calculate() {
        Sleep(1000);
        system("CLS");
        cout << "Calculating rent. Please wait..." << endl;
        Sleep(2000);;
        cout << "\033[1;35m";
        rentalfee=selectedCar->calculateRentalFee(days);
    }
    void showrent() {
        cout << "\033[1;31m";
        cout << "\n                       Car Rental - Customer Invoice                  " << endl;
        cout << "\033[0m";
        cout << "";
        cout << "	| Invoice No. :" << "------------------|" << setw(10) << "#BnC92243" << " |" << endl;
        cout << "	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
        cout << "	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "	| Number of Hours :" << "---------------|" << setw(10) << days << " |" << endl;
        cout << "	| Your Rental Amount is :" << "--------|" << setw(6) <<"Rs."<< rentalfee << " |" << endl;
        cout << "	| Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
        cout << "	| Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
        cout << "	 ________________________________________________________" << endl;
        cout << "\n";
        cout << "\033[1;31m";
        cout << "	| Total Rental Amount is :" << "-------|" << setw(6) <<"Rs."<< rentalfee << " |" << endl;
        cout << "\033[0m";
        cout << "	 ________________________________________________________" << endl;
        int f;
        system("PAUSE");
        system("CLS");
        ifstream inf("thanks.txt");
        char str[300];
        while (inf) {
            inf.getline(str, 300);
            if (inf) cout << str << endl;
        }
        inf.close();
    }

    void generateBillFile(const string& fileName) {
    ofstream billFile(fileName);
    if (!billFile.is_open()) {
        cout << "Error creating the bill file." << endl;
        return;
    }
    billFile << "\n                       Car Rental - Customer Invoice                  " << endl;
    billFile << "	///////////////////////////////////////////////////////////" << endl;
    billFile << "	| Invoice No. :" << "------------------|" << setw(10) << "#BnC"<<billcount << " |" << endl;
    billFile << "	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
    billFile << "	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
    billFile << "	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
    billFile << "	| Number of Hours :" << "---------------|" << setw(10) << days << " |" << endl;
    billFile << "	| Your Rental Amount is :" << "--------|" << setw(6) << "Rs."<< rentalfee << " |" << endl;
    billFile << "	| Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
    billFile << "	| Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
    billFile << "	 ________________________________________________________" << endl;
    billFile << "\n";
    billFile << "	| Total Rental Amount is :" << "-------|" << setw(6) << "Rs."<< rentalfee << " |" << endl;
    billFile << "	 ________________________________________________________" << endl;
    billFile.close();
    cout << "Bill file generated successfully: " << fileName << endl;
}

    ~rent() {
        delete selectedCar;
    }
};

class welcome {
public:
    int welcum() {
        ifstream in("welcome.txt");
        if (!in) {
            cout << "Cannot open input file.\n";
        }
        char str[1000];
        while (in) {
            in.getline(str, 1000);
            if (in) cout << str << endl;
        }
        in.close();
        Sleep(1000);
        cout << "\nStarting the program please wait....." << endl;
        Sleep(1000);
        cout << "\nloading up files....." << endl;
        Sleep(1000);
        system("CLS");
    }
};

void generateTxt(const std::string& carNumber, int rentedHours, int price, const std::string& customerName) {
    try {
        std::ofstream txtFile("rental_details.txt", std::ios::app);
        if (!txtFile.is_open()) {
            std::cerr << "Error opening the text file." << std::endl;
            return;
        }
        txtFile << carNumber << "," << rentedHours << "," << price << "," << customerName << "\n";
        txtFile.close();
        std::cout << "Text file appended successfully: rental_details.txt" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
int main() {
    welcome obj1;
    obj1.welcum();
    while (true) {
        rent obj2;
        obj2.data();
        obj2.calculate();
        obj2.showrent();
        generateTxt(obj2.carnumber, obj2.days, obj2.rentalfee, obj2.customername);
        obj2.generateBillFile(billname);
        billname="Bill"+to_string(billcount)+".txt";
        billcount++;
        cout << "Enter 'exit' to exit otherwise press any key: ";
        string userInput;
        cin >> userInput;
        if (userInput == "exit" || userInput == "-1" || userInput == "bruh") {
            cout << "Exiting car rental program. Thank you!\n";
            break;
        }
        system("CLS");
    }
    return 0;
}


int login() {
    string pass = "";
    char ch;
    cout << "\033[1;32m";
    cout << "\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
    cout << "\033[0m";
    cout << "\t------------------------------";
    cout << "\n\tLOGIN \n";
    cout << "\t------------------------------\n\n";
    cout << "\tEnter Password: ";
    ch = _getch();
    while (ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (pass == "admin") {
        cout << "\n\n\n\tAccess Granted! \n";
        system("PAUSE");
        system("CLS");
    } else {
        cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

