/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x17D000
  RAM (rwx) :  ORIGIN = 0x20000000, LENGTH = 0x40000
}


INCLUDE "nrf_common.ld"


/* Data copy table (load -> runtime) */
/*__copy_table_start__ = .;*/
/*__copy_table_end__ = .;*/

/* Zero table for .bss */
/*__zero_table_start__ = .;*/
/*__zero_table_end__ = .;*/
