#!/bin/bash -e

echo "Install Homebrew"

/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

echo "Install glfw3"
brew install homebrew/versions/glfw3

echo "Install pkg-config"
brew install pkg-config

echo "Done installing glfw3!"
