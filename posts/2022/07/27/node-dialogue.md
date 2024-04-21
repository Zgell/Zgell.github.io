---
title: "Node-based Dialogue System in Rust"
start-date: 2022-07-21
end-date: 2022-07-27
date: 2022-07-27
status: "Partially Complete"
categories: ["rust"]
tags: post
description: "A basic implementation of a cool node-based dialogue system I came up with."
public: true
---
Really, this project was just an excuse to learn Rust. Rust is such a cool programming language to me, but admittedly I don't have a lot of uses for it yet. Around the time I wanted to learn Rust, I also was thinking about interesting ways to structure dialog in RPG video games. I envisioned a system that used a type of "dynamic" dialog that changed in response to the way the user interacts with the NPC. I thought that the best way to do this was a tree-style system that uses a variety of types of nodes to control the flow of dialogue.

This project was really interesting to implement in Rust because the way Rust handles object-oriented style programming is very different. Instead of classes and subclasses, Rust uses a struct system that is similar to C, but also has "traits" that fill in some of the missing object-oriented stuff.
