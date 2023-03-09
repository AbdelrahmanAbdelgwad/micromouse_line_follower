# MicroMouse - Line Follower

This project implements a miniature mobile robot that follows a black line trajectory using two IR sensors. The chassis of the robot is made from a computer mouse, while the rest of the components include a PCB, two micro-DC motors, a motor driver, and a Seeed Xiao RP2040.

## How it works

The robot follows a black line using an if-else statement. If the right sensor detects a black color, the robot moves to the left, and if the left sensor detects a black color, the robot moves to the right. This creates a snake-like movement that follows the black line trajectory.

## Components

- Seeed Xiao RP2040
- Two IR sensors
- PCB
- Two Micro-DC motors
- Motor driver

## Code

The code is written in Objective C and is available in the "micromouse_line_follower" directory.

## Demo

Check out a demo of the robot in action: [Video Link](https://youtube.com/shorts/tZHbbBprDxs?feature=share)
