/* This program is a game where the user will enter two different numbers and a name. Then the program will produce
 a short story based on what the user enters for information*/
//files needed for the preprocessor for the programs functions.
#include<iostream>
using namespace std;
//variables that will be used by the program
int groupNum;
int numKilled;
string name;
int choice;
int main() {
    cout << "Please enter a number." << endl;
    cin >> groupNum;
    cout << "Please enter another number." << endl;
    cin >> numKilled;
    cout << "Please enter a name." << endl;
    cin >> name;
    //these lines are used to verify entries during testing phase and will be commented out after program is complete.
    cout << "number in group" << groupNum << endl;
    cout << "number killed" << numKilled << endl;
    cout << "The name you selected is " << name<<endl;
    //this is where all the information will be put into a story
    cout << "One day " << groupNum << " where heading on a vacation to the rainforest. There plane was being flown by an expert pilot"
        "who went by the name " << name << ". All of a sudden there was a horrible storm forcing the pilot to make an emergency landing."
        "Everyone in the group came out of the crash with minor scrapes and bruises. However they were now stranded in the rain forest."
        "There were many miles between where they landed and where they needed to go. They needed to decide what they were going to do now." << endl;
    cout << "Now its your time to make a decision./n 1. Start heading toward civilization 2. Stay and hope to be found." << endl;
    cout << "Please enter the number of your choice." << endl;
    cin >> choice;
   /* if (choice == 1)
    {
        cout << "You take the lead and decide that it is better to stay with the plane becuase someone will be coming to look for you."
            "However you quickly realize that during the emergency landing your distress signal was broken and have wasted two days."
            "While waiting out some of the passengers with minor injuries have developed bad infections and have passed due to not getting medical treatment."
            << endl;
    if(choice ==2)
    {
        cout << "You choose to start the journey towards civilization you and your group take the most essential items and start the long hike"
            << endl;
    }
    }
    */
    


}