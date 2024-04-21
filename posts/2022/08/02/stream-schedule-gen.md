---
title: "Stream Schedule Generator"
start-date: 2022-09-14
end-date: 2022-09-22
date: 2022-09-22
status: "Complete"
categories: ["python", "twitch"]
tags: post
description: "A program I wrote for a friend to make stream scheduling easier."
public: true
---
## Intro

I have a friend who streams regularly on Twitch. He plays a variety of video games on his stream. To let his audience know what he plans to stream for the week, he puts out a schedule each week to let his audience know what to expect.
These schedules came in the form of a sort of infographic that he would post in his Discord server. He used to make these schedules manually each week and would spend 20-30 minutes on each one.

After talking about his schedules with him, I got the idea to try and write a program for him that would automate the heavy lifting of making these schedules. The key requirements were:

1. The program has to make it easier/faster to create the schedules.
2. Setup has to be very simple: as simple as running the program and entering in the information.
3. Has to be able to show the box art of the game(s) schedule for the week.
4. Has to be able to produce an image that's good to go as-is (ie. no other steps).

## Result

TODO

The project was a success! The program can create an entire schedule in about 15 seconds.

- Interacts with IGDB API to get the box art of any game
- Uses a template image I created from old schedules and fills them out with box art from IGDB
- Written in Python, but I used Py2EXE to convert it into a standalone EXE.
