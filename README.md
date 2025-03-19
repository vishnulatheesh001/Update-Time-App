
## Qt Time Display Application

## Overview

This is a Qt-based GUI application that fetches and displays the current date and time. The application retrieves the time and date from an external C program (GetTime.exe). It allows users to manually fetch the date or time and also provides an option to display the time continuously using a clock update feature.

## Features

Fetch current time on button click

Fetch current date on button click

Start/Stop a live clock that updates every second

## Prerequisites

Qt Framework installed

GetTime.exe (compiled from a C program) placed in the correct directory

C++ compiler (if modifications are needed)

## Installation & Setup

Clone the repository:
```
git clone https://github.com/yourusername/QtTimeApp.git
cd QtTimeApp
```
Open the project in Qt Creator.

Ensure the GetTime.exe file is available at D:/Qt/UpdateTime/Ccode/ or update the path in MainWindow::GetTime() accordingly.

Build and run the project.

## Usage

Get Time Button: Displays the current time.

Get Date Button: Displays the current date.

Start Clock Button: Starts an automatic clock that updates every second.

Stop Clock Button: Stops the clock.
