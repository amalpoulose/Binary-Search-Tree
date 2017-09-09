outfile:add_tree.o main.o post_order.o in_order.o pre_order.o search.o delete_node.o
	cc add_tree.c main.c post_order.c in_order.c pre_order.c search.c delete_node.c -o outfile
add_tree.o:add_tree.c
	cc -c add_tree.c

main.o:main.c 
	cc -c main.c

post_order.o:post_order.c 
	cc -c post_order.c

in_order.o:in_order.c
	cc -c in_order.c

pre_order.o:pre_order.c
	cc -c pre_order.c

search.o:search.c
	cc -c search.c
delete_node.o:delete_node.c
	cc -c delete_node.c
