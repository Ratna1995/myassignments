app : main.o count_words.o rem_comments.o search_string.o upper_lower.o write_struct.o
	gcc -o ./Out/app ./Out/*.o
	./Out/app
	
main.o : ./Source/main.c 
	gcc ./Source/main.c -Wall -c -o ./Out/main.o

count_words.o : ./Source/count_words.c 
	gcc ./Source/count_words.c -Wall -c -o ./Out/count_words.o

rem_comments.o : ./Source/rem_comments.c
	gcc ./Source/rem_comments.c -Wall -c -o ./Out/rem_comments.o

search_string.o : ./Source/search_string.c 
	gcc ./Source/search_string.c -Wall -c -o ./Out/search_string.o

upper_lower.o : ./Source/upper_lower.c
	gcc ./Source/upper_lower.c -Wall -c -o ./Out/upper_lower.o

write_struct.o : ./Source/write_struct.c
	gcc ./Source/write_struct.c -Wall -c -o ./Out/write_struct.o

clean : 
	rm -rf ./Out/*.o
