/*
Generic implementation of the s3eIOSAppirater extension.
This file should perform any platform-indepedentent functionality
(e.g. error checking) before calling platform-dependent implementations.
*/

/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */


#include "s3eIOSAppirater_internal.h"
s3eResult s3eIOSAppiraterInit()
{
    //Add any generic initialisation code here
    return s3eIOSAppiraterInit_platform();
}

void s3eIOSAppiraterTerminate()
{
    //Add any generic termination code here
    s3eIOSAppiraterTerminate_platform();
}

void s3eIOSAppiraterParams(int appId, int usesUntilPrompt, int daysUntilPrompt, int daysRemindLater, int numSignificantEvents, const char * rateNowTitle, const char * rateNowText, const char * rateNowYesButton, const char * rateNowNoButton, const char * remindTitle, const char * remindText, const char * remindYesButton, const char * remindNoButton)
{
	s3eIOSAppiraterParams_platform(appId, usesUntilPrompt, daysUntilPrompt, daysRemindLater, numSignificantEvents, rateNowTitle, rateNowText, rateNowYesButton, rateNowNoButton, remindTitle, remindText, remindYesButton, remindNoButton);
}

void s3eIOSAppiraterAppLaunched(bool canPromptForRating)
{
	s3eIOSAppiraterAppLaunched_platform(canPromptForRating);
}

void s3eIOSAppiraterAppEnteredForeground(bool canPromptForRating)
{
	s3eIOSAppiraterAppEnteredForeground_platform(canPromptForRating);
}

void s3eIOSAppiraterUserDidSignificantEvent(bool canPromptForRating)
{
	s3eIOSAppiraterUserDidSignificantEvent_platform(canPromptForRating);
}

void s3eIOSAppiraterRateApp()
{
	s3eIOSAppiraterRateApp_platform();
}
