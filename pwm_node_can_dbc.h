/*******************************************************************************
 * @file pwm_node_can_dbc.h
 * @brief Auto-generated CAN message definitions from DBC file.
 *******************************************************************************
 */

#ifndef PWM_NODE_CAN_DBC_H
#define PWM_NODE_CAN_DBC_H

/** Includes. *****************************************************************/

#include "can_driver/can_driver.h"

/** CPP guard open. ***********************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/** DBC message index enum. **************************************************/

typedef enum {
  PWM_NODE_CAN_DBC_IDX_STATE = 0,
  PWM_NODE_CAN_DBC_IDX_COMMAND_SERVO_1 = 1,
  PWM_NODE_CAN_DBC_IDX_COMMAND_SERVO_2 = 2,
  PWM_NODE_CAN_DBC_IDX_COMMAND_SERVO_3 = 3,
  PWM_NODE_CAN_DBC_IDX_COMMAND_SERVO_4 = 4,
  PWM_NODE_CAN_DBC_IDX_DATETIME_SET = 5,
  PWM_NODE_CAN_DBC_IDX_DATETIME_GET = 6,
  PWM_NODE_CAN_DBC_IDX_DATETIME_GET_RESPONSE = 7,
  PWM_NODE_CAN_DBC_IDX_VERSION_GET = 8,
  PWM_NODE_CAN_DBC_IDX_VERSION_GET_RESPONSE = 9,

  PWM_NODE_CAN_DBC_IDX_COUNT // Total message count.
} pwm_node_can_dbc_index_t;

/** Public variables. *********************************************************/

extern const can_message_t dbc_messages[];

/** CPP guard close. **********************************************************/

#ifdef __cplusplus
}
#endif

#endif // PWM_NODE_CAN_DBC_H
