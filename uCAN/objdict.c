
/* File generated by gen_cfile.py. Should not be modified. */
#include "data.h"
#include "objdict.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
//UNS8 bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

//const UNS8 iam_a_slave = 1;

//TIMER_HANDLE heartBeatTimers[1];

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 obj1000 = 0x0;	/* 0 */
                    subindex Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&obj1000 }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 obj1001 = 0x0;	/* 0 */
                    subindex Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&obj1001 }
                     };



/* index 0x1014 :   Emergency COB ID. */
                    UNS32 obj1014 = 0x80;	/* 128 */
                    subindex Index1014[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&obj1014 }
                     };


/* index 0x1017 :   Producer Heartbeat Time. */
                    UNS16 obj1017 = 0x0;	/* 0 */
                    ODCallback_t Index1017_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex Index1017[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&obj1017 }
                     };

/* index 0x1018 :   Identity. */
                    UNS8 highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 obj1018_Vendor_ID = 0x0;	/* 0 */
                    UNS32 obj1018_Product_Code = 0x0;	/* 0 */
                    UNS32 obj1018_Revision_Number = 0x0;	/* 0 */
                    UNS32 obj1018_Serial_Number = 0x0;	/* 0 */
                    subindex Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&highestSubIndex_obj1018 },
                       { RO, uint32, sizeof (UNS32), (void*)&obj1018_Vendor_ID },
                       { RO, uint32, sizeof (UNS32), (void*)&obj1018_Product_Code },
                       { RO, uint32, sizeof (UNS32), (void*)&obj1018_Revision_Number },
                       { RO, uint32, sizeof (UNS32), (void*)&obj1018_Serial_Number }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;	/* 1536 */
                    UNS32 obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580;	/* 1408 */
                    subindex Index1200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&highestSubIndex_obj1200 },
                       { RO, uint32, sizeof (UNS32), (void*)&obj1200_COB_ID_Client_to_Server_Receive_SDO },
                       { RO, uint32, sizeof (UNS32), (void*)&obj1200_COB_ID_Server_to_Client_Transmit_SDO }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 highestSubIndex_obj1400 = 6; /* number of subindex - 1*/
                    UNS32 obj1400_COB_ID_used_by_PDO = 0x200;	/* 512 */
                    UNS8 obj1400_Transmission_Type = 0x0;	/* 0 */
                    UNS16 obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 obj1400_Event_Timer = 0x0;	/* 0 */
                    UNS8 obj1400_SYNC_start_value = 0x0;	/* 0 */
                    subindex Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&highestSubIndex_obj1400 },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1400_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&obj1400_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&obj1400_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&obj1400_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&obj1400_Event_Timer },
                       { RW, uint8, sizeof (UNS8), (void*)&obj1400_SYNC_start_value }
                     };


/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 highestSubIndex_obj1600 = 8; /* number of subindex - 1*/
                    UNS32 obj1600[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&highestSubIndex_obj1600 },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1600[7] }
                     };


/* index 0x1800 :   Transmit PDO 1 Parameter. */
                    UNS8 highestSubIndex_obj1800 = 6; /* number of subindex - 1*/
                    UNS32 obj1800_COB_ID_used_by_PDO = 0x180;	/* 384 */
                    UNS8 obj1800_Transmission_Type = 0x0;	/* 0 */
                    UNS16 obj1800_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 obj1800_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 obj1800_Event_Timer = 0x0;	/* 0 */
                    UNS8 obj1800_SYNC_start_value = 0x0;	/* 0 */
                    ODCallback_t Index1800_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex Index1800[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&highestSubIndex_obj1800 },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1800_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&obj1800_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&obj1800_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&obj1800_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&obj1800_Event_Timer },
                       { RW, uint8, sizeof (UNS8), (void*)&obj1800_SYNC_start_value }
                     };



/* index 0x1A00 :   Transmit PDO 1 Mapping. */
                    UNS8 highestSubIndex_obj1A00 = 8; /* number of subindex - 1*/
                    UNS32 obj1A00[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex Index1A00[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&highestSubIndex_obj1A00 },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&obj1A00[7] }
                     };



/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable objdict[] = 
{
  { (subindex*)Index1000,sizeof(Index1000)/sizeof(Index1000[0]), 0x1000},
  { (subindex*)Index1001,sizeof(Index1001)/sizeof(Index1001[0]), 0x1001},
  { (subindex*)Index1014,sizeof(Index1014)/sizeof(Index1014[0]), 0x1014},
  { (subindex*)Index1017,sizeof(Index1017)/sizeof(Index1017[0]), 0x1017},
  { (subindex*)Index1018,sizeof(Index1018)/sizeof(Index1018[0]), 0x1018},
  { (subindex*)Index1200,sizeof(Index1200)/sizeof(Index1200[0]), 0x1200},
  { (subindex*)Index1400,sizeof(Index1400)/sizeof(Index1400[0]), 0x1400},
 
  { (subindex*)Index1600,sizeof(Index1600)/sizeof(Index1600[0]), 0x1600},
  
  { (subindex*)Index1800,sizeof(Index1800)/sizeof(Index1800[0]), 0x1800},
 
  { (subindex*)Index1A00,sizeof(Index1A00)/sizeof(Index1A00[0]), 0x1A00},
  
};

const indextable * scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
	int i;
	*callbacks = NULL;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1014: i = 2;break;
		case 0x1017: i = 3;*callbacks = Index1017_callbacks; break;
		case 0x1018: i = 4;break;
		case 0x1200: i = 5;break;
		case 0x1400: i = 6;break;

		case 0x1600: i = 8;break;

		case 0x1800: i = 10;*callbacks = Index1800_callbacks; break;

		case 0x1A00: i = 12;break;

		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
//s_PDO_status PDO_status[2] = {s_PDO_status_Initializer,s_PDO_status_Initializer};

const quick_index firstIndex = {
  5, /* SDO_SVR */
  0, /* SDO_CLT */
  6, /* PDO_RCV */
  8, /* PDO_RCV_MAP */
  10, /* PDO_TRS */
  12 /* PDO_TRS_MAP */
};

const quick_index lastIndex = {
  5, /* SDO_SVR */
  0, /* SDO_CLT */
  7, /* PDO_RCV */
  9, /* PDO_RCV_MAP */
  11, /* PDO_TRS */
  13 /* PDO_TRS_MAP */
};

const UNS16 objDictSize = sizeof(objdict)/sizeof(objdict[0]); 

