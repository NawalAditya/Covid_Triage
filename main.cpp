
#include <iostream>
#include <fstream>
#include <sstream>
#include "Patient.h"
using namespace std;


int main() {
    Patient data;
    data.read_csv();

    //read aadhar_no from csv = ds
    //generate score
    //store them in DS where searching is easy: Hash Table

    //Classfiy according to beds available:

    //Enqueing

    /*Read next csv
        1. Check if exisiting or not
        2. If exisiting then change data accordingly
        3. Else new patient
    */


    /*
    ifstream inFile;
    int aadhar_no[5], age[5], spo2[5], rtpcr[5],Ad[5], i = 0;
    string Name[5];
    string adhr;
    string name;
    string Age;
    string o2;
    string rt,ad;
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
        convert1 >> aadhar_no[i];

        stringstream convert2(Age);
        convert2 >> age[i];

        stringstream convert3(o2);
        convert3 >> spo2[i];

        stringstream convert4(rt);
        convert4 >> rtpcr[i];

        stringstream convert5(ad);
        convert5 >> Ad[i];

         cout << "Aadhar: " << aadhar_no[i] << endl;
                cout << "Name: " << Name[i] << endl;
               cout << "Age: " << age[i] << endl;
               cout << "SPO2: " << spo2[i] << endl;
               cout << "RTPCR: " << rtpcr[i] << endl;
               cout << "Disablity: " << Ad[i] << endl;
               i++;
    }

        inFile.close();
        system("pause");
        return 0;
}
     */


/*
        cout << "Aadhar: " << adhr << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " <<  Age << endl;
        cout << "SPO2: " << o2 << endl;
        cout << "RTPCR: " << rt << endl;
        cout << "Disablity: " << ad << endl;
*/

    return 0;
}