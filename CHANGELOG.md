# Changelog

---

<details markdown="1">
  <summary>Table of Contents</summary>

<!-- TOC -->
* [Changelog](#changelog)
  * [v0.1.0 (2025-01-13)](#v010--2025-01-13-)
  * [v0.2.1 (2026-03-10)](#v021--2026-03-10-)
  * [v0.3.2 (TBD)](#v032--tbd-)
<!-- TOC -->

</details>

---

## [v0.1.0 (2025-01-13)](https://github.com/scalpelspace/pwm_node_driver/releases/tag/v0.1.0)

- Initial release.

---

## [v0.2.1 (2026-03-10)](https://github.com/scalpelspace/pwm_node_driver/releases/tag/v0.2.1)

- **Additions:**
    - Add RTC and versioning CAN messages.
- **Modifications:**
    - Improve docs.
    - Fix bad link in `CHANGELOG.md` for `v0.1.0`.
    - Update `can_driver` submodule `v0.3.0`.
    - Update [can_pwm_node.dbc](can_pwm_node.dbc) for new auto-generated
      standard.
    - Update [can_pwm_node.dbc](can_pwm_node.dbc) for specific transmitter and
      receiver nodes.
- **Deletions:**
    - Remove outdated script that was previously relocated to `can_driver`
      submodule.
    - Remove H-bridge control CAN messages.

---

## [v0.3.2 (TBD)](https://github.com/scalpelspace/pwm_node_driver/releases/tag/v0.3.2)

- **Modifications:**
    - Update DBC for new current sense design/features.
    - Update `can_driver` submodule `v0.3.5`.
- **Deletions:**
    - Remove comment line in [can_pwm_node.dbc](can_pwm_node.dbc) causing DBC
      merge script issues.
