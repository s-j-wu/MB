/*InRec.cpp*/
#include "InRec.h"

using namespace std;

InRec::InRec(){
}
string InRec::input(const int n_word, char** wordlist){
    string sentence (wordlist[0]);
    for(int i=0; i<n_word; i++){
        sentence+=" ";
        sentence+=wordlist[i];
    }
    return sentence;
}
string InRec::input(const string sentence){
    string res="";
    s_Weather="";
    s_Place="";
    s_Fact="";
    searchWeather(sentence);
    searchFact(sentence);
    if(s_Weather!=""){
        res+="Intent: Get Weather";
        if(s_Place!=""){
            res+=" City";
        }
    }else if(s_Fact!="")
        res+="Intent: Get Fact";
    else
        res+="Not available";
    return res;
}
void InRec::searchWeather(string sentence){
    /*
    string keyword_Weather,keyword_Place;
    ifstream inFile_Weather, inFile_Place;
    size_t pos_Weather, pos_Place;
    inFile_Weather.open("../keyword/weather.txt");
    while(inFile_Weather>>keyword_Weather){
        pos_Weather = sentence.find(keyword_Weather);
        if (pos_Weather!=npos)
            s_Weather = keyword_Weather;
    }
    inFile_Weather.close();
    inFile_Place.open("../keyword/place.txt");
    while(inFile_Place>>keyword_Place){
        pos_Place = sentence.find(keyword_Place);
        if (pos_Place!=npos)
            s_Place = keyword_Place;
    }
    inFile_Place.close();
    */
    string weather = "What is the weather like today";
    size_t pos_weather;
    pos_weather = sentence.find(weather);
    if(pos_weather!=string::npos)
        s_Weather = weather;
    string place = "Paris";
    size_t pos_place;
    pos_place = sentence.find(place);
    if(pos_weather!=string::npos)
        s_Place = place;
}

void InRec::searchFact(string sentence){
    string keyword_Fact="fact";
    size_t pos_Fact;

    pos_Fact = sentence.find(keyword_Fact);
    if (pos_Fact!=string::npos)
        s_Fact = keyword_Fact;
}
