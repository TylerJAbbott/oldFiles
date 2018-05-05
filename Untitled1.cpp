#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	while(1){
		
cout << "Hello " << endl;
Sleep(1000); 
	
if( GetAsyncKeyState( 'A' ) & 0x8000 )
{
	Sleep(300);
	system ("notepad.exe");
	SetCursorPos(748,294);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(400);
}

}
}
