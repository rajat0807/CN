/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "array.h"

int *
sum_1_svc(Array *argp, struct svc_req *rqstp)
{
	printf("Welcome to the Program \n");
	printf("sum(%d) Called\n",argp->size);
	int  *result;
	int i;
	*result=0;
	for(i=0;i<argp->size;i++)
	{
		printf("argp->a[i] = %d\n",argp->a[i]);
		*result=*result+argp->a[i];
	}
	printf("Result in Server%d\n",*result);
	return result;
}
