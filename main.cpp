#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


string mixWord(string word)
{
    string mixedWord("");
    int position(0);
    srand(time(0));

    while(word.size() != 0)
    {
        position = rand() % word.size();
        mixedWord.push_back(word[position]);
        word.erase(position, 1);
    }
    return mixedWord;

}

int main()
{

    string mysteryWord, answerUser, mysteryMixedWord;


    //1 : typing mystery word

    cout << "Typing mystery word" << endl;
    cin >> mysteryWord;
    cout << endl;

    //2 : mix letters

    string mixedWord;
    mysteryMixedWord = mixWord(mysteryWord);

    //3 : ask mystery word

    bool answerWord(false);

    while(answerWord == false)
    {
        cout << "What is the word ? " << mixedWord << endl;
        cin >> answerUser;

        if(answerUser == mysteryWord)
        {
            cout << "Congratulation !" << endl;
            answerWord = true;
        }
        else
        {
            cout << "Incorrect !" << endl;
            answerWord = false;
        }
        cout << endl;
    }

    return 0;
}
