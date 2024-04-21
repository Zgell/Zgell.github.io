---
title: "PyTerminal"
start-date: 2022-09-14
end-date: 2022-09-22
date: 2022-09-22
status: "Essentially Complete"
categories: ["python", "qt"]
tags: post
description: "A simple terminal emulator written in Python and Qt."
public: true
---

## Intro

PyTerminal originally started as an experiment following some work I did at one of my previous internships.
In the internship, I was tasked with writing a program from scratch using Python and Qt to control a mechanical device through an Arduino and some control circuitry.
When I wrote this application, one of the features I included was a terminal that printed the different motor commands out in the GUI for the user to debug if needed.
This feature left me wondering what other ways you could use Qt to make terminal-like applications, and it ultimately led to me trying to figure out if a full terminal emulator was possible to write.
PyTerminal *is* that terminal emulator.

## Results

Realistically, this program **sucks** and you should not use this in any real capacity.
It is very buggy, adds no meaningful features over other terminal emulators and is just slow in general.
I created it to prove a point about the simplest possible way to create a terminal emulator.
It should be very obvious that any terminal emulator written in Python is probably not one you want to use, but in case it wasn't obvious, there you go.

[A link to the code can be found here.](https://github.com/Zgell/pyterminal)
