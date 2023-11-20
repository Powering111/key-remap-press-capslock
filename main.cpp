#include <iostream>
#include <windows.h>


int main(){
    INPUT input = {0};
    input.type = INPUT_KEYBOARD;
    // caps lock key
    input.ki.wVk = VK_CAPITAL; 
    input.ki.wScan=0;
    // identifier for the key-remap to ignore
    input.ki.dwExtraInfo = (ULONG_PTR)0x12345678; 
    bool is_extended_key = false;
    input.ki.dwFlags = 0;
    
    // key down
    SendInput(1, &input, sizeof(input));
    // key up
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(input));

}