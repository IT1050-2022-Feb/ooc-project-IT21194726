#include "supervisor.h"
#include "admin.h"
#include <cstring>

Supervisor::Supervisor()
{
  int supMobileNumber = 0;
  strcpy(supID,"");
  strcpy(supName,"");
  strcpy(supEmail, "")
  Admin *adm;
}
Supervisor::Supervisor(char psupID, int psupMobileNumber, const char psupName[],const char psupEmail[])
{
  supMobileNumber = psupMobileNumber;
  strcpy(supID,psupID);
  strcpy(supName,psupName);
  strcpy(supEmail,psupEmail);
}
void Supervisor::displayDetails()
{
  
}
void Supervisor::setExam()
{
  
}
void Supervisor::displayExam()
{
  
}
void Supervisor::displayResults()
{
  
}
Supervisor::~Supervisor()
{
  //Destructor
}