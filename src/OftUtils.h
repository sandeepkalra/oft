/* Copyright (C) : SandeepKalra */
#ifndef _OFT_UTILS_H_
#define _OFT_UTILS_H_

#include <deque>
#include <pthread.h>

typedef void (*funcptr)(int) ;

class CLock {

pthread_mutex_t m_mutex;
public:
	CLock () { m_mutex  = PTHREAD_MUTEX_INITIALIZER; }
	void Lock() 
	{
		pthread_mutex_lock (&m_mutex);
	}
	void UnLock()
	{
		pthread_mutex_unlock (&m_mutex);
	}
};


class CSessionContext {
	oftU32 mi_seqno;
	oftU32 mo_seqno;
	oftU32 m_heartbtInt;
public:
	oftU32 createNextOutgoingSeqNo() { return (++ mo_seqno); } 
	oftU32 getExpectedIncomingSeqNo() { return (mi_seqno);}
	void   setIncomingSeqNo(oftU32 vi_seqno) { mi_seqno = vi_seqno; }
	void   SetHeartBeatInt(oftU32 v_heartbtInt) { m_heartbtInt = v_heartbtInt; }
	oftU32 GetHeartBeatInt() { return m_heartbtInt; }
};

class CTimer {
	oftU32 m_first_timer;
	oftU32 m_cumm_timer; // Possible overflow
	struct STimer {
		funcptr callback;
		oftU32	m_timer; // This will hold only a differential time value
		oftU32  m_handle; // if timer values collide in array; the handle will get same for those elements.
	};
	std::deque<STimer> m_timers;
public:
	void Start(oftU32 v_seconds) { }
	void Stop(oftU32 v_handle) { }
};


#endif
