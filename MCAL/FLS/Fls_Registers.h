/*
 * Fls_Registers.h
 *
 *  Created on: Nov 30, 2024
 *      Author: 160513
 */

#ifndef MCAL_FLS_FLS_REGISTERS_H_
#define MCAL_FLS_FLS_REGISTERS_H_

#include "StandardTypes.h"

typedef struct
{
    uint32 FMA;
    uint32 FMD;
    uint32 FMC;
    uint32 FCRIS;
    uint32 FCIM;
    uint32 FCMISC;
    uint32 FMC2;
    uint32 FWBVAL;
    uint32 FWBn;
    uint32 FSIZE;
    uint32 SSIZE;
    uint32 ROMSWMAP;
}FLS_REGISTERS_TYPE;

#define  FLS_REGISTERS  ((volatile FLS_REGISTERS_TYPE*)(0x400FD000))

#endif /* MCAL_FLS_FLS_REGISTERS_H_ */
