#!/bin/sh

FPC=/usr/local/lib/fpc/3.1.1/ppcrossarm
DEV=/Applications/Xcode.app/Contents/Developer

${FPC} -Cparmv7 -Cfvfpv3 -dIPHONEALL -FD${DEV} iPhoneAll.pas

