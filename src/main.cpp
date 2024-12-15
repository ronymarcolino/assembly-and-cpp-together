#include <iostream>

/*
 * This project demonstrates how to integrate Assembly code into programs written in C++.
 * It serves as an example for developers who want to use low-level routines for
 * optimization or specific manipulations that are not easily accessible with C++ alone.
 *
 * In this case, for example, we can do memory access to fill variables values using MOV mnemonic
 * and declare a function with assembly code inside
 *
 * This assembly code is only compatible with the x86 architecture
 */

struct first_type
{
        char *weasel;
        int same_name;
};

struct second_type
{
        int wonton;
        long same_name;
};

int xtimes_y(unsigned short numx, unsigned short numy);

int main()
{
        struct first_type hal;
        struct second_type oat;

        __asm
        {
                lea ebx, hal
                mov ecx, [ebx]hal.same_name ;
                mov esi, [ebx].weasel       ;
                mov ecx, [ebx]oat.same_name ;
                mov hal.same_name, 0xffff;
                mov oat.same_name, 0x00ff;
        }
        int result{};
        __asm { 
                mov al, 0xD007
                mov dx, 0xD007  
                mov result, 1220
        }

        std::cout << "hal.same_name: " << hal.same_name << "\n";
        std::cout << "oat.same_name: " << oat.same_name << "\n";
        std::cout << "10 times 2: " << xtimes_y(10, 2) << "\n";
        std::cout << "Result: " << result << "\n";

        return 0;
}

int xtimes_y(unsigned short numx, unsigned short numy)
{
        unsigned short result;
        __asm {
                mov ax, numx   ; Load the first argument into EAX
                imul eax, numy     ; Multiply EAX by the second argument
                mov result, ax ; Store the result in the variable
        }
        return result;
}