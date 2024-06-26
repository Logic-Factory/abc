#pragma once


#include "ioAbc.h"
#include "base/main/mainInt.h"
#include "aig/saig/saig.h"
#include "proof/abs/abs.h"
#include "sat/bmc/bmc.h"

#ifdef WIN32
#include <process.h> 
#define unlink _unlink
#else
#include <unistd.h>
#endif

ABC_NAMESPACE_IMPL_START

////////////////////////////////////////////////////////////////////////
///                        DECLARATIONS                              ///
////////////////////////////////////////////////////////////////////////

static int IoCommandRead        ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadAiger   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadBaf     ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadBblif   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadBlif    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadBlifMv  ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadBench   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadDsd     ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadEdif    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadEqn     ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadFins    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadInit    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadPla     ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadPlaMo   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadTruth   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadCnf     ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadVerilog ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadStatus  ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadGig     ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadJson    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandReadSF      ( Abc_Frame_t * pAbc, int argc, char **argv );

static int IoCommandWrite       ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteHie    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteAiger  ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteAigerCex( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteBaf    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteBblif  ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteBlif   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteEdgelist( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteBlifMv ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteBench  ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteBook   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteCellNet( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteCnf    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteCnf2   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteCex    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteDot    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteEqn    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteGml    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteList   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWritePla    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteVerilog( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteSortCnf( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteTruth  ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteTruths ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteStatus ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteSmv    ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteJson   ( Abc_Frame_t * pAbc, int argc, char **argv );
static int IoCommandWriteResub  ( Abc_Frame_t * pAbc, int argc, char **argv );

extern void Abc_FrameCopyLTLDataBase( Abc_Frame_t *pAbc, Abc_Ntk_t * pNtk );

extern int glo_fMapped;

////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////


ABC_NAMESPACE_IMPL_END
