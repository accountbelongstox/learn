#include <windows.h>
#include <MyspySDK.h>
#pragma argsused

HINSTANCE DllInst=NULL;
int LoadCount=0;

int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void* lpReserved)
{
  DllInst=hinst;
  switch(reason)
  {
    case DLL_PROCESS_ATTACH:
      LoadCount++;
      //place your init code here
      break;
    case DLL_PROCESS_DETACH:
      LoadCount--;
      //place your destroy code here
      break;
  }
  return 1;
}

//This template is only for BCB, if you using VC or other dev-tool, please
//make sure your export func named MMPlugin and named _MMPlugin in DLL.
//
extern "C" __declspec(dllexport)
int __stdcall MMPlugin(MMSG msg,MPARAM wParam,MPARAM lParam)
{
  switch(msg)
  {
    case MM_INIT:
      //place your init code here
      break;
    case MM_DESTROY:
      //place your destroy code here
      break;
    //place your switch-case to handle msg
  }
  return MR_BADCALL;
}


