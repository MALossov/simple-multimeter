#include "MyPrintf.h"

#define TX_BUF_LEN  256     /* 发送缓冲区容量，根据需要进行调整 */
uint8_t TxBuf[TX_BUF_LEN];  /* 发送缓冲区                       */
void MyPrintf(const char *__format, ...)
{
  va_list ap;
  va_start(ap, __format);
  
  /* 清空发送缓冲区 */
  memset(TxBuf, 0x0, TX_BUF_LEN);
  
  /* 填充发送缓冲区 */
  vsnprintf((char*)TxBuf, TX_BUF_LEN, (const char *)__format, ap);
  va_end(ap);
  int len = strlen((const char*)TxBuf);
  
  /* 往串口发送数据 */
  HAL_UART_Transmit(&huart1, (uint8_t*)&TxBuf, len, 0xFFFF);
}