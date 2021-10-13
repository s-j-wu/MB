/*InRec.h*/
#ifndef INREC_H
#define INREC_H

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;
class InRec{
public:
    InRec();
    string input(const int n_word, char** wordlist);
    string input(const string sentence);
private:
    void searchWeather(string sentence);
    void searchFact(string sentence);
    string s_Weather;
    string s_Place;
    string s_Fact;

};
#endif // INREC_H
