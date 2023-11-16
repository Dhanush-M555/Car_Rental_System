
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
#include <windows.h>

using namespace std;

class customer {
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
};

class rent : public customer {
public:
    int days = 0, rentalfee = 0;

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

            // Add color to the print statements
            cout << "\033[1;36m"; // Cyan color
            cout << "--------------------------------------------------------------------------" << endl;
            if (carmodel == "A") {
                system("CLS");
                cout << "You have chosen Tesla model 2023" << endl;
                ifstream inA("A.txt");
                char str[200];
                while (inA) {
                    inA.getline(str, 200);
                    if (inA) cout << str << endl;
                }
                sleep(2);
            }
            // Add color to the print statements
            cout << "\033[1;32m"; // Green color
            if (carmodel == "B") {
                system("CLS");
                cout << "You have chosen Hyundai model 2020" << endl;
                ifstream inB("B.txt");
                char str[200];
                while (inB) {
                    inB.getline(str, 200);
                    if (inB) cout << str << endl;
                }
                sleep(2);
            }
            // Add color to the print statements
            cout << "\033[1;33m"; // Yellow color
            if (carmodel == "C") {
                system("CLS");
                cout << "You have chosen Ford model 2022" << endl;
                ifstream inC("C.txt");
                char str[200];
                while (inC) {
                    inC.getline(str, 200);
                    if (inC) cout << str << endl;
                }
                sleep(2);
            }
            // Add color to the print statements
            cout << "\033[1;34m"; // Blue color
            if (carmodel == "D") {
                system("CLS");
                cout << "You have chosen Toyota Camry" << endl;
                ifstream inD("D.txt");
                char str[200];
                while (inD) {
                    inD.getline(str, 200);
                    if (inD) cout << str << endl;
                }
                sleep(2);
            }
            // Add color to the print statements
            cout << "\033[1;35m"; // Purple color
            if (carmodel == "E") {
                system("CLS");
                cout << "You have chosen Honda Accord" << endl;
                ifstream inE("E.txt");
                char str[200];
                while (inE) {
                    inE.getline(str, 200);
                    if (inE) cout << str << endl;
                }
                sleep(2);
            }
            // Add color to the print statements
            cout << "\033[1;31m"; // Red color
            if (carmodel == "F") {
                system("CLS");
                cout << "You have chosen Lamborghini Huracán" << endl;
                ifstream inF("F.txt");
                char str[200];
                while (inF) {
                    inF.getline(str, 200);
                    if (inF) cout << str << endl;
                }
                sleep(2);
            }
            // Add color to the print statements
            cout << "\033[1;31m"; // Red color
            if (carmodel != "A" && carmodel != "B" && carmodel != "C" &&
                carmodel != "D" && carmodel != "E" && carmodel != "F")
                cout << "Invalid Car Model. Please try again!" << endl;
        } while (carmodel != "A" && carmodel != "B" && carmodel != "C" &&
                carmodel != "D" && carmodel != "E" && carmodel != "F");
        // Add color to the print statements
        cout << "\033[1;36m"; // Cyan color
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide the following information: " << endl;

        cout << "Please select a Car No. : ";
        cin >> carnumber;
        cout << "Number of hours you wish to rent the car: ";
        cin >> days;
        cout << endl;
    }

    void calculate() {
        sleep(1);
        system("CLS");
        cout << "Calculating rent. Please wait..." << endl;
        sleep(2);

        // Add color to the print statements
        cout << "\033[1;35m"; // Purple color

        if (carmodel == "A" || carmodel == "a")
            rentalfee = days * 250;
        else if (carmodel == "B" || carmodel == "b")
            rentalfee = days * 175;
        else if (carmodel == "C" || carmodel == "c")
            rentalfee = days * 215;
        else if (carmodel == "D" || carmodel == "d")
            rentalfee = days * 280; // Adjust the rental fee for Car D
        else if (carmodel == "E" || carmodel == "e")
            rentalfee = days * 220; // Adjust the rental fee for Car E
        else if (carmodel == "F" || carmodel == "f")
            rentalfee = days * 5000; // Adjust the rental fee for Car F
    }

    void showrent() {
        // Reset color to default
        cout << "\033[1;31m"; // Red color
        cout << "\n                       Car Rental - Customer Invoice                  " << endl;
        cout << "\033[0m"; // Reset color
        cout << "	///////////////////////////////////////////////////////////" << endl;
        cout << "	| Invoice No. :" << "------------------|" << setw(10) << "#BnC92243" << " |" << endl;
        cout << "	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
        cout << "	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "	| Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
        cout << "	| Your Rental Amount is :" << "--------|" << setw(6) <<"Rs."<< rentalfee << " |" << endl;
        cout << "	| Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
        cout << "	| Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
        cout << "	 ________________________________________________________" << endl;
        cout << "\n";
        cout << "\033[1;31m"; // Red color
        cout << "	| Total Rental Amount is :" << "-------|" << setw(6) <<"Rs."<< rentalfee << " |" << endl;
        cout << "\033[0m"; // Reset color
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
    billFile << "	| Invoice No. :" << "------------------|" << setw(10) << "#BnC92243" << " |" << endl;
    billFile << "	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
    billFile << "	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
    billFile << "	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
    billFile << "	| Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
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

};

class welcome {
    ;
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
        sleep(1);
        cout << "\nStarting the program please wait....." << endl;
        sleep(1);
        cout << "\nloading up files....." << endl;
        sleep(1);
        system("CLS");
    }
};
#include <fstream>
void generateCSV(const string& carNumber, int rentedHours, int price, const string& customerName) {
    ofstream csvFile("rental_details.csv", ios::out);  // Open the file in write mode

    if (!csvFile.is_open()) {
        cout << "Error opening the CSV file." << endl;
        return;
    }

    // Write the header line if the file is empty
    ifstream checkFile("rental_details.csv");
    if (checkFile.peek() == ifstream::traits_type::eof()) {
        csvFile << "Car No.,Rented Hours,Price,Name\n";
    }
    checkFile.close();

    // Write the details to the CSV file
    csvFile << carNumber << "," << rentedHours << "," << price << "," << customerName << "\n";

    csvFile.close();
}

int main() {
    welcome obj1;
    obj1.welcum();

    while (true) {
        rent obj2;
        obj2.data();
        obj2.calculate();
        obj2.showrent();
        generateCSV(obj2.carnumber, obj2.days, obj2.rentalfee, obj2.customername);
        obj2.generateBillFile("Bill.txt");
        // Ask the user if they want to continue renting cars
        cout << "Enter 'exit', '-1', or 'bruh' to stop renting cars, otherwise press any key: ";
        string userInput;
        cin >> userInput;

        if (userInput == "exit" || userInput == "-1" || userInput == "bruh") {
            cout << "Exiting car rental program. Thank you!\n";
            break;
        }

        // Save rental details to the CSV file

        // Clear the screen for the next iteration
        system("CLS");
    }

    return 0;
}


int login() {
    string pass = "";
    char ch;
    cout << "\033[1;32m"; // Green color
    cout << "\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
    cout << "\033[0m"; // Reset color
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
