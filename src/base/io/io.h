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

extern int IoCommandRead        ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadAiger   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadBaf     ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadBblif   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadBlif    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadBlifMv  ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadBench   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadDsd     ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadEdif    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadEqn     ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadFins    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadInit    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadPla     ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadPlaMo   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadTruth   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadCnf     ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadVerilog ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadStatus  ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadGig     ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadJson    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandReadSF      ( Abc_Frame_t * pAbc, int argc, char **argv );

extern int IoCommandWrite       ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteHie    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteAiger  ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteAigerCex( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteBaf    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteBblif  ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteBlif   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteEdgelist( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteBlifMv ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteBench  ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteBook   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteCellNet( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteCnf    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteCnf2   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteCex    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteDot    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteEqn    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteGml    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteList   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWritePla    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteVerilog( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteSortCnf( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteTruth  ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteTruths ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteStatus ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteSmv    ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteJson   ( Abc_Frame_t * pAbc, int argc, char **argv );
extern int IoCommandWriteResub  ( Abc_Frame_t * pAbc, int argc, char **argv );

extern void Abc_FrameCopyLTLDataBase( Abc_Frame_t *pAbc, Abc_Ntk_t * pNtk );

extern int glo_fMapped;

////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////


ABC_NAMESPACE_IMPL_END
