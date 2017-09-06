#ifndef _SETTINGS_H_
#define _SETTINGS_H_


#include "uint128.h"


// settings for interprocess communications
// (note: be sure that MQ_MAX_MESSAGES <= /proc/sys/fs/mqueue/msg_max (=10 on most systems))
#define NROF_WORKERS    	7
#define MQ_MAX_MESSAGES 	10


// settings for the alphabet
#define ALPHABET_START_CHAR	'a'
#define ALPHABET_END_CHAR	'j'
	
	
// settings for the jobs to be done (generated by md5s_main)
static uint128_t md5_list[] =
{
    UINT128(0x0cc175b9c0f1b6a8,0x31c399e269772661),    /* 'a' */
    UINT128(0x900150983cd24fb0,0xd6963f7d28e17f72),    /* 'abc' */
    UINT128(0x7130e432c50e99a2,0x03ffa0d78f83c892),    /* 'bbbbdd' */
    UINT128(0x300ab705557542de,0x0bad2de50d05384e),    /* 'faaa' */
    UINT128(0xa521eef416bb6806,0x5bccd26b3985af49),    /* 'jhfde' */
    UINT128(0xf3cd6bede4e0eb72,0xe743e9705d0e1575),    /* 'afghij' */
};


// the defines below do not need to be modified:

// calculate the number of elements in the alphabet
#define ALPHABET_NROF_CHAR	(ALPHABET_END_CHAR - ALPHABET_START_CHAR + 1)

// calculate the number of elements in the array md5_list[]
#define MD5_LIST_NROF		(sizeof(md5_list) / sizeof(md5_list[0]))

#endif

