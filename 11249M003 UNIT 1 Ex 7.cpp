#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Patient {
    int patientID;
    string name;
    string disease;
};

class Hospital {
private:
    vector<Patient> records;

public:
    void addPatient() {
        Patient p;
        cout << "\nEnter Patient ID: ";
        cin >> p.patientID;
        cin.ignore(); // clear buffer
        cout << "Enter Patient Name: ";
        getline(cin, p.name);
        cout << "Enter Disease: ";
        getline(cin, p.disease);
        records.push_back(p);
        cout << "\n? Patient record added successfully!\n";
    }

    void displayPatients() {
        if (records.empty()) {
            cout << "\n?? No records found.\n";
            return;
        }

        cout << "\n--- Patient Records ---\n";
        for (auto &p : records) {
            cout << "Patient ID: " << p.patientID << endl;
            cout << "Name      : " << p.name << endl;
            cout << "Disease   : " << p.disease << endl;
            cout << "--------------------------\n";
        }
    }

    void searchPatient() {
        if (records.empty()) {
            cout << "\n?? No records to search.\n";
            return;
        }

        int id;
        cout << "\nEnter Patient ID to search: ";
        cin >> id;

        bool found = false;
        for (auto &p : records) {
            if (p.patientID == id) {
                cout << "\n? Record Found!\n";
                cout << "Patient ID: " << p.patientID << endl;
                cout << "Name      : " << p.name << endl;
                cout << "Disease   : " << p.disease << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "\n? Patient not found!\n";
    }

    void deletePatient() {
        if (records.empty()) {
            cout << "\n?? No records to delete.\n";
            return;
        }

        int id;
        cout << "\nEnter Patient ID to delete: ";
        cin >> id;

        for (auto it = records.begin(); it != records.end(); ++it) {
            if (it->patientID == id) {
                records.erase(it);
                cout << "\n??? Patient record deleted successfully!\n";
                return;
            }
        }

        cout << "\n? Patient not found!\n";
    }
};

int main() {
    Hospital h;
    int choice;

    do {
        cout << "\n====== HOSPITAL MANAGEMENT SYSTEM ======";
        cout << "\n1. Add Patient Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Patient by ID";
        cout << "\n4. Delete Patient Record";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: h.addPatient(); break;
            case 2: h.displayPatients(); break;
            case 3: h.searchPatient(); break;
            case 4: h.deletePatient(); break;
            case 5: cout << "\nExiting... Goodbye!\n"; break;
            default: cout << "\n?? Invalid choice. Try again!\n";
        }

    } while (choice != 5);

    return 0;
}

