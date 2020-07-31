#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

std::string charToString(char x) { //Found on: https://www.geeksforgeeks.org/how-to-convert-a-single-character-to-string-in-cpp/
    std::string s(1, x);
    return s;
}

std::vector<std::string> Tokenize(std::string equation, const std::string delim) {
    std::vector<std::string> tokens; //The result that will be returned
    std::string number; //A block of memory used for creating multi-digit numbers

    //Step 1: Compute number of operators in equation, preallocate space to "tokens".
    int delimcount = delim.length(); //Number of operations to search for 
    int opcount = 0; //Total number of all operator types
    for (int i = 0; i < delimcount; i++) { //For each type of deliminator...
        opcount += std::count(equation.begin(), equation.end(), delim[i]); //Count how many delims are present and add them to the sum
    }
    tokens.reserve((2 * opcount) + 1);

    //Step 2: Start splitting up the equation into pieces.
    int eqlength = equation.length();
    for (int i = 0; i < eqlength; i++) { //For each character in the equation...
        if ((std::count(delim.begin(), delim.end(), equation[i]) == 0) && (i != (eqlength - 1))) { //If the character is NOT a deliminator...
            number.append(charToString(equation[i])); //Add number to the "number box"
        }
        else if ((std::count(delim.begin(), delim.end(), equation[i]) == 1) && (i != (eqlength - 1))) { //If the character IS a deliminator...
            tokens.push_back(number); //Add fully-formed number to tokens
            number = ""; //Clear string
            tokens.push_back(charToString(equation[i])); //Add operator to tokens as well
        }
        else if (i == (eqlength - 1)) { //If the for loop is on its last character...
            number.append(charToString(equation[i]));
            tokens.push_back(number);
            number = "";
        }
    }
    //Step 3: Return all of the pieces in a string vector as the output of the function.
    return tokens;
}

//int EDMAS(std::vector<std::string> tokens) {
//    int token_size = tokens.size();
//    int a, b;
//    std::string operations = "^*/+-";
//    int oplength = operations.length();
//    for (int i = 0; i < oplength; i++) { //For every ordered operation...
//        for (int j = 0; j < std::count(tokens.begin(), tokens.end(), operations[i]); j++) { //For every exponential operator...
//            std::vector<std::string>::iterator iter = std::find(tokens.begin(), tokens.end(), operations[i]);
//            int index = iter - tokens.begin();
//            a = std::stoi(tokens[j - 1]);
//            b = std::stoi(tokens[j + 1]);
//            switch (operations[i]) {
//            case '^':
//                tokens[j] = std::to_string(pow(a, b));
//            case '*':
//                tokens[j] = std::to_string(a * b);
//            case '/':
//                tokens[j] = std::to_string(a / b);
//            case '+':
//                tokens[j] = std::to_string(a + b);
//            case '-':
//                tokens[j] = std::to_string(a - b);
//            }
//            tokens.erase(iter - 1);
//            tokens.erase(iter + 1);
//        }
//    }
//    return tokens.size();
//}

int main() {
    std::cout << "Tokenization Script" << std::endl;
    std::string input;
    std::vector<std::string> input_processed;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input); //Only using this method so that spaces
    std::cout << std::endl;
    input_processed = Tokenize(input, " ");
    int vsize = input_processed.size(); //The number of words in the sentence
    std::cout << "List of Words in the Sentence:" << std::endl;
    for (int i = 0; i < vsize; i++) {
        std::cout << input_processed[i] << std::endl;
    }
}
