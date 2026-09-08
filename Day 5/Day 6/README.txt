=> lEAREND TO CREATE A PROJECT AND PRINTED HELLO WORLD USING ITM DEBUG CONSOLE AND 

=> LEARNED  TO HOW DEBUG TRACE WORKS AND HOW TO  ENABLES ITM TRACE ENBLES COMMAND + STIMULUS PORT 0 + PEMISSION TO USE THE PORT 0 FOR SWD.

=>  USING WRITE FUNCTION CHANGE CODE :  I HAVE TAKEN OUT HELLO WORLD CHARACTER WISE FROM PORT 0. 
 
=> HERE IN MAIN.C FILE OF PROJECT1 ; WE HAVE WRITE FUNCTION , HERE WE DEFINE *PTR WHICH POINTSS TO EVERY SINGLE HELLOW OWRLD CHARACTER
   SO THAT WE CAN USE IT IN SWO WHICH IS USED FOR TAKING HELLO WORLD AS OUTPUT WE DO THIS TRACING OF HELLO WORLD (IN PRINTF).


=> HERE FPU IS DESABLED BECASUE WE DON'T NEED IT .

=>I HAVE LEARNED ABOUT BREAKPOING , WHICH IS USED TO STOP MICROCONTROLLER AT ANY INSTANCE TO SEE WHAT AND HOW CHANGES IN VARIABLES AND OTHER THINGS ARE BEING MADE BY 
  PROGRAM.


                                                          PRINTF
                                                             |
                                                          WRITE()
                                                             |
                                                         ITM SEND CHAR ()
                                                             |
                                                            SWO 
                                                             |
                                                           ST LINK
                                                             |
                                                         SWV ITM DATA CONSOLE
                                                             |
                                                         HELLO WORLD