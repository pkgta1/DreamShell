/**
 * DreamShell ISO Loader
 * ISO, CSO, CDI and GDI reader
 * (c)2009-2016 SWAT <http://www.dc-swat.ru>
 */

#include "main.h"
#include "isofs/ciso.h"

int InitReader();
int ReadSectors(uint8 *buf, int sec, int num, fs_callback_f *cb);
int PreReadSectors(int sec, int num);

extern int iso_fd;
extern uint8 *sector_buffer;
extern int sector_buffer_size;
