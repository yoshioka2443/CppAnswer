#!/bin/sh

for num in `seq $1 $2`; do
  mkdir Unit$num
  echo "" >> ./Unit$num/main.cpp
done