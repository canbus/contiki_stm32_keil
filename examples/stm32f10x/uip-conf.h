/*
 *  Copyright (c) 2015, Everhigh Tech. Ltd. Co.
 *  All rights reserved
 *
 * @Header   :  UIP-CONF header
 * @Author   :  luochao
 * @Email    :  luochao@everhigh.com.cn
 * @Date     :  2016-1-5
 * @Update   :
 *
 */

#ifndef __UIP_CONF_H__
#define __UIP_CONF_H__

#include "contiki-conf.h"

#define UIP_CONF_MAX_CONNECTIONS 10					   // ���TCP������
#define UIP_CONF_MAX_LISTENPORTS 10					   // ���TCP�˿ڼ�����
#define UIP_CONF_BUFFER_SIZE     1500				   // uIP�����С
#define UIP_CONF_BYTE_ORDER      UIP_LITTLE_ENDIAN	   // CPU��С��ģʽ
#define UIP_CONF_LOGGING         1					   // ��־����
#define UIP_CONF_UDP             0					   // UDP֧�ֿ���
#define UIP_CONF_UDP_CHECKSUMS   0	    			 // UDPУ��Ϳ���
#define UIP_CONF_STATISTICS      0					   // uIPͳ�ƿ���

#define UIP_CONF_LLH_LEN 				14
#define UIP_CONF_TTL						64
//#define UIP_CONF_ARPTAB_SIZE    20

extern void exa_uip_appcall(void);
#ifndef UIP_APPCALL
#define UIP_APPCALL exa_uip_appcall
#endif
#ifndef UIP_UDP_APPCALL
#define UIP_UDP_APPCALL exa_appcall
#endif

#define UIP_LOG(m) uip_log(m)

#endif /* _UIP_CONF_H_ */


