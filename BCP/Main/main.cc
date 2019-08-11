/*
 * Author: Nick Loser
 * Date:  7/28/2019
 * Descripton: Binary conversion program that allows the user to convert AscII values to symbols or binary, as well
 *  as binary to AscII values or symbols.
 * Completion Date: 8/3/2019
 */


// Including declarations
#include <iostream>
#include <vector>
#include <string>


// Using declarations
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


// Prototype declarations
string AtoS(int input, const vector<string>& symbolVector);
string BtoS(string input, const vector<string>& symbolVector);
int StoA(string input, const vector<string>& symbolVector);
int BtoA(string input);
void createVector(vector<string>& symbolVector);
string AtoB(int input);
string StoB(string input, const vector<string>& symbolVector);

/**
 * Main method
 * 
 * // Create the vector in the main method and have a function that will add the symbols to it.
 * //  Pass the vector in by reference to the function that it belongs to clean up code. 
 * 
 */
int main(int argc, char const *argv[])
{
    vector<string> symbolVector;
    createVector(symbolVector);

    int input;
    string value;
    int temp;

    //// Clean this output up a little by making all the options on separate lines  
    cout << "AscII to Symbol (Enter 1)" << endl; 
    cout << "Symbol to AscII (Enter 2)" << endl;
    cout << "Binary to AscII (Enter 3)" << endl;
    cout << "AscII to Binary (Enter 4)" << endl;
    cout << "Binary to Symbol (Enter 5)" << endl;
    cout << "Symbol to Binary (Enter 6)" << endl;
    cout << "Multiple AscII to Symbol (Enter 7)" << endl;
    cout << "Enter: ";

    cin >> input;

    switch (input)
    {
    case 1:
        cout << "Enter an AscII value to be converted to Symbol: ";
        cin >> input;
        cout << AtoS(input, symbolVector) << endl;
        break;

    case 2:
        cout << "Enter the symbol that you would like to convert to AscII: ";
        cin >> value;
        temp = StoA(value, symbolVector);
        if(temp == 128)
        {
            cout << "Symbol can't be converted to AscII" << endl;
        }else
        {
            cout << temp << endl;
        }   
        break;

    case 3:
        cout << "Enter 8 character Binary number you would like to convert: ";
        cin >> value;
        if(!(value.length() > 8))
        {
            cout << BtoA(value) << endl;
        } 
        break;
    case 4:
        cout << "Enter the AscII value you would like to convert: ";
        cin >> input;
        cout << AtoB(input) << endl;
        break;

    case 5:

        cout << "Enter 8 character Binary number you would like to convert: ";
        cin >> value;
        if(!(value.length() > 8))
        {
            cout << BtoS(value, symbolVector) << endl;
        } 
        break;

    case 6:

        cout << "Enter the symbol that you would like to convert to a Binary number: ";
        cin >> value;
        cout << StoB(value, symbolVector) << endl;
        break;

    case 7:
        cout << "Enter how many AscII values: ";
        cin >> temp;
        cout << "Enter AscII values separated by space (Make sure to include AscII values for spaces): ";
        for(auto i = 0; i < temp; ++i)
        {
            cin >> input;
            cout << AtoS(input, symbolVector);
        }
        cout << endl;
        break;

    default:
        cout << "No choice within these parameters was selected" << endl;
        break;
    }

    
    return 0;
}

/**
 * createVector method: This method creates a vector with all the symbols 
 * 
 * @param symbolVector This parameter is passed in by reference so that the vector can add data without having to copy it.
 * 
 */
void createVector(vector<string>& symbolVector)
{
    symbolVector.push_back("NUL");
    symbolVector.push_back("SOH");
    symbolVector.push_back("STX");
    symbolVector.push_back("ETX");
    symbolVector.push_back("EQT");
    symbolVector.push_back("ENQ");
    symbolVector.push_back("ACK");
    symbolVector.push_back("BEL");
    symbolVector.push_back("BS");
    symbolVector.push_back("TAB");
    symbolVector.push_back("LF");
    symbolVector.push_back("VT");
    symbolVector.push_back("FF");
    symbolVector.push_back("CR");
    symbolVector.push_back("SO");
    symbolVector.push_back("SI");
    symbolVector.push_back("DLE");
    symbolVector.push_back("DC1");
    symbolVector.push_back("DC2");
    symbolVector.push_back("DC3");
    symbolVector.push_back("DC4");
    symbolVector.push_back("NAK");
    symbolVector.push_back("SYN");
    symbolVector.push_back("ETB");
    symbolVector.push_back("CAN");
    symbolVector.push_back("EM");
    symbolVector.push_back("SUB");
    symbolVector.push_back("ESC");
    symbolVector.push_back("FS");
    symbolVector.push_back("GS");
    symbolVector.push_back("RS");
    symbolVector.push_back("US");
    symbolVector.push_back("(space)");
    symbolVector.push_back("!");
    symbolVector.push_back("\"");
    symbolVector.push_back("#");
    symbolVector.push_back("$");
    symbolVector.push_back("%");
    symbolVector.push_back("&");
    symbolVector.push_back("\'");
    symbolVector.push_back("(");
    symbolVector.push_back(")");
    symbolVector.push_back("*");
    symbolVector.push_back("+");
    symbolVector.push_back(",");
    symbolVector.push_back("=");
    symbolVector.push_back(".");
    symbolVector.push_back("/");
    symbolVector.push_back("0");
    symbolVector.push_back("1");
    symbolVector.push_back("2");
    symbolVector.push_back("3");
    symbolVector.push_back("4");
    symbolVector.push_back("5");
    symbolVector.push_back("6");
    symbolVector.push_back("7");
    symbolVector.push_back("8");
    symbolVector.push_back("9");
    symbolVector.push_back(":");
    symbolVector.push_back(";");
    symbolVector.push_back("<");
    symbolVector.push_back("=");
    symbolVector.push_back(">");
    symbolVector.push_back("?");
    symbolVector.push_back("@");
    symbolVector.push_back("A");
    symbolVector.push_back("B");
    symbolVector.push_back("C");
    symbolVector.push_back("D");
    symbolVector.push_back("E");
    symbolVector.push_back("F");
    symbolVector.push_back("G");
    symbolVector.push_back("H");
    symbolVector.push_back("I");
    symbolVector.push_back("J");
    symbolVector.push_back("K");
    symbolVector.push_back("L");
    symbolVector.push_back("M");
    symbolVector.push_back("N");
    symbolVector.push_back("O");
    symbolVector.push_back("P");
    symbolVector.push_back("Q");
    symbolVector.push_back("R");
    symbolVector.push_back("S");
    symbolVector.push_back("T");
    symbolVector.push_back("U");
    symbolVector.push_back("V");
    symbolVector.push_back("W");
    symbolVector.push_back("X");
    symbolVector.push_back("Y");
    symbolVector.push_back("Z");
    symbolVector.push_back("[");
    symbolVector.push_back("\\");
    symbolVector.push_back("]");
    symbolVector.push_back("^");
    symbolVector.push_back("_");
    symbolVector.push_back("`");
    symbolVector.push_back("a");
    symbolVector.push_back("b");
    symbolVector.push_back("c");
    symbolVector.push_back("d");
    symbolVector.push_back("e");
    symbolVector.push_back("f");
    symbolVector.push_back("g");
    symbolVector.push_back("h");
    symbolVector.push_back("i");
    symbolVector.push_back("j");
    symbolVector.push_back("k");
    symbolVector.push_back("l");
    symbolVector.push_back("m");
    symbolVector.push_back("n");
    symbolVector.push_back("o");
    symbolVector.push_back("p");
    symbolVector.push_back("q");
    symbolVector.push_back("r");
    symbolVector.push_back("s");
    symbolVector.push_back("t");
    symbolVector.push_back("u");
    symbolVector.push_back("v");
    symbolVector.push_back("w");
    symbolVector.push_back("x");
    symbolVector.push_back("y");
    symbolVector.push_back("z");
    symbolVector.push_back("{");
    symbolVector.push_back("|");
    symbolVector.push_back("}");
    symbolVector.push_back("~");
    symbolVector.push_back(" ");
}

/**
 * AtoB method: Converts AscII value to Binary number.
 * 
 * @param input This is the AscII value that you want to convert.
 * 
 * @return output is a string that is the Binary number for the corresponding AscII value.
 */
string AtoB(int input)
{   
    if(!(input > 255))
    {

        vector<string> binaryVector;

        int value = 128;

        for(auto i = 0; i <= 7; ++i)
        {
            if((input - value) >= 0)
            {
                binaryVector.push_back("1");
                input -= value;
            }
            else
            {
                binaryVector.push_back("0");
            }
            value /= 2;
        }

        string output = "";
        for(auto i = 0; i <= 7; ++i)
        {
            output += binaryVector[i];
        }

        return output;
    }
    else
    {
        return "Your AscII value exceeded the 8 digit length. (AscII value must be 255 or less)";
    }
    
}

/**
 * StoB method: Converts a symbol into a Binary number.
 * 
 * @param input This is the symbol that you would like to convert to Binary
 * 
 * @param symbolVector This vector is passed in by constant reference and has all the symbols so that StoA can be used to convert the symbol to AscII value.
 * 
 * @return output is the Binary number that correspondes to the symbol.
 */
string StoB(string input, const vector<string>& symbolVector)
{
    int asciiVal = StoA(input, symbolVector);
    return AtoB(asciiVal);
}

/**
 * BtoA method: Converts Binary to AscII value.
 * 
 * @param input This is a Binary value that is in the form of a string.
 * 
 * @return output is the AscII value which is the same as the integer value of the Binary number.
 */
int BtoA(string input)
{
    int sum = 0;
    int increaseVal = 1;

    for(auto i = 7; i >= 0; --i)
	{
		if(input[i] == '1')
		{
			sum += increaseVal;
		}
		increaseVal *= 2;
	}

    return sum;
}

/**
 * BtoS method: Converts Binary to Symbol.
 * 
 * @param input This is a Binary value that is in the form of a string.
 * 
 * @param symbolVector This parameter is a constant reference to the vector so that it can be passed to the AtoS function to return the proper symbol.
 * 
 * @return output is the symbol that the Binary represents.
 */
string BtoS(string input, const vector<string>& symbolVector)
{
    int asciiVal = BtoA(input);
    return AtoS(asciiVal, symbolVector);
}

/**
 * AtoS method: Converts AscII value to Binary.
 * 
 * @param input This is the AscII value inputted into the function.
 * 
 * @return returns the string that is represented from the AscII value.
 */
string AtoS(int input, const vector<string>& symbolVector)
{
    if(!(input >= 128))
    {
        
        string output = "";

        //* The reason why I am using the vector to output based on AscII value is because the AscII value is an integer
        //*  and organizes it better than a switch statement or something else.
        output = symbolVector[input];

        return output;

    }else
    {
        return "";
    }
}

/**
 * StoA method: Converts symbols into their corresponding AscII value.
 * 
 * @param input This is the symbol that you want to convert.
 * 
 * @param symbolVector This is a constant reference to the vector that holds all the symbol values.
 */
int StoA(string input, const vector<string>& symbolVector)
{
    int output = 128;

    int counter = 0;
    for(auto i = symbolVector.begin(); i != symbolVector.end(); ++i)
    {
       if(*i == input)
       {
           output = counter;
       }else
       {
           ++counter;
       }
    }

    return output;
}

