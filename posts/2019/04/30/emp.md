---
title: Small EMP Device
start-date: 2019-04-30
end-date: 2019-04-30
date: 2019-04-30
status: "Complete"
categories: ["electronics"]
tags: post
description: "A sketchy high school electronics project that was kind of fun to play with sometimes."
public: true
---

## Intro

Believe it or not, this project was actually built specifically for my senior-year physics class in high school.
We were learning about electricity and magnetism at the time, and my physics teacher was always fond of hands-on projects for the sake of learning.
My teacher proposed that we get into groups of three, and build ourselves a basic speaker as a project.
My group wasn't very interested in this project, so we asked for permission to do a different project that still demonstrated an understanding of electricity and magnetism.
After a bit of discussion, we settled on building a small EMP device.
I had seen YouTube videos at the time of people building low-power EMP devices at their own with (mostly) common parts and I was fascinated with it.
Doing this as a project gave me an excuse to order all the parts and really give it a go.

## Design

It's been a long time since I worked on this project (I am currently writing this in 2024) so I don't have many of the initial designs.
However, I do remember the key components and how I worked with them:

- A 4.5V power source (consisting of three AA batteries and a battery pack)
- A (very sketchy) transformer that scaled up the 4.5V to a nominal 30kV (more on this later)
- A custom-made spark gap to create pulses of high current
- A coil of magnet wire wrapped around an iron core to produce magnetic fields

The principle that this device operated on was that **the ionization of air creates temporary high-current pulses** that can create short-lived but powerful magnetic fields that can disrupt low-power electronics.
The circuitry in the device is dedicated to making these current pulses, and the magnetic coil is what turns these current pulses into magnetic field pulses.
The way the circuit works is that a small voltage is applied to the input of the transformer, which creates a high-voltage-but-low-current output.
To transform the high voltage into a momentary high current, a spark gap is employed. The idea is that if enough voltage builds up on one side of the spark gap, it can cause the air between the two electrodes to temporarily ionize.
Air has a very high electrical resistance (about 30kΩ/cm if I remember correctly) but when ionized, has a very low electrical resistance.
This makes the spark gap behave like an electrical component that can switch between a very high and very low resistance, which allows for it to switch between ~0 mA and a very high current.
When that very high current is fed into a coil of wire, the resulting magnetic fields would (hopefully) be strong enough to observe disruption in other nearby electronics.

## Results

After some tuning of the width of the spark gap, I was able to get it to consistently disrupt the functionality of low-power electronic calculators.
When placed near these calculators, the voltage induced in the calculators' circuitry caused "ghost keystrokes" where numbers were being entered into the calculator's memory without the buttons being physically pressed.
It was also able to disrupt the LCD screen and make it display invalid characters when the coil was placed on top of it.

Overall, the project was a success! I even got a 100% for the project in my physics class too. My physics teacher was very impressed with the result.

One thing I didn't like about the project is that I never got to make a proper casing for the EMP device. I had designed the "guts" of the device, and they worked, but there was no nice container for it all.
I was trying to design a handheld device that contains all the parts but couldn't finalize a design ahead of the project's deadline, so I just had to demonstrate a video of the working prototype working at my house.

I also recognize that this was a somewhat dangerous project with the open spark gap and all that.
I wasn't too concerned with it at the time because even though the device looks and sounds scary when in operation, given the low power source I figured it wouldn't be fatal.
If I were to ever do a V2 of this project, I would for sure enclose that spark gap so that it doesn't pose any sort of risk.
