/* Copyright (C) : SandeepKalra */


#ifndef _OFT_TYPES_H_
#define _OST_TYPES_H_

typedef unsigned char	oftU8;
typedef signed char 	oftI8;

typedef unsigned short	oftU16;
typedef signed short 	oftI16;

typedef unsigned int 	oftU32;
typedef signed int 		oftI32;

typedef unsigned long long 	oftU64;
typedef signed long long 	oftI64;


static_assert(1 == sizeof(oftU8) ,  "U8 != 8bit" );
static_assert(1 == sizeof(oftI8) ,  "I8 != 8bit" );

static_assert(2 == sizeof(oftU16) ,  "U16 != 16 bit" );
static_assert(2 == sizeof(oftI16) ,  "I16 != 16 bit" );

static_assert(4 == sizeof(oftU32) ,  "U32 != 32 bit" );
static_assert(4 == sizeof(oftI32) ,  "I32 != 32 bit" );

static_assert(8 == sizeof(oftU64) ,  "U64 != 64 bit" );
static_assert(8 == sizeof(oftI64) ,  "I64 != 64 bit" );


#define oftMin(a,b) ((a<b)?(a):(b))
#define oftMax(a,b) ((a>b)?(a):(b))



#endif
