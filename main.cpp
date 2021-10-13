#include <stdio.h>
#include <string>

#include "InRec.h"
using namespace std;
int main(int argc, char** argv)
{
    if(argc < 1)
        return 0;
    InRec temp;
    string sentence = temp.input(argc, &argv[0]);
    cout<<sentence<<endl;
}
