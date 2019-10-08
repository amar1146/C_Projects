
list: main.o initialize_list.o add_element.o delete_element.o print_list.o
	gcc -o list main.o delete_element.o initialize_list.o print_list.o add_element.o

main.o: main.c
	gcc -c -g main.c

initialize_list.o: initialize_list.c
	gcc -c -g initialize_list.c

add_element.o: add_element.c
	gcc -c -g add_element.c

delete_element.o: delete_element.c
	gcc -c -g delete_element.c

print_list.o: print_list.c
	gcc -c -g print_list.c

