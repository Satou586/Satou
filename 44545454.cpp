
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include "windows.h"
#include "shellapi.h"

using namespace std;

int main() 
{
    const string source_code2 = R"(del C:\Users\Satou\source\repos\44545454\x64\Debug\44545454.exe)";
    const string source_code = R"(
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include "windows.h"
using namespace std;

const string source_code2 = (del C:\Users\Satou\source\repos\44545454\x64\Debug\44545454.exe);

int generate_file()
{  ofstream file("source_code.txt");
    file << source_code;
    file.close();

    return 0;}

int kill_file()
{ofstream new_prog("new_program.bat");
    new_prog << source_code2;
    new_prog << "\ndel \"%~f0\"\n";
    new_prog.close();  
    return 0;}

int main() {
    generate_file();
    kill_file(); 


    return 0;})";

    int generate_file();
    {
        ofstream file("source_code.txt");
        file << source_code;
        file.close();
   
    }
    int kill_file();
    {
        ofstream new_prog("new_program.bat");
        new_prog << source_code2;
        new_prog << "\ndel \"%~f0\"\n";
        new_prog.close();

    }

    BOOL CreateProcessA(
        [in, optional]      LPCSTR                lpApplicationName,
        [in, out, optional] LPSTR                 lpCommandLine,
        [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
        [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
        [in]                BOOL                  bInheritHandles,
        [in]                DWORD                 dwCreationFlags,
        [in, optional]      LPVOID                lpEnvironment,
        [in, optional]      LPCSTR                lpCurrentDirectory,
        [in]                LPSTARTUPINFOA        lpStartupInfo,
        [out]               LPPROCESS_INFORMATION lpProcessInformation
    );


    return 0;
}
