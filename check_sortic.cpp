
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int ToInt(string str){
    int rez;
    stringstream ss(str);
    ss >> rez;
    return rez;
}

int stringToInt1(string str){
    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

int stringToInt2(string str){
    int result = 0;
    int power = 1;
    for (int i = str.length()-1; i >= 0; i--) {
        result += (str[i] - '0') * power;
        power *= 10;
    }
    return result;
}

int stringToInt3(string str)
{
    int res = 0;

    for (int i = 0; i < str.length(); i++)
        res = (res << 3) + (res << 1) + (str[i] - '0');

    return res;
}

int stringToInt4(string str)
{
    int res = 0;

    for (int i = 0; i < str.length(); i++)
        res = res * 10 + (str[i] - '0');

    return res;
}

//1. Function to convert a string to an int
int stringToInt5(string str)
{
    int res = 0; // Initialize result

    // Iterate through all characters of input string and
    // update result
    for (int i = 0; str[i] != '\0'; ++i)
        res = res*10 + str[i] - '0';

    // return result.
    return res;
}

//2. Function to convert a string to an int using stringstream
int stringToInt6(string str)
{
    // Creating an object of stringstream class
    stringstream ss(str);

    // The object has the value of str
    int x = 0;
    ss >> x;

    // return the value of x
    return x;
}

int stringToInt7(string str)
{
    int res = 0;
    for (int i=0; i<str.length(); i++)
        res = res*10 + (str[i]-'0');
    return res;
}

int stringToInt8(string str)
{
    int res = 0;
    for (int i=0; i<str.length(); i++)
        res = res*10 + (str[i]-'0');
    return res;
}

int stringToInt9(string str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; i<str.length(); i++)
        res = res*10 + (str[i]-'0');

    return sign*res;
}

int stringToInt10(string str)
{
    int res = 0;
    int sign = 1;

    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; i<str.length(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;

        res = res*10 + (str[i]-'0');
    }

    return sign*res;
}

int main(){
    vector <int> mass;
    string fl;

    for(int i = 0; fl != "!"; i++){
        cin >> fl;
        int dead = ToInt(fl);
        mass[i] = dead;
    }

    for(int i = 0; mass.size()-1; i++){
        if(mass[i] > mass[i+1]){
        }else{
            cout << "K.O./(+[]+)/";
            return 0;
        }
    }
    cout << "OK(-_-)";
}
