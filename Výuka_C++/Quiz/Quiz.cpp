#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Question 
{
    string text;
    string optionA;
    string optionB;
    string optionC;
    char answer;
};

vector<Question> readQuestionsFromFile(ifstream& file, int startIndex) 
{
    vector<Question> questions;
    string line;

    for (int i = startIndex; i < startIndex+3; i++) 
    {
        Question q;
        getline(file, q.text);
        getline(file, q.optionA);
        getline(file, q.optionB);
        getline(file, q.optionC);
        file >> q.answer;
        file.ignore();
        questions.push_back(q);
    }

    return questions;
}

int main() 
{
    ifstream file("Qs.txt");

    if (!file) 
    {
        cout << "Error opening the file." << endl;
        return 1;
    }

    int startIndex = 0;
    int totalQuestions = 3;
    int correctAnswers = 0;

    while (startIndex < totalQuestions) 
    {
        vector<Question> questions = readQuestionsFromFile(file, startIndex);

        for (const Question& q : questions) 
        {
            cout << q.text << endl;
            cout << "A) " << q.optionA << endl;
            cout << "B) " << q.optionB << endl;
            cout << "C) " << q.optionC << endl;

            char response;
            cin >> response;

            while (response != 'A' && response != 'B' && response != 'C') 
            {
                cout << "Invalid answer. Please choose A, B, or C: ";
                cin >> response;
            }

            if (response == q.answer) 
            {
                cout << "Correct!" << endl;
                correctAnswers++;
            }
            else 
            {
                cout << "Incorrect!" << endl;
            }
        }
        startIndex += 5;

      
    }

        
    cout << "You got " << correctAnswers << " questions correct.";
    

    file.close();

    return 0;
}