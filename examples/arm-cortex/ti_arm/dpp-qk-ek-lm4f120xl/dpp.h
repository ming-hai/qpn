/*****************************************************************************
* Model: dpp.qm
* File:  ./dpp.h
*
* This file has been generated automatically by QP Modeler (QM).
* DO NOT EDIT THIS FILE MANUALLY.
*
* Please visit www.state-machine.com/qm for more information.
*****************************************************************************/
#ifndef dpp_h
#define dpp_h

enum DPPSignals {
    EAT_SIG = Q_USER_SIG, /* published by Table to let a philosopher eat */
    DONE_SIG,             /* published by Philosopher when done eating */
    PAUSE_SIG,            /* published by BSP to pause the application */
    TERMINATE_SIG,        /* published by BSP to terminate the application */
    HUNGRY_SIG,           /* posted direclty to Table from hungry Philo */
    MAX_SIG               /* the last signal */
};

/* number of philosophers */
#define N_PHILO ((uint8_t)5)
#define PHILO_0_PRIO 1

extern struct PhiloTag AO_Philo0;
extern struct PhiloTag AO_Philo1;
extern struct PhiloTag AO_Philo2;
extern struct PhiloTag AO_Philo3;
extern struct PhiloTag AO_Philo4;
extern struct TableTag AO_Table;

/* @(/1/8) .................................................................*/
void Philo_ctor(void);

/* @(/1/9) .................................................................*/
void Table_ctor(void);


#endif                    /* dpp_h */