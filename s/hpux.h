#include "generic.h"

#undef TCP_TTL_SYMBOL
#define TCP_TTL_SYMBOL "ipDefaultTTL"

/* hpux specific */
#define MIB_IPCOUNTER_SYMBOL "MIB_ipcounter"
#define MIB_TCPCOUNTER_SYMBOL "MIB_tcpcounter"
#define MIB_UDPCOUNTER_SYMBOL "MIB_udpcounter"
#undef ARPTAB_SYMBOL
#define ARPTAB_SYMBOL "arptab_nb"
#undef ARPTAB_SIZE_SYMBOL
#define ARPTAB_SIZE_SYMBOL "arphd"
