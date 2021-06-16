#ifndef IT206_PATIENT_H
#define IT206_PATIENT_H



class Patient{
private:
    int aadhar_no;
    int score;
    Patient *next;
    Patient *head;

public:
    Patient();
    void insert(int,int);
    void read_csv();
    void search(int);
};

// 2 vastu, next pointer->data
//aadhar no, score, next node pointer

/*
class Patient {
private:
    patient_data p;
    Patient *next;
    Patient *head;

public:
    Patient();
    void insert(int,int);
    void read_csv();
    void search(int);

};
*/

#endif //IT206_PATIENT_H
