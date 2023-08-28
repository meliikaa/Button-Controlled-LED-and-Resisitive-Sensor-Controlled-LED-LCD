# Arduino Projects: Button-Controlled LED and Resisitive Sensor-Controlled LED/LCD

This repository contains two Arduino projects that demonstrate how to control an LED using pushbuttons and a resistive sensor. One project uses pushbuttons to turn on the LED, while the other project uses a resistive sensor to control an LED and display darkness levels on an LCD.

## Table of Contents

- [Button-Controlled LED Project](#button-controlled-led-project)
  - [Description](#description-1)
  - [Components](#components-1)
  - [Circuit Diagram](#circuit-diagram-1)
  - [Installation](#installation-1)
  - [Usage](#usage-1)
  - [Contributing](#contributing-1)
  - [License](#license-1)
- [Resisitive Sensor-Controlled LED and LCD Display](#resisitive-sensor-controlled-led-and-lcd-display)
  - [Description](#description-2)
  - [Components](#components-2)
  - [Circuit Diagram](#circuit-diagram-2)
  - [Installation](#installation-2)
  - [Usage](#usage-2)
  - [Adjusting Sensitivity](#adjusting-sensitivity-2)
  - [Contributing](#contributing-2)
  - [License](#license-2)

## Button-Controlled LED Project

### Description

The project demonstrates how to control an LED using two pushbuttons. The LED turns on when either of the pushbuttons is pressed. It is achieved using an Arduino board, pushbuttons, and an LED.

### Components

- Arduino board (e.g., Arduino Uno)
- Breadboard and jumper wires
- 2x pushbuttons
- 1x LED
- Resistors (if needed)

### Circuit Diagram

Insert a circuit diagram here that shows how the pushbuttons and LED are connected to the Arduino.

### Installation

1. Clone or download this repository to your local machine.
2. Connect the components as shown in the circuit diagram.
3. Connect your Arduino board to your computer via USB.
4. Open the Arduino IDE.
5. Open the `button_controlled_led.ino` file from the repository in the Arduino IDE.
6. Upload the code to your Arduino board.

### Usage

1. After uploading the code to your Arduino board, press either of the pushbuttons.
2. Observe that the LED turns on when either of the pushbuttons is pressed.
3. Release the pushbutton to turn off the LED.

### Contributing

Contributions are welcome! If you find any issues or have improvements to suggest, please feel free to create a pull request.

## Resisitive Sensor-Controlled LED and LCD Display

### Description

The project uses a resistive sensor to control an LED and display darkness levels on an LCD. The LED turns on when the environment is dark, and the LCD displays whether it's "Dark" or "Bright" based on the sensor's input value.

### Components

- Arduino board (e.g., Arduino Uno)
- Breadboard and jumper wires
- Resisitive sensor (e.g., photocell)
- 1x LED
- LCD with appropriate pins (e.g., 16x2 character LCD)
- Potentiometer (for LCD contrast adjustment, if needed)

### Circuit Diagram

Insert a circuit diagram here that shows how the components are connected to the Arduino.

### Installation

1. Clone or download this repository to your local machine.
2. Connect the components as shown in the circuit diagram.
3. Connect your Arduino board to your computer via USB.
4. Open the Arduino IDE.
5. Install the [LiquidCrystal library](https://www.arduino.cc/en/Reference/LiquidCrystal) if not already installed.
6. Open the `resistive_sensor_led_lcd.ino` file from the repository in the Arduino IDE.
7. Upload the code to your Arduino board.

### Usage

1. After uploading the code to your Arduino board, observe the LED and LCD behavior.
2. The LED will turn on when the environment is dark (below the threshold).
3. The LCD will display either "Dark" or "Bright" based on the sensor reading.

### Adjusting Sensitivity

You can adjust the darkness threshold by modifying the `threshold` variable in the code. Lower values will make the LED and LCD respond to slightly darker environments.

### Contributing

Contributions are welcome! If you find any issues or have improvements to suggest, please feel free to create a pull request.


---

Replace the placeholders in the template with actual information, such as the circuit diagrams, detailed installation steps, and any other relevant information about your projects.
