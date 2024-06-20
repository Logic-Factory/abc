#pragma once

#include "base/abc/abc.h"
#include "base/main/main.h"
#include "base/main/mainInt.h"
#include "proof/fraig/fraig.h"
#include "opt/fxu/fxu.h"
#include "opt/fxch/Fxch.h"
#include "opt/cut/cut.h"
#include "map/fpga/fpga.h"
#include "map/if/if.h"
#include "opt/sim/sim.h"
#include "opt/res/res.h"
#include "opt/lpk/lpk.h"
#include "aig/gia/giaAig.h"
#include "opt/dar/dar.h"
#include "opt/mfs/mfs.h"
#include "proof/fra/fra.h"
#include "aig/saig/saig.h"
#include "proof/int/int.h"
#include "proof/dch/dch.h"
#include "proof/ssw/ssw.h"
#include "opt/cgt/cgt.h"
#include "bool/kit/kit.h"
#include "map/amap/amap.h"
#include "opt/ret/retInt.h"
#include "sat/xsat/xsat.h"
#include "sat/satoko/satoko.h"
#include "sat/cnf/cnf.h"
#include "proof/cec/cec.h"
#include "proof/acec/acec.h"
#include "proof/pdr/pdr.h"
#include "misc/tim/tim.h"
#include "bdd/llb/llb.h"
#include "bdd/bbr/bbr.h"
#include "map/cov/cov.h"
#include "base/cmd/cmd.h"
#include "proof/abs/abs.h"
#include "sat/bmc/bmc.h"
#include "proof/ssc/ssc.h"
#include "opt/sfm/sfm.h"
#include "opt/sbd/sbd.h"
#include "bool/rpo/rpo.h"
#include "map/mpm/mpm.h"
#include "opt/fret/fretime.h"
#include "opt/nwk/nwkMerge.h"
#include "base/acb/acbPar.h"
#include "misc/extra/extra.h"


#ifndef _WIN32
#include <unistd.h>
#endif

ABC_NAMESPACE_IMPL_START


////////////////////////////////////////////////////////////////////////
///                        DECLARATIONS                              ///
////////////////////////////////////////////////////////////////////////

//#define USE_MINISAT22

extern int Abc_CommandPrintStats             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintExdc              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintIo                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintLatch             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintFanio             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintMffc              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintFactor            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintLevel             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintSupport           ( Abc_Frame_t * pAbc, int argc, char ** argv );
#ifdef ABC_USE_CUDD
extern int Abc_CommandPrintMint              ( Abc_Frame_t * pAbc, int argc, char ** argv );
#endif
extern int Abc_CommandPrintSymms             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintUnate             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintAuto              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintKMap              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintGates             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintSharing           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintXCut              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintDsd               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintCone              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintMiter             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintStatus            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPrintDelay             ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandShow                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandShowBdd                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandShowCut                ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandCollapse               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSatClp                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandStrash                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBalance                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMuxStruct              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMulti                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRenode                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCleanup                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSweep                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFastExtract            ( Abc_Frame_t * pAbc, int argc, char ** argv );
static int Abc_CommandFxch                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandEliminate              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDisjoint               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSparsify               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandLutpack                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandLutmin                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandImfs                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMfs                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMfs2                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMfs3                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMfse                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandLogicPush              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTrace                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandGlitch                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSpeedup                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPowerdown              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAddBuffs               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMerge                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestDec                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestNpn                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestRPO                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestTruth              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRunSat                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRunEco                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRunGen                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRunTest                ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandRewrite                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRefactor               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRestructure            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandResubstitute           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandResubUnate             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandResubCore              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandResubCheck             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRr                     ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCascade                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExtract                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandVarMin                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFaultClasses           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExact                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmsStart               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmsStop                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmsPs                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMajExact               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTwoExact               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandLutExact               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAllExact               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestExact              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMajGen                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandOrchestrate            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAIGAugmentation       ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandLogic                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandComb                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMiter                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMiter2                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDemiter                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandOrPos                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAndPos                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandZeroPo                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSwapPos                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRemovePo               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDropSat                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAddPi                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAppend                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPutOnTop               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFrames                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDFrames                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSop                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBdd                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAig                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandReorder                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBidec                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandOrder                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMuxes                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCubes                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExpand                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSplitSop               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExtSeqDcs              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandReach                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCone                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandNode                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRange                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCof                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTopmost                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBottommost             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTopAnd                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTrim                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandShortNames             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMoveNames              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExdcFree               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExdcGet                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExdcSet                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCareSet                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCut                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandEspresso               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandGen                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandGenFsm                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCover                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDouble                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandInter                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBb2Wb                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandOutdec                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandNodeDup                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandWrap                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestColor              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTest                   ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandQuaVar                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandQuaRel                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandQuaReach               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSenseInput             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandNpnLoad                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandNpnSave                ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandSendAig                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSendStatus             ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandBackup                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRestore                ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandMinisat                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMinisimp               ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandIStrash                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandICut                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIRewrite               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDRewrite               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDRefactor              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDc2                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDChoice                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDch                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDrwsat                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIRewriteSeq            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIResyn                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandISat                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIFraig                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDFraig                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCSweep                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDProve                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbSec                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSimSec                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandMatch                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandHaig                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandQbf                    ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandFraig                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFraigTrust             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFraigStore             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFraigRestore           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFraigClean             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFraigSweep             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFraigDress             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDumpEquiv              ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandRecStart3              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRecStop3               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRecPs3                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRecAdd3                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRecDump3               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRecMerge3              ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandMap                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAmap                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPhaseMap               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandUnmap                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAttach                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSuperChoice            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSuperChoiceLut         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTimeScale              ( Abc_Frame_t * pAbc, int argc, char ** argv );

//extern int Abc_CommandFpga                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandFpgaFast               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIf                     ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIfif                   ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandDsdSave                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDsdLoad                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDsdFree                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDsdPs                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDsdMatch               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDsdMerge               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDsdFilter              ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandScut                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandInit                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandZero                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandUndc                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandOneHot                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPipe                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSeq                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandUnseq                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandRetime                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDRetime                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFlowRetime             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCRetime                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSeqFpga                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSeqMap                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSeqSweep               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSeqSweep2              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestSeqSweep           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestScorr              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandLcorr                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSeqCleanup             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCycle                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandXsim                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSim                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSim3                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDarPhase               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSynch                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandClockGate              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandExtWin                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandInsWin                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSymFun                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPermute                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandUnpermute              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCubeEnum               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPathEnum               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFunEnum                ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandCec                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDCec                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDSec                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSat                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDSat                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandXSat                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSatoko                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Satoko             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sat3               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Kissat             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPSat                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandProve                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIProve                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDebug                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandEco                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmc                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmc2                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmc3                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBmcInter               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIndcut                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandEnlarge                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTempor                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandInduction              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandConstr                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandUnfold                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFold                   ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandUnfold2                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandFold2                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBm                     ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBm2                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandSaucy                  ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTestCex                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandPdr                    ( Abc_Frame_t * pAbc, int argc, char ** argv );
#ifdef ABC_USE_CUDD
extern int Abc_CommandReconcile              ( Abc_Frame_t * pAbc, int argc, char ** argv );
#endif
extern int Abc_CommandCexSave                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCexLoad                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCexCut                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCexMerge               ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandCexMin                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandDualRail               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandBlockPo                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandIso                    ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandTraceStart             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandTraceCheck             ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandAbcSave                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbcLoad                ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandAbc9Get                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Put                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MoveNames          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Save               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Save2              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SaveAig            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Load               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Load2              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9LoadAig            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Read               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReadBlif           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReadCBlif          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReadStg            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReadVer            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9WriteVer           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Write              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9WriteLut           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Ps                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PFan               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Pms                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PSig               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Status             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MuxProfile         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MuxPos             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MuxStr             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MuxDec             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PrintTruth         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Unate              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Rex2Gia            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9RexWalk            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Show               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SetRegNum          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Strash             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Topand             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Add1Hot            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Cof                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Trim               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Dfs                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sim                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sim2               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sim3               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MLGen              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MLTest             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Iwls21Test         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReadSim            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9WriteSim           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PrintSim           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GenSim             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SimRsb             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Resim              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SpecI              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Equiv              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Equiv2             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Equiv3             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Semi               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Times              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Frames             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Retime             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Enable             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Dc2                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Dsd                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Bidec              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Shrink             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Fx                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Extract            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Balance            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9BalanceLut         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Resub              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Reshape            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Syn2               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Syn3               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Syn4               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Synch2             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9False              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Miter              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Miter2             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Append             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Scl                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Lcorr              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Scorr              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Choice             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sat                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SatEnum            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Fraig              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9CFraig             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Srm                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Srm2               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Filter             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Reduce             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9EquivMark          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9EquivFilter        ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Cec                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ICec               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Verify             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sweep              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Force              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Embed              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sopb               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Dsdb               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Flow               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Flow2              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Flow3              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9If                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Iff                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Iiff               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9If2                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Sif                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Jf                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Kf                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Lf                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Mf                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Nf                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Of                 ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Pack               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Edge               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SatLut             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9LNetRead           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9LNetSim            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9LNetEval           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9LNetOpt            ( Abc_Frame_t * pAbc, int argc, char ** argv );
//#ifndef _WIN32
extern int Abc_CommandAbc9Ttopt              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Transduction       ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9TranStoch          ( Abc_Frame_t * pAbc, int argc, char ** argv );
//#endif
extern int Abc_CommandAbc9LNetMap            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Unmap              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Struct             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Trace              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Speedup            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Era                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Dch                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Rpm                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9BackReach          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Posplit            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Permute            ( Abc_Frame_t * pAbc, int argc, char ** argv );
#ifdef ABC_USE_CUDD
extern int Abc_CommandAbc9ReachM             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReachP             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReachN             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ReachY             ( Abc_Frame_t * pAbc, int argc, char ** argv );
#endif
extern int Abc_CommandAbc9Undo               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Mesh               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Iso                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9IsoNpn             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9IsoSt              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Compare            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9RevEng             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Uif                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9CexInfo            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Cycle              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Cone               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Slice              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PoPart             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GroupProve         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9MultiProve         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SplitProve         ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SProve             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SplitSat           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Bmc                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SBmc               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ChainBmc           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9BCore              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ICheck             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SatTest            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9FFTest             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Qbf                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9QVar               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GenQbf             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9HomoQbf            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SatFx              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SatClp             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Inse               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Maxi               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Bmci               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PoXsim             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Demiter            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Fadds              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ATree              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Polyn              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Acec               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Anorm              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Decla              ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Esop               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Exorcism           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Mfs                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Mfsd               ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9DeepSyn            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9SatSyn             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9StochSyn           ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandAbc9PoPart2            ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandAbc9CexCut             ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandAbc9CexMerge           ( Abc_Frame_t * pAbc, int argc, char ** argv );
//extern int Abc_CommandAbc9CexMin             ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandAbc9AbsCreate          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9AbsDerive          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9AbsRefine          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GlaDerive          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GlaRefine          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GlaShrink          ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Gla                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Vta                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Vta2Gla            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Gla2Vta            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Fla2Gla            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Gla2Fla            ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandAbc9Gen                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Cfs                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9ProdAdd            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9AddFlop            ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9BMiter             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GenHie             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9PutOnTop           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9BRecover           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9StrEco             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GenCex             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Odc                ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9GenRel             ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbc9Window             ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandAbc9Test               ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern int Abc_CommandAbcLivenessToSafety    ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbcLivenessToSafetySim ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandAbcLivenessToSafetyWithLTL( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandCS_kLiveness           ( Abc_Frame_t * pAbc, int argc, char ** argv );
extern int Abc_CommandNChooseK               ( Abc_Frame_t * pAbc, int argc, char ** argv );

extern Aig_Man_t * Abc_NtkToDar( Abc_Ntk_t * pNtk, int fExors, int fRegisters );
extern Abc_Ntk_t * Abc_NtkFromAigPhase( Aig_Man_t * pMan );

extern Vec_Ptr_t * Abc_NtkCollectCiNames( Abc_Ntk_t * pNtk );
extern Vec_Ptr_t * Abc_NtkCollectCoNames( Abc_Ntk_t * pNtk );

extern void Extra_BitMatrixTransposeP( Vec_Wrd_t * vSimsIn, int nWordsIn, Vec_Wrd_t * vSimsOut, int nWordsOut );

ABC_NAMESPACE_IMPL_END
