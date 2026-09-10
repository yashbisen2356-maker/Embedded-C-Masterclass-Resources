/**
 ******************************************************************************
 * @file      syscalls.c
 * @brief     Minimal system calls for STM32 + ITM/SWV printf
 ******************************************************************************
 */

#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <sys/times.h>

#include "main.h"


/*
 * Initialize the ARM Cortex-M trace/ITM hardware.
 *
 * ITM Port 0 will be used for printf().
 */
static void ITM_Debug_Init(void)
{
    /*
     * Enable trace in the Cortex-M Debug Exception and
     * Monitor Control Register.
     */
    CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;

    /*
     * Enable ITM.
     */
    ITM->TCR |= ITM_TCR_ITMENA_Msk;

    /*
     * Enable ITM stimulus port 0.
     */
    ITM->TER |= 1UL;
}


/*
 * Send one character through ITM stimulus port 0.
 */
static void ITM_Debug_SendChar(uint8_t ch)
{
    /*
     * Make sure ITM/trace is enabled.
     */
    if ((CoreDebug->DEMCR & CoreDebug_DEMCR_TRCENA_Msk) == 0U)
    {
        return;
    }

    if ((ITM->TCR & ITM_TCR_ITMENA_Msk) == 0U)
    {
        return;
    }

    /*
     * Make sure stimulus port 0 is enabled.
     */
    if ((ITM->TER & 1UL) == 0U)
    {
        return;
    }

    /*
     * Wait until ITM Port 0 is ready.
     *
     * This is intentionally an empty while loop.
     */
    while (ITM->PORT[0].u32 == 0UL)
    {
    }

    /*
     * Send the character.
     */
    ITM->PORT[0].u8 = ch;
}


/* Environment */
char *__env[1] = { 0 };
char **environ = __env;


/*
 * Initialize monitor handles.
 *
 * Not required for this bare-metal application.
 */
void initialise_monitor_handles(void)
{
}


/*
 * Return process ID.
 */
int _getpid(void)
{
    return 1;
}


/*
 * Kill process.
 *
 * There is no operating-system process to kill on
 * this bare-metal STM32 application.
 */
int _kill(int pid, int sig)
{
    (void)pid;
    (void)sig;

    errno = EINVAL;

    return -1;
}


/*
 * Exit.
 *
 * There is no operating system to return to,
 * so remain here forever.
 */
void _exit(int status)
{
    _kill(status, -1);

    while (1)
    {
    }
}


/*
 * Read data.
 *
 * Not implemented here.
 */
int _read(int file, char *ptr, int len)
{
    (void)file;
    (void)ptr;
    (void)len;

    errno = ENOSYS;

    return -1;
}


/*
 * Write data.
 *
 * printf() eventually reaches this function.
 *
 * Each character is sent through ITM Port 0.
 */
int _write(int file, char *ptr, int len)
{
    (void)file;

    /*
     * Make sure ITM is configured.
     */
    ITM_Debug_Init();

    /*
     * Send each character.
     */
    for (int DataIdx = 0; DataIdx < len; DataIdx++)
    {
        ITM_Debug_SendChar((uint8_t)*ptr++);
    }

    return len;
}


/*
 * Close file.
 */
int _close(int file)
{
    (void)file;

    return -1;
}


/*
 * File status.
 */
int _fstat(int file, struct stat *st)
{
    (void)file;

    st->st_mode = S_IFCHR;

    return 0;
}


/*
 * Check whether file is a terminal.
 */
int _isatty(int file)
{
    (void)file;

    return 1;
}


/*
 * Change file position.
 */
int _lseek(int file, int ptr, int dir)
{
    (void)file;
    (void)ptr;
    (void)dir;

    return 0;
}


/*
 * Open file.
 */
int _open(char *path, int flags, ...)
{
    (void)path;
    (void)flags;

    errno = ENOSYS;

    return -1;
}


/*
 * Wait for child process.
 *
 * Not applicable to bare-metal STM32.
 */
int _wait(int *status)
{
    (void)status;

    errno = ECHILD;

    return -1;
}


/*
 * Delete file.
 */
int _unlink(char *name)
{
    (void)name;

    errno = ENOENT;

    return -1;
}


/*
 * Return process times.
 */
int _times(struct tms *buf)
{
    (void)buf;

    errno = ENOSYS;

    return -1;
}


/*
 * Get file status.
 */
int _stat(char *file, struct stat *st)
{
    (void)file;

    st->st_mode = S_IFCHR;

    return 0;
}


/*
 * Create hard link.
 *
 * Not applicable to bare-metal STM32.
 */
int _link(char *old, char *new)
{
    (void)old;
    (void)new;

    errno = EMLINK;

    return -1;
}


/*
 * Create a new process.
 *
 * Not applicable to bare-metal STM32.
 */
int _fork(void)
{
    errno = EAGAIN;

    return -1;
}


/*
 * Execute a program.
 *
 * Not applicable to bare-metal STM32.
 */
int _execve(char *name, char **argv, char **env)
{
    (void)name;
    (void)argv;
    (void)env;

    errno = ENOMEM;

    return -1;
}
