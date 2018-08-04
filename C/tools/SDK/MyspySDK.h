#ifndef _H_MYSPYSDK
#define _H_MYSPYSDK
#define SPYVER 0x001

#include <windows.h>
#define MMSG    		int
#define MPARAM  		DWORD
#define PageWidth		326
#define PageHeight	189

//MySpy plugin callback function
typedef int __stdcall (*MySpyPluginProc)
  (MMSG msg,MPARAM wParam,MPARAM lParam);

//Application information structure
typedef struct APPINFO
{
  char Name[20];
  char Version[10];
  char Author[20];
} AppInfo,*PAppInfo;

typedef struct WNDINFO
{
	char* AppPathName;
	HWND	CapturedWnd;
} WndInfo,*PWndInfo;

typedef struct SPYINFO
{
	char SpyPath[256];
	DWORD  SpyVersion;
	DWORD SpyBKColor;
	HWND SpyWnd;
	DWORD	SpyForm;
	DWORD SpyApplication;
	HWND CapturedWnd;
	char CapturedApp[256];
	DWORD CapturedColor;
	HWND CapturedIEWnd;
	DWORD CapturedIEInterface; 	
	DWORD CapturedIEElement;
}SpyInfo,*PSpyInfo;


//MySPY Message Declare
//This messages is events when some signature occured. 
#define MM_NULL         0x0000 //reserved.
#define MM_INIT         0x0001 
#define MM_DESTROY      0x0002
#define MM_ADDPAGE      0x0003
#define MM_GETPAGEICON  0x0004
#define MM_GETINFO   		0x0005
#define MM_ADDMENU      0x0006
#define MM_MENUINVOKE		0x0007
#define MM_FLIPPAGE			0x0008
#define MM_BEGINCAPTURE	0x0009
#define MM_CAPTURE			0x000A
#define MM_ENDCAPTURE		0x000B
#define MM_PLACEPAGE		0x000C
#define MM_ABOUT				0x000F
#define MM_CONFIG				0x0010


//This messages can be used to control MySpy's behavior or action
//You can send them to MySpy's Handle directly.
#define MM_GETSPYINFO		WM_USER+8000
#define MM_SETWINDOW		WM_USER+8001


//MySpy Retrue Result Declare
#define MR_BADCALL     -1
#define MR_NOHANDLE     0
#define MR_HANDLED      1
#define MR_HASMORE			2
#define MR_MSGHIDE			0
#define MR_MSGSHOW			1



#endif
