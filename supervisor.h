class Supervisor{

protected:
char supID;
int supMobileNumber[10];
char supName[20];
char supEmail[30];

public:
Supervisor();
Supervisor(char psupID, int psupMobileNumber, const char psupName[],const char psupEmail[]);
void setExam();
void displayExam();
void displayResults();
void displayDetails();
~ Supervisor();
};
