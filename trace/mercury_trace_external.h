/*
** vim: ts=4 sw=4 expandtab
*/
/*
** Copyright (C) 1998-2001, 2006 The University of Melbourne.
** This file may only be copied under the terms of the GNU Library General
** Public License - see the file COPYING.LIB in the Mercury distribution.
*/

#ifndef MERCURY_TRACE_EXTERNAL_H
#define MERCURY_TRACE_EXTERNAL_H

#include "mercury_trace.h"          /* for MR_TraceCmdInfo, etc.    */
#include "mercury_conf.h"           /* for MR_USE_EXTERNAL_DEBUGGER */
#include "mercury_types.h"          /* for MR_Code                  */
#include "mercury_library_types.h"  /* for MercuryFile              */

#ifdef  MR_USE_EXTERNAL_DEBUGGER

extern  void    MR_trace_init_external(void);
extern  void    MR_trace_final_external(void);
extern  MR_Code *MR_trace_event_external(MR_TraceCmdInfo *cmd,
                    MR_EventInfo *event_info);
extern  void    MR_COLLECT_filter(MR_FilterFuncPtr filter_ptr,
                    MR_Unsigned seqno, MR_Unsigned depth, MR_TracePort port,
                    const MR_LabelLayout *layout,
                    const char *path, int lineno, MR_bool *stop_collecting);
extern  int     MR_get_line_number(MR_Word *saved_regs,
                    const MR_LabelLayout *layout, MR_TracePort port);

/*
** External debugger socket streams.
*/

extern  MercuryFile MR_debugger_socket_in;
extern  MercuryFile MR_debugger_socket_out;

#endif  /* MR_USE_EXTERNAL_DEBUGGER */

#endif  /* MERCURY_TRACE_EXTERNAL_H */
