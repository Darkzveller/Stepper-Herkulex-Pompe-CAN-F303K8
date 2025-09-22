#include <Arduino.h>

#ifndef Variable_H
#define Variable_H


//***********LOOP******************* */

extern bool flag_controle;

//***********CAN******************* */

#define SIZE_FIFO 32

typedef struct CANMessage
{
  bool extd = false;
  bool rtr = false;
  uint32_t id = 0;
  uint8_t lenght = 0;
  uint8_t data[8] = {0};
} CANMessage;
extern CANMessage rxMsg; // data received by CAN to control the robot
extern unsigned char FIFO_ecriture;
extern signed char FIFO_lecture;
extern signed char FIFO_occupation;
extern signed char FIFO_max_occupation;
extern bool flag_can_printf;



#endif
