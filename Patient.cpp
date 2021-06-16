#include "Patient.h"
#include <bits/stdc++.h>

using namespace std;


void Patient::read_csv() {
    ifstream inFile;
    int aadhar[5], age[5], spo2[5], rtpcr[5], Ad[5], i = 0;
    string Name[5];
    string adhr;
    string name;
    string Age;
    string o2;
    string rt, ad;
    inFile.open("day1.csv");
    if (inFile.is_open()) {
        cout << "File has been opened" << endl;
    } else {
        cout << "NO FILE HAS BEEN OPENED" << endl;
    }

    while (!inFile.eof()) {
        getline(inFile, adhr, ',');
        getline(inFile, Name[i], ',');
        getline(inFile, Age, ',');
        getline(inFile, o2, ',');
        getline(inFile, rt, ',');
        inFile >> ad;

        stringstream convert1(adhr);
        convert1 >> aadhar[i];

        stringstream convert2(Age);
        convert2 >> age[i];

        stringstream convert3(o2);
        convert3 >> spo2[i];

        stringstream convert4(rt);
        convert4 >> rtpcr[i];

        stringstream convert5(ad);
        convert5 >> Ad[i];

        cout << "Aadhar: " << aadhar[i] << endl;
        cout << "Name: " << Name[i] << endl;
        cout << "Age: " << age[i] << endl;
        cout << "SPO2: " << spo2[i] << endl;
        cout << "RTPCR: " << rtpcr[i] << endl;
        cout << "Disablity: " << Ad[i] << endl;

        int CS = 4;
        insert(aadhar[i], CS);
        search(aadhar[i]);
        i++;
    }
    inFile.close();
    system("pause");
}

Patient::Patient() {
    head = nullptr;
}

void Patient::search(int adhar) {
    Patient *temp;
    temp = head;
    bool check = false;
    while (temp != nullptr) {
        if ((temp->aadhar_no) == adhar) {
            cout << "Found!" << endl;
            //update covid score
            check = true;
        }
        temp = temp->next;
    }
    if (check) {
        //insert
    }
}

void Patient::insert(int a, int s) {
    Patient *temp = new Patient;
    temp->aadhar_no = a;
    temp->score = s;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
    } else {
        Patient *it = head;

        while (it->next != nullptr) {
            it = it->next;
        }
        it->next = temp;
    }
    cout << "Ok";
}