#----------------------------
# Author : Sandeep
#---------------------------
CC := g++ -std=c++11
RM := rm -f
LD := ld
TAG := ctags -R
CSCOPE := cscope -d
AR := ar rvs
MAKEDEPEND:=makedepend

ifeq ($(release),on)
BUILD_TYPE := release
else
BUILD_TYPE := debug
endif

ifeq ($(release),on)
CC_FLAGS := -Wall -Werror -pedantic -pthread -O3
else
CC_FLAGS := -Wall -Werror -pedantic -pthread -ggdb3
endif
