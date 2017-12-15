

#ifndef _OSA_I2C_H_
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
#define _OSA_I2C_H_

#include <osa.h>

#define I2C_DEFAULT_INST_ID  (3)

#define I2C_TRANSFER_SIZE_MAX   (254)

typedef struct {

  int fd;

} OSA_I2cHndl;

int OSA_i2cOpen(OSA_I2cHndl *hndl, Uint8 instId);
int OSA_i2cRead8(OSA_I2cHndl *hndl, Uint16 devAddr, Uint8 *reg, Uint8 *value, Uint32 count);
int OSA_i2cWrite8(OSA_I2cHndl *hndl, Uint16 devAddr, Uint8 *reg, Uint8 *value, Uint32 count);
int OSA_i2cRawWrite8(OSA_I2cHndl *hndl, Uint16 devAddr, Uint8 *value, Uint32 count);
int OSA_i2cRawRead8(OSA_I2cHndl *hndl, Uint16 devAddr, Uint8 *value, Uint32 count);
int OSA_i2cClose(OSA_I2cHndl *hndl);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif
