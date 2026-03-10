/*******************************************************************************
 * @file pwm_node_can_dbc.c
 * @brief Auto-generated CAN message definitions from DBC file.
 *******************************************************************************
 */

/** Includes. *****************************************************************/

#include "pwm_node_can_dbc.h"

/** Public variables. *********************************************************/

const can_message_t dbc_messages[] = {
    {
        .name = "state",
        .message_id = 32,
        .id_mask = 0xFFFFFFFF,
        .dlc = 1,
        .rx_handler = 0, // (can_rx_handler_t)my_rx_handler_func,
        .tx_handler = 0, // (can_tx_handler_t)my_tx_handler_func,
        .signal_count = 1,
        .signals =
            {
                {
                    .name = "system_state",
                    .start_bit = 0,
                    .bit_length = 8,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 255.0f,
                },
            },
    },
    {
        .name = "command_servo_1",
        .message_id = 64,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0, // (can_rx_handler_t)my_rx_handler_func,
        .tx_handler = 0, // (can_tx_handler_t)my_tx_handler_func,
        .signal_count = 1,
        .signals =
            {
                {
                    .name = "command_servo_1_pmw",
                    .start_bit = 0,
                    .bit_length = 16,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 500.0f,
                    .max_value = 2500.0f,
                },
            },
    },
    {
        .name = "command_servo_2",
        .message_id = 96,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0, // (can_rx_handler_t)my_rx_handler_func,
        .tx_handler = 0, // (can_tx_handler_t)my_tx_handler_func,
        .signal_count = 1,
        .signals =
            {
                {
                    .name = "command_servo_2_pmw",
                    .start_bit = 0,
                    .bit_length = 16,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 500.0f,
                    .max_value = 2500.0f,
                },
            },
    },
    {
        .name = "command_servo_3",
        .message_id = 128,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0, // (can_rx_handler_t)my_rx_handler_func,
        .tx_handler = 0, // (can_tx_handler_t)my_tx_handler_func,
        .signal_count = 1,
        .signals =
            {
                {
                    .name = "command_servo_3_pmw",
                    .start_bit = 0,
                    .bit_length = 16,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 500.0f,
                    .max_value = 2500.0f,
                },
            },
    },
    {
        .name = "command_servo_4",
        .message_id = 160,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0, // (can_rx_handler_t)my_rx_handler_func,
        .tx_handler = 0, // (can_tx_handler_t)my_tx_handler_func,
        .signal_count = 1,
        .signals =
            {
                {
                    .name = "command_servo_4_pmw",
                    .start_bit = 0,
                    .bit_length = 16,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 500.0f,
                    .max_value = 2500.0f,
                },
            },
    },
};

const int dbc_message_count = sizeof(dbc_messages) / sizeof(dbc_messages[0]);
