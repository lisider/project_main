/********************************************************************************************
 *     LEGAL DISCLAIMER 
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES 
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED 
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS 
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED, 
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR 
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY 
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK 
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION 
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *     
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH 
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, 
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE 
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
 *     
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LASAMPLE 
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LASAMPLE PRINCIPLES.  
 ************************************************************************************************/
#ifndef _SAMPLE_CLI_H_
#define _SAMPLE_CLI_H_
/*-----------------------------------------------------------------------------
                    include files
-----------------------------------------------------------------------------*/
#include "sample.h"

#define HTCLI_TAG               "<HT_CLI> "

#define DBG_INIT_LEVEL_APP_SAMPLE    (DBG_LEVEL_ALL | DBG_LAYER_APP)
#undef  DBG_LEVEL_MODULE
#define DBG_LEVEL_MODULE    ht_get_dbg_level()

typedef enum
{
    HT_WIFI_STA_CONNECT_NONE,
    HT_WIFI_STA_CONNECT_SCAN,
    HT_WIFI_STA_CONNECTING,
    HT_WIFI_STA_CONNECT_FAIL,
    HT_WIFI_STA_CONNECT_ON,
    HT_WIFI_STA_DISCONNECT
}HT_WIFI_CONNECT_STATUS_T;

/*------------------------------------------------------------------------------
                                            funcitons declarations
------------------------------------------------------------------------------*/


#ifdef CLI_SUPPORT
extern INT32 ht_cli_attach_cmd_tbl(VOID);
#endif /* CLI_SUPPORT */
                                                                                                  
#endif /* _SAMPLE_CLI_H_ */

