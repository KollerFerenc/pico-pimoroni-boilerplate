# Pico C++ Boilerplate Project <!-- omit in toc -->

This project is intended as a starting point for working with the Pico SDK and Pimoroni Pico libraries in C++.

- [Before you start](#before-you-start)
- [Preparing your build environment](#preparing-your-build-environment)
- [Grab the Pimoroni libraries](#grab-the-pimoroni-libraries)
- [Clone this boilerplate](#clone-this-boilerplate)
- [Prepare your project](#prepare-your-project)
- [Pick your LICENSE](#pick-your-license)

## Before you start

It's easier if you make a `pico` directory or similar in which you keep the SDK, Pimoroni Libraries and your projects alongside each other. This makes it easier to include libraries.

## Preparing your build environment

Install build requirements:

```bash
sudo apt update
sudo apt install cmake gcc-arm-none-eabi build-essential
```

And the Pico SDK:

```
git clone https://github.com/raspberrypi/pico-sdk
cd pico-sdk
git submodule update --init
export PICO_SDK_PATH=`pwd`
cd ../
```

The `PICO_SDK_PATH` set above will only last the duration of your session.

You should should ensure your `PICO_SDK_PATH` environment variable is set by `~/.profile`:

```
export PICO_SDK_PATH="/path/to/pico-sdk"
```

## Grab the Pimoroni libraries

```
git clone https://github.com/pimoroni/pimoroni-pico
```

You should should ensure your `PIMORONI_PICO_PATH` environment variable is set by `~/.profile`:

```
export PIMORONI_PICO_PATH="/path/to/pimoroni-pico-sdk"
```

## Clone this boilerplate

```
git clone https://github.com/KollerFerenc/pico-boilerplate
cd pico-boilerplate
```

## Prepare your project

Edit `CMakeLists.txt` and follow the instructions, you should make sure you:

1. edit your project name
2. include the libraries you need
2. link the libraries to your project

## Pick your LICENSE

Included is a copy of BSD 3-Clause License to match that used in Raspberry Pi's Pico SDK and Pico Examples. You should review this and check it's appropriate for your project before publishing your code.
