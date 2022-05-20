#include "feedback.h"
#include <cstring>

Feedback::Feedback()
{
  strcpy(feedbackID,"");
}

Feedback::Feedback(char pfeedbackID)
{
  strcpy(feedbackID, pfeedbackID);
}

void Feedback::addFeedback()
{
  
}
void Feedback::displayFeedback()
{

}

Feedback::~Feedback()
{
  //Destructor
}