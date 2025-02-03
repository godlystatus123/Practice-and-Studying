#include <iostream>
#include <stdlib.h>

using namespace std;

vector<char> found;
int guesses = 7;

class Word {
    

    private: string word;
    private: int num_guesses;
    private: vector<char> letters;

    public: Word(string w){
        word = w;
        for (int i = 0 ; i < guesses ; i++){
            letters.push_back(word[i]);
        }
    };

    public: string get_word(){
        return word;
    };

    public: vector<char> get_letters(){
        return letters;
    };

    public: void check_correct(char k){
        bool wrong = true;
        for (int i  = 0 ; i < this -> get_letters().size() ; i++){
            if (k == this -> get_letters()[i]){

                //removes the matching letter from the letter vector 
                wrong = false;
                remove(this -> get_letters().begin(), this -> get_letters().end(), get_letters()[i]);
                this -> get_letters().pop_back();
            }
        }
        //removes a guess if given guess doesn't match anything in letter array
        if (wrong){
            guesses -= 1;
        }

    };

};

void guess(Word w){
    //takes guesses and determins if they are correct 
    while (guesses > 0 and w.get_letters().size() > 0){
        char guess;
        cout << "guesses remaining: " << guesses << endl;
        cin >> guess;
        w.check_correct(guess);
    }
    
}



int main(){
    string answer;
    cout << "Hangman!" << endl << "Enter a Word:";
    cin >> answer;
    Word W1(answer);
    guess(W1);
    return 0;
}
