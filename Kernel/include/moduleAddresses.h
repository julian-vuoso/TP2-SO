#ifndef _MODULEADDRESSES_H_
#define _MODULEADDRESSES_H_

/* Si se quiere modificar alguna de estas direcciones, cambiarla tambien en el .ld correspondiente */
/* Si se quiere agregar otro moduleAddress, consultar Create Program.txt */

// static void * const sampleCodeModuleAddress = (void*)0x400000;
// static void * const sampleDataModuleAddress = (void*)0x500000;

static void * const shellModuleAddress = (void*)0x400000;
static void * const processAModuleAddress = (void*)0x700000;
static void * const processBModuleAddress = (void*)0x800000;
static void * const idleModuleAddress = (void*)0x900000;
static void * const sleepModuleAddress = (void*)0xA00000;
static void * const loopModuleAddress = (void*)0xB00000;
static void * const catModuleAddress = (void*)0xC00000;
static void * const wcModuleAddress = (void*)0xD00000;
static void * const filterModuleAddress = (void*)0xE00000;
static void * const phyloModuleAddress = (void*)0xF00000;

#endif