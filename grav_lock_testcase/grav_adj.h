/*
** svn $Id: grav_adj.h 429 2009-12-20 17:30:26Z arango $
*******************************************************************************
** Copyright (c) 2002-2016 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Gravitational Adjustment Test.
**
** Application flag:   GRAV_ADJ
** Input script:       ocean_grav_adj.in
*/

#define ROMS_MODEL
#define UV_ADV
#define UV_VIS2
#define UV_LDRAG
#define MIX_S_UV
#define DJ_GRADPS
#define SPLINES_VDIFF
#define SPLINES_VVISC

#define TS_MPDATA
#define TS_DIF2
#define MIX_S_TS
#define SOLVE3D
#define AVERAGES

#define ANA_GRID
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_STFLUX
#define ANA_BTFLUX

#define ANA_BPFLUX 
#define ANA_SPFLUX 
/*
#define ANA_BSFLUX 
#define ANA_M2OBC
#define ANA_F2OBC 
#define ANA_SSFLUX*/

#define OUT_DOUBLE

#define DIAGNOSTICS_TS
#define DIAGNOSTICS_UV

/*
#define TS_VAR
#define ANA_PASSIVE 
#define T_PASSIVE
*/

# ifdef SOLVE3D
# define GLS_MIXING
#  ifdef GLS_MIXING
#  define KANTHA_CLAYSON
#  define N2S2_HORAVG
#  define RI_SPLINES
# endif
#endif
