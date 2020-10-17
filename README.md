# cpp_example_basic_math - Cpp Example code and Unit Test using CppUnit

![C++-CI](https://github.com/narethim/cpp_example_basic_math/workflows/C++-CI/badge.svg?branch=master)

## Prerequisite

* Java SDK Development
* Apache ant
* CppUnit library

## Directory structure

```sh

cpp_example_basic_math
  |
  + src ( cpp files and Makefile )
  |
  + test_cppunit
    |
    + src ( Unit Test files and Makefile )

```

## How to run it

```sh

cd cpp_example_basic_math

ant

ant run

ant clean

ant run-test

```

## How to run it remotely on a host created by Vagrant

```sh
# Install ansible role `geerlingguy.java`
ansible-galaxy install geerlingguy.java

# Bring up a `bento/ubuntu-20.04` VM
vagrant up
```

Connect to the VM

```sh
vagrant ssh
```
