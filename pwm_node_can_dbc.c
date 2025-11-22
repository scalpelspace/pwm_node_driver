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
        .message_id = 257,
        .id_mask = 0xFFFFFFFF,
        .dlc = 1,
        .rx_handler = 0,
        .tx_handler = 0,
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
        .message_id = 513,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0,
        .tx_handler = 0,
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
                    .min_value = 0.0f,
                    .max_value = 65535.0f,
                },
            },
    },
    {
        .name = "command_servo_2",
        .message_id = 514,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0,
        .tx_handler = 0,
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
                    .min_value = 0.0f,
                    .max_value = 65535.0f,
                },
            },
    },
    {
        .name = "command_servo_3",
        .message_id = 515,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0,
        .tx_handler = 0,
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
                    .min_value = 0.0f,
                    .max_value = 65535.0f,
                },
            },
    },
    {
        .name = "command_servo_4",
        .message_id = 516,
        .id_mask = 0xFFFFFFFF,
        .dlc = 2,
        .rx_handler = 0,
        .tx_handler = 0,
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
                    .min_value = 0.0f,
                    .max_value = 65535.0f,
                },
            },
    },
    {
        .name = "command_h_bridge_1",
        .message_id = 517,
        .id_mask = 0xFFFFFFFF,
        .dlc = 3,
        .rx_handler = 0,
        .tx_handler = 0,
        .signal_count = 3,
        .signals =
            {
                {
                    .name = "command_h_bridge_1_pwm",
                    .start_bit = 0,
                    .bit_length = 16,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 65535.0f,
                },
                {
                    .name = "command_h_bridge_1_a",
                    .start_bit = 16,
                    .bit_length = 1,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 1.0f,
                },
                {
                    .name = "command_h_bridge_1_b",
                    .start_bit = 17,
                    .bit_length = 1,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 1.0f,
                },
            },
    },
    {
        .name = "command_h_bridge_2",
        .message_id = 518,
        .id_mask = 0xFFFFFFFF,
        .dlc = 3,
        .rx_handler = 0,
        .tx_handler = 0,
        .signal_count = 3,
        .signals =
            {
                {
                    .name = "command_h_bridge_2_pwm",
                    .start_bit = 0,
                    .bit_length = 16,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 65535.0f,
                },
                {
                    .name = "command_h_bridge_2_a",
                    .start_bit = 16,
                    .bit_length = 1,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 1.0f,
                },
                {
                    .name = "command_h_bridge_2_b",
                    .start_bit = 17,
                    .bit_length = 1,
                    .byte_order = CAN_LITTLE_ENDIAN,
                    .is_signed = false,
                    .scale = 1.0f,
                    .offset = 0.0f,
                    .min_value = 0.0f,
                    .max_value = 1.0f,
                },
            },
    },
};

const int dbc_message_count = sizeof(dbc_messages) / sizeof(dbc_messages[0]);
