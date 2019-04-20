/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FACT_H_RPCGEN
#define _FACT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct number {
	int n;
};
typedef struct number number;

#define FACT_PROG 0x23451112
#define FACT_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define factorial 1
extern  int * factorial_1(number *, CLIENT *);
extern  int * factorial_1_svc(number *, struct svc_req *);
extern int fact_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define factorial 1
extern  int * factorial_1();
extern  int * factorial_1_svc();
extern int fact_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_number (XDR *, number*);

#else /* K&R C */
extern bool_t xdr_number ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FACT_H_RPCGEN */
