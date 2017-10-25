/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */

#include "s3eExt.h"
#include "IwDebug.h"
#include "s3eDevice.h"


#include "s3eIOSAppirater.h"


// Define S3E_EXT_SKIP_LOADER_CALL_LOCK on the user-side to skip LoaderCallStart/LoaderCallDone()-entry.
// e.g. in s3eNUI this is used for generic user-side IwUI-based implementation.
#ifndef S3E_EXT_SKIP_LOADER_CALL_LOCK
#if (defined(WINAPI_FAMILY) && (WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP)) || defined I3D_ARCH_NACLX86_64
// For platforms missing stack-switching (WP8, NaCl, etc.) make loader-entry via LoaderCallStart/LoaderCallDone() on the user-side.
#define LOADER_CALL_LOCK
#endif
#endif


#include "s3eIOSAppirater_interface.h"

static s3eIOSAppiraterFuncs g_Ext;
static bool g_GotExt = false;
static bool g_TriedExt = false;
static bool g_TriedNoMsgExt = false;

static bool _extLoad()
{
    if (!g_GotExt && !g_TriedExt)
    {
        s3eResult res = s3eExtGetHash(0xf2eb1843, &g_Ext, sizeof(g_Ext));
        if (res == S3E_RESULT_SUCCESS)
            g_GotExt = true;
        else
            s3eDebugAssertShow(S3E_MESSAGE_CONTINUE_STOP_IGNORE,                 "error loading extension: s3eIOSAppirater");

        g_TriedExt = true;
        g_TriedNoMsgExt = true;
    }

    return g_GotExt;
}

static bool _extLoadNoMsg()
{
    if (!g_GotExt && !g_TriedNoMsgExt)
    {
        s3eResult res = s3eExtGetHash(0xf2eb1843, &g_Ext, sizeof(g_Ext));
        if (res == S3E_RESULT_SUCCESS)
            g_GotExt = true;
        g_TriedNoMsgExt = true;
        if (g_TriedExt)
            g_TriedExt = true;
    }

    return g_GotExt;
}

s3eBool s3eIOSAppiraterAvailable()
{
    _extLoadNoMsg();
    return g_GotExt ? S3E_TRUE : S3E_FALSE;
}

void s3eIOSAppiraterParams(int appId, int usesUntilPrompt, int daysUntilPrompt, int daysRemindLater, int numSignificantEvents, const char * rateNowTitle, const char * rateNowText, const char * rateNowYesButton, const char * remindTitle, const char * remindText, const char * remindYesButton, const char * commonNoButton)
{
    IwTrace(IOSAPPIRATER_VERBOSE, ("calling s3eIOSAppirater[0] func: s3eIOSAppiraterParams"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterParams);
#endif

    g_Ext.m_s3eIOSAppiraterParams(appId, usesUntilPrompt, daysUntilPrompt, daysRemindLater, numSignificantEvents, rateNowTitle, rateNowText, rateNowYesButton, remindTitle, remindText, remindYesButton, commonNoButton);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterParams);
#endif

    return;
}

void s3eIOSAppiraterAppLaunched(bool canPromptForRating)
{
    IwTrace(IOSAPPIRATER_VERBOSE, ("calling s3eIOSAppirater[1] func: s3eIOSAppiraterAppLaunched"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterAppLaunched);
#endif

    g_Ext.m_s3eIOSAppiraterAppLaunched(canPromptForRating);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterAppLaunched);
#endif

    return;
}

void s3eIOSAppiraterAppEnteredForeground(bool canPromptForRating)
{
    IwTrace(IOSAPPIRATER_VERBOSE, ("calling s3eIOSAppirater[2] func: s3eIOSAppiraterAppEnteredForeground"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterAppEnteredForeground);
#endif

    g_Ext.m_s3eIOSAppiraterAppEnteredForeground(canPromptForRating);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterAppEnteredForeground);
#endif

    return;
}

void s3eIOSAppiraterUserDidSignificantEvent(bool canPromptForRating)
{
    IwTrace(IOSAPPIRATER_VERBOSE, ("calling s3eIOSAppirater[3] func: s3eIOSAppiraterUserDidSignificantEvent"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterUserDidSignificantEvent);
#endif

    g_Ext.m_s3eIOSAppiraterUserDidSignificantEvent(canPromptForRating);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterUserDidSignificantEvent);
#endif

    return;
}

void s3eIOSAppiraterRateApp()
{
    IwTrace(IOSAPPIRATER_VERBOSE, ("calling s3eIOSAppirater[4] func: s3eIOSAppiraterRateApp"));

    if (!_extLoad())
        return;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterRateApp);
#endif

    g_Ext.m_s3eIOSAppiraterRateApp();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_s3eIOSAppiraterRateApp);
#endif

    return;
}
