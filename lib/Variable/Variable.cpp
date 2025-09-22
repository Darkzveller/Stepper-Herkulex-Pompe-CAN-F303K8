#include "Variable.h"

//***********Loop******************* */

bool flag_controle = false;

//***********CAN******************* */

CANMessage rxMsg;
unsigned char FIFO_ecriture = 0;
signed char FIFO_lecture = 0;
signed char FIFO_occupation = 0;
signed char FIFO_max_occupation = 0;
bool flag_can_printf = false;
