"""
Created March 2026
by Jack Langdon 
This program controls a distance sensor
"""

import RPi.GPIO as GPIO
import time

# Pin Definitions
TRIG_PIN = 3
ECHO_PIN = 2

# Setup
GPIO.setmode(GPIO.BCM)  # Use BCM pin numbering
GPIO.setup(TRIG_PIN, GPIO.OUT)
GPIO.setup(ECHO_PIN, GPIO.IN)

def get_distance():
    # Ensure trigger is low
    GPIO.output(TRIG_PIN, False)
    time.sleep(0.000002) # 2 microseconds

    # Send 10us pulse to trigger
    GPIO.output(TRIG_PIN, True)
    time.sleep(0.00001)  # 10 microseconds
    GPIO.output(TRIG_PIN, False)

    # Listen for the echo
    while GPIO.input(ECHO_PIN) == 0:
        pulse_start = time.time()

    while GPIO.input(ECHO_PIN) == 1:
        pulse_end = time.time()

    # Calculate duration and distance
    pulse_duration = pulse_end - pulse_start
    # Speed of sound is ~34300 cm/s. 
    # Distance = (time * speed) / 2
    distance = (pulse_duration * 34300) / 2
    return round(distance, 2)

try:
    while True:
        dist = get_distance()
        print(f"Distance: {dist} cm")
        time.sleep(0.1)  # 100ms delay

except KeyboardInterrupt:
    print("Measurement stopped by user")
    GPIO.cleanup()