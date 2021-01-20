#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    /*Here we create a random message flag */
    MSG Msg;
    /* Here we pass the message into an infinite loop
     so that when our application is executed, it does
     not open a prompt window and so it can stay stealthy */
    while (GetMessage (&Msg, NULL, 0, 0))
      {
          TranslateMessage(&Msg);
          DispatchMessage(&Msg);
      }
    return 0;
}
