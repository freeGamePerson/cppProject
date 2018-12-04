#include <iostream>
#include <Log.h>
#include <arpa/inet.h>
using namespace std;
#include <test.cpp>
int main(int argc,char * argv[])
{

    int array[] = {1,5,6,10};

    alterArray(array,4);

    ERROR_LOG<int>(array[1]);
    
    noteditable(array,4);
    ERROR_LOG<int>(array[1]);
}
