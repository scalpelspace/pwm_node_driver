# pwm_node_driver

![black_formatter](https://github.com/scalpelspace/pwm_node_driver/actions/workflows/black_formatter.yaml/badge.svg)

Low level communication drivers for the PWM Node dev board running the [
`pwm_node`](https://github.com/scalpelspace/pwm_node) firmware.

---

<details markdown="1">
  <summary>Table of Contents</summary>

<!-- TOC -->
* [pwm_node_driver](#pwm_node_driver)
  * [1 CAN Bus Drivers](#1-can-bus-drivers)
<!-- TOC -->

</details>

---

## 1 CAN Bus Drivers

CAN drivers are implemented in the following files:

1. [pwm_node_can_driver.c](pwm_node_can_driver.c)
2. [pwm_node_can_driver.h](pwm_node_can_driver.h)

The CAN driver relies on a DBC structure defined in
the [can_pwm_node.dbc](can_pwm_node.dbc).

- To translate this DBC file into the custom CAN
  structures, [generate_can_defs.py](generate_can_defs.py) is used to generate
  the following files:

    1. [pwm_node_can_dbc.c](pwm_node_can_dbc.c)
    2. [pwm_node_can_dbc.h](pwm_node_can_dbc.h)

    - These generated files declare the message and signals in the appropriate
      type structs.
