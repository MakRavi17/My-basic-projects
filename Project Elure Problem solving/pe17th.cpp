#include <iostream>
#include <string>

using namespace std;

string numberToWords(int num) {
    static const string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static const string teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    static const string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    static const string hundreds[] = {"", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"};
    
    if (num == 1000) {
        return "one thousand";
    }

    string result;
    if (num >= 100) {
        result += hundreds[num / 100] + " ";
        num %= 100;
        if (num != 0) {
            result += "and ";
        }
    }
    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 11) {
        result += teens[num % 10] + " ";
        num = 0; // Skip the ones digit for teens
    }
    if (num > 0) {
        result += ones[num] + " ";
    }

    return result;
}

int countLetters(string str) {
    int count = 0;
    for (char c : str) {
        if (c != ' ' && c != '-') {
            count++;
        }
    }
    return count;
}

int main() {
    int totalLetters = 0;
    for (int i = 1; i <= 1000; i++) {
        string words = numberToWords(i);
        totalLetters += countLetters(words);
    }

    cout << "Total letters used: " << totalLetters << endl;

    return 0;
}
