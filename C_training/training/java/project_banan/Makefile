# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/21 15:24:51 by ksharlen          #+#    #+#              #
#    Updated: 2019/06/21 19:48:02 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := javac
EXECUTE := java
CLASSES := build
KEY_FOLDER := src
PATH_SOURCE := $(KEY_FOLDER)/main/
MAIN := Class_main.java

all:
	$(CC) -d $(CLASSES) -cp $(KEY_FOLDER) $(PATH_SOURCE)$(MAIN)

ex:
	$(EXECUTE) -cp $(CLASSES) main/Class_main

jar:
	jar cf hello.jar build/main/Class_main.class build/main/Create_form.class