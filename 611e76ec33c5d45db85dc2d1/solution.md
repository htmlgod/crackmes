refactored decompiled code:
undefined8 main(void)

{
  int lic_len;
  long lic_str_ptr;
  int checksum;
  int iterator;
  
  lic_str_ptr = input("Enter License: ");
  checksum = 0;
  iterator = 0;
  while( true ) {
    lic_len = len(lic_str_ptr);
    if (lic_len <= iterator) break;
    checksum = checksum + *(char *)(lic_str_ptr + iterator);
    iterator = iterator + 1;
  }
  lic_len = len(lic_str_ptr);
  if (checksum == lic_len * -10 + 0x34e7) {
    puts("\nLicense is valid!");
  }
  else {
    puts("\nInvalid license!");
  }
  return 0;
}
check sum == 100*-10 + 0x34e7 | 100 is lenght of license 
license lenght = 232
230 chars of '0'
1 char _
1 char X
valid lic = 00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000_X
