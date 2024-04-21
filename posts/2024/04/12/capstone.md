---
title: Engineering Capstone - C3 SD File System and Screen File Editor
start-date: 2024-01-01
end-date: 2024-04-12
date: 2024-04-12
status: "Complete"
categories: ["embedded-systems", "c++"]
tags: post
description: "The project(s) done for my engineering capstone."
public: true
---

The following is a recap of my capstone project for my computer engineering degree.
It will include many contents from the final report I wrote for the capstone as well as some of my own experiences over the 4 months we worked on it.

## Intro

For my capstone, my group partnered with [Eleven Engineering Inc](https://www.elevenengineering.com/).
Eleven Engineering Inc is a company based out of Edmonton, AB that focuses on semiconductors for wireless audio applications primarily.
Notably, they have created the "XInC2" processor - a multithreaded RISC-based 16-bit processor designed for their wireless audio applications.
At some point in time, Eleven Engineering collaborated with my university and gave them the rights to use their XInC2 CPU in electrical engineering capstone projects to "give back" to my university's community.
This resulted in a project called the "C3 board" (standing for "Credit Card Computer") - a single-board computer similar to a Raspberry Pi, but powered by the XInC2 CPU.
Effectively, it's an all-Canadian-made SBC, which is pretty fascinating.

However, as with any new computer system, the C3 board lacks a comprehensive software ecosystem.
The board is currently (as of 2024) extremely barebones - it lacks an operating system, and only the low-level driver code needed for bare minimum functionality exists.
If the goal of the C3 board is to be as versatile as similar boards like the Raspberry Pi, then it needs a solid software foundation in order to provide a wide range of functionality to users.
This is where my capstone comes into the picture.

My capstone group worked with Eleven Engineering as well as my university to develop two major components of the software ecosystem for the C3 board.
The first of the two is an **SD Card File System**, which enables the board to interface with SD cards stored in the board's SD slot.
This gives the board the ability to read from and write to files, which greatly enhances its functionality.

The other project, and the one I had more of a direct hand in the development in, is called the **"Screen File Editor"**.
It's a term coined by Eleven Engineering in the proposal documentation given to us that refers to a text-editor-like program that runs on the C3 board.
Specifically, it is designed to run with hardware specifically designed for the C3 board to allow you to edit files on the board without an external computer, at least when used in conjunction with the SD File System.

I should also mention that we weren't the only capstone group to work with the C3 board. There were two other groups to my knowledge, who worked on equally interesting projects such as a Python interpreter and some enhanced low-level routines.

## Design

TODO

## Conclusion

TODO
