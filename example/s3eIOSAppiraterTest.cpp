#include "IwDebug.h"
#include "IwGx.h"
#include "s3eExt.h"
#include "s3eIOSAppirater.h"
#include "s3eOSReadString.h"
#include "s3ePointer.h"

void appiraterInit()
{
    s3eIOSAppiraterAppLaunched(false);
    s3eIOSAppiraterParams(999999, 0, 0, 0, 0, "Rate Now?", "PLZ?", "Yes, now", "Rate Later?", "PLZ PLZ?", "Yes, later", "No, thanks");
}

void touchEvent(s3ePointerTouchEvent *event)
{
    if(event->m_Pressed)
    {
        s3eIOSAppiraterUserDidSignificantEvent(true);
    }
}

// Example showing how to use the Appirater extension
int main()
{
    s3eDebugOutputString("Booting Appirater example");

    s3ePointerRegister(S3E_POINTER_BUTTON_EVENT, (s3eCallback)touchEvent, NULL);

    IwGxInit();

    IwGxSetColClear(0, 0, 0, 0xff);

    if (!s3eIOSAppiraterAvailable())
    {
        s3eDebugOutputString("Error: Appirater not available!");

        return 1;
    }

    appiraterInit();

    while(!s3eDeviceCheckQuitRequest())
    {
        IwGxClear();

        IwGxPrintString(100, 100, "s3eAppiraterTest");

        IwGxPrintString(100, 300, "Touch to fire event");

        IwGxFlush();
        IwGxSwapBuffers();
        s3eDeviceYield(0);
    }

    IwGxTerminate();

    return 0;
}