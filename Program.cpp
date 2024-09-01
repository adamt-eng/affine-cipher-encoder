#include <iostream>
#include <string>

using namespace std;

constexpr char italian_alphabet[23] = " ABCDEFGHILMNOPQRSTUVZ";
constexpr int alphabet_size = sizeof(italian_alphabet) - 1;

namespace
{
    int find_numerical_representation(char character)
    {
        for (int i = 0; i < alphabet_size; ++i)
        {
            if (italian_alphabet[i] == character)
            {
                return i;
            }
        }

        return 0; // Default to space if character is not found.
    }

    char find_corresponding_character(int index)
    {
        return italian_alphabet[index];
    }
}

int main()
{
    while (true)
    {
        cout << "Ciphering Alphabet: \"";

        for (char c : italian_alphabet)
        {
            cout << c;
        }

        cout << "\" (Italian alphabet including the space character)";

        int a = 0, b = 0;

        cout << "\n\nPlease enter your ciphering keys:\nA: ";
        cin >> a;

        cout << "B: ";
        cin >> b;

        cout << "\nEnter the text you'd like to cipher: ";

        cin.ignore();

        string input;
        getline(cin, input);

        cout << "\nCiphered Text (Inside Quotations): \"";

        // Loop over each character in the input
        for (char i : input)
        {
            int numerical_representation = find_numerical_representation(i);
            int ciphered_index = (a * numerical_representation + b) % alphabet_size;
            cout << find_corresponding_character(ciphered_index);
        }

        cout << "\"";

        int prompt = -1;
        cout << "\n\n[1] Exit\n[2] Try Again\n\n";
        cin >> prompt;

        if (prompt == 2)
        {
            system("CLS"); // Clear Terminal
            continue;
        }

        return 0;
    }
}
