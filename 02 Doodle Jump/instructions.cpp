// This is meant to display the rules of the game to the player before the game begins

#include <windows.h>

printRules() {
  
  
  int rulesBox = MessageBox(
    NULL, 
    (LPCWSTR)L"The rules of DoodleJump are easy!\nFirst, select your character and background.\nThen use your arrow keys to move your character and dodge objects!\n", 
    (LPCWSTR)L"DoodleJump Rules", 
    MB_OK
  );
  
}
  
  
  
