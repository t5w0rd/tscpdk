/* 
 * File:   Application.cpp
 * Author: thunderliu
 * 
 * Created on 2014年2月4日, 上午3:00
 */

#include "CommInc.h"
#include "Application.h"
#include "MultiRefObject.h"
#include <tscpdk/TSCPDK.h>

USING_NS_TSCPDK;


// CLogicApplication
CLogicApplication * CLogicApplication::sm_pSharedApplication = NULL;

CLogicApplication::CLogicApplication()
: m_lAnimationIntervalMS(0)
, m_lLastTimeMS(0)
, m_fElapsedTimeMS(0.0f)
, m_bBursting(false)
{
	assert(!sm_pSharedApplication);
	sm_pSharedApplication = this;
}

CLogicApplication::~CLogicApplication()
{
	assert(this == sm_pSharedApplication);
	sm_pSharedApplication = NULL;
}

int CLogicApplication::run()
{
    m_fElapsedTimeMS = 0.0f;
	// Initialize instance and cocos2d.
	if (!applicationDidFinishLaunching())
	{
		return 0;
	}

    m_lLastTimeMS = 0;
	for (;;)
    {
        long lCurTime = m_bBursting ? m_lLastTimeMS + m_lAnimationIntervalMS : getCurMSec();
        if (m_lLastTimeMS)
        {
            float dt = (lCurTime - m_lLastTimeMS) * 0.001;
            m_fElapsedTimeMS += dt;
            applicationTick(dt);
            CAutoReleasePool::sharedAutoReleasePool()->releaseObjects();
        }
        m_lLastTimeMS = lCurTime;
		
        if (m_bBursting)
        {
            lCurTime = m_lLastTimeMS;
        }
        else
        {
            lCurTime = getCurMSec();
            if (lCurTime - m_lLastTimeMS < m_lAnimationIntervalMS)
            {
                SleepForMSec(m_lAnimationIntervalMS - (lCurTime - m_lLastTimeMS));
            }
        }
	}
    
	return -1;
}

void CLogicApplication::setAnimationInterval(double interval)
{
	//TODO do something else
	m_lAnimationIntervalMS = interval * 1000.0f;
}

CLogicApplication* CLogicApplication::sharedApplication()
{
	assert(sm_pSharedApplication);
	return sm_pSharedApplication;
}

bool CLogicApplication::applicationDidFinishLaunching()
{
    return true;
}

void CLogicApplication::applicationTick(float fDt)
{
}

long CLogicApplication::getCurMSec()
{
	struct timeval stCurrentTime;
	gettimeofday(&stCurrentTime, NULL);
	return stCurrentTime.tv_sec * 1000 + stCurrentTime.tv_usec * 0.001; // millseconds
}


// CApplicationLog
void CApplicationLog::Log(const char* pFormat, ...)
{
    fprintf(stdout, "[%03.2f] ", CLogicApplication::sharedApplication()->getElapsedTime());
    va_list argv;
    va_start(argv, pFormat);
    vfprintf(stdout, pFormat, argv);
    va_end(argv);
    fprintf(stdout, "\n");
}

