/*****************************************************************************/
/* size of ram areas in dwords (32 bits)                                     */
/*****************************************************************************/
#define XMAC_RPU_DWORD_RAMSIZE 0x0100
#define XMAC_TPU_DWORD_RAMSIZE 0x0100
#define XPEC_DWORD_RAMSIZE 0x0800

/*****************************************************************************/
/* xMAC registers netX50                                                     */
/*****************************************************************************/
typedef struct {
  volatile cyg_uint32 aulRpuProgram[XMAC_RPU_DWORD_RAMSIZE];
  volatile cyg_uint32 aulTpuProgram[XMAC_TPU_DWORD_RAMSIZE];
  volatile cyg_uint32 aulSr[16];
  volatile cyg_uint32 ulStatusShared0;
  volatile cyg_uint32 ulConfigShared0;
  volatile cyg_uint32 ulStatusShared1;
  volatile cyg_uint32 ulConfigShared1;
  volatile cyg_uint32 aulReserved0[4];
  volatile cyg_uint32 aulUrxUtx[2];
  volatile cyg_uint32 aulReserved1[2];
  volatile cyg_uint32 ulUrx;
  volatile cyg_uint32 ulUtx;
  volatile cyg_uint32 ulRx;
  volatile cyg_uint32 ulRxHw;
  volatile cyg_uint32 ulRxHwCount;
  volatile cyg_uint32 ulTx;
  volatile cyg_uint32 ulTxHw;
  volatile cyg_uint32 ulTxHwCount;
  volatile cyg_uint32 ulTxSend;
  volatile cyg_uint32 ulRpuPc;
  volatile cyg_uint32 ulTpuPc;
  volatile cyg_uint32 aulWr[10];
  volatile cyg_uint32 ulSysTime;
  volatile cyg_uint32 ulSysTimeUpper;
  volatile cyg_uint32 aulCmpStatus[4];
  volatile cyg_uint32 ulAluFlags;
  volatile cyg_uint32 ulStatusInt;
  volatile cyg_uint32 ulStatBits;
  volatile cyg_uint32 ulStatusMii;
  volatile cyg_uint32 ulStatusMii2;
  volatile cyg_uint32 ulConfigMii;
  volatile cyg_uint32 ulConfigNibbleFifo;
  volatile cyg_uint32 ulConfigSbu;
  volatile cyg_uint32 ulSbuRateMulAdd;
  volatile cyg_uint32 ulSbuRateMulStart;
  volatile cyg_uint32 ulSbuRateMul;
  volatile cyg_uint32 ulStartSamplePos;
  volatile cyg_uint32 ulStopSamplePos;
  volatile cyg_uint32 ulConfigObu;
  volatile cyg_uint32 ulObuRateMulAdd;
  volatile cyg_uint32 ulObuRateMulStart;
  volatile cyg_uint32 ulObuRateMul;
  volatile cyg_uint32 ulStartTransPos;
  volatile cyg_uint32 ulStopTransPos;
  volatile cyg_uint32 ulRpuCount1;
  volatile cyg_uint32 ulRpuCount2;
  volatile cyg_uint32 ulTpuCount1;
  volatile cyg_uint32 ulTpuCount2;
  volatile cyg_uint32 ulRxCount;
  volatile cyg_uint32 ulTxCount;
  volatile cyg_uint32 ulRpmMask0;
  volatile cyg_uint32 ulRpmVal0;
  volatile cyg_uint32 ulRpmMask1;
  volatile cyg_uint32 ulRpmVal1;
  volatile cyg_uint32 ulTpmMask0;
  volatile cyg_uint32 ulTpmVal0;
  volatile cyg_uint32 ulTpmMask1;
  volatile cyg_uint32 ulTpmVal1;
  volatile cyg_uint32 aulReserved2[28];
  volatile cyg_uint32 ulRxTxNofBits;
  volatile cyg_uint32 ulReserved3;
  volatile cyg_uint32 ulRxCrcPolynomialL;
  volatile cyg_uint32 ulRxCrcPolynomialH;
  volatile cyg_uint32 ulRxCrcL;
  volatile cyg_uint32 ulRxCrcH;
  volatile cyg_uint32 ulRxCrcCfg;
  volatile cyg_uint32 ulTxCrcPolynomialL;
  volatile cyg_uint32 ulTxCrcPolynomialH;
  volatile cyg_uint32 ulTxCrcL;
  volatile cyg_uint32 ulTxCrcH;
  volatile cyg_uint32 ulTxCrcCfg;
  volatile cyg_uint32 ulRpuHoldPc;
  volatile cyg_uint32 ulTpuHoldPc;
} XMAC_AREA_T, *PXMAC_AREA_T;

/*****************************************************************************/
/* xPEC registers netX50                                                     */
/*****************************************************************************/
typedef struct {
  volatile cyg_uint32 aulR[8];
  volatile cyg_uint32 ulRange01;
  volatile cyg_uint32 ulRange23;
  volatile cyg_uint32 ulRange45;
  volatile cyg_uint32 ulRange67;
  volatile cyg_uint32 ulTimer0;
  volatile cyg_uint32 ulTimer1;
  volatile cyg_uint32 ulTimer2;
  volatile cyg_uint32 ulTimer3;
  volatile cyg_uint32 ulUrxCount;
  volatile cyg_uint32 ulUtxCount;
  volatile cyg_uint32 ulPc;
  volatile cyg_uint32 ulZero;
  volatile cyg_uint32 ulStatCfg;
  volatile cyg_uint32 ulEcMaskA;
  volatile cyg_uint32 ulEcMaskB;
  volatile cyg_uint32 aulEcMask[10];
  volatile cyg_uint32 ulTimer4;
  volatile cyg_uint32 ulTimer5;
  volatile cyg_uint32 ulIrq;
  volatile cyg_uint32 ulSystimeNs;
  volatile cyg_uint32 ulFifoData;
  volatile cyg_uint32 ulSystimeS;
  volatile cyg_uint32 ulAdc;
  volatile cyg_uint32 aulSr[16];
  volatile cyg_uint32 aulStatCfg[4];
  volatile cyg_uint32 aulUrtx[4];
  volatile cyg_uint32 ulXpuHoldPc;

  volatile cyg_uint32 aulReserved0[4031];
  volatile cyg_uint32 aulPRam[XPEC_DWORD_RAMSIZE];
  volatile cyg_uint32 aulRam[XPEC_DWORD_RAMSIZE];
} XPEC_AREA_T, *PXPEC_AREA_T;
