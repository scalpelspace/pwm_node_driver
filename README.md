# pwm_node_driver

![black_formatter](https://github.com/scalpelspace/pwm_node_driver/actions/workflows/black_formatter.yaml/badge.svg)

Low level communication drivers for the PWM Node dev board running the [
`pwm_node`](https://github.com/scalpelspace/pwm_node) firmware.

---

<details markdown="1">
  <summary>Table of Contents</summary>

<!-- TOC -->
* [pwm_node_driver](#pwm_node_driver)
  * [1 Overview](#1-overview)
  * [3 CAN Bus Drivers](#3-can-bus-drivers)
<!-- TOC -->

</details>

---

## 1 Overview

The Momentum dev board provides 2 direct communication interfaces:

1. UART
2. CAN (classic)

**CAN** us supported natively through the software included in this driver
package.

CAN drivers are included in the [pwm node_driver.h](pwm_node_driver.h) file for
simple implementation.

---

## 3 CAN Bus Drivers

CAN drivers are implemented via the [
`can_driver`](https://github.com/scalpelspace/can_driver) submodule.
