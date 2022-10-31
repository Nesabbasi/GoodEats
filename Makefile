CC=g++ --std=c++11 -Wall 

all: goodeats.out

goodeats.out: main.o response.o request.o utilities.o server.o route.o template_parser.o Goodeats.o User.o NormalUser.o Chef.o Recipes.o Shelves.o Rating.o exceptions.o Handler.o
	$(CC) main.o response.o request.o utilities.o server.o route.o template_parser.o Goodeats.o User.o NormalUser.o Chef.o Recipes.o Shelves.o Rating.o exceptions.o Handler.o -o goodeats.out
		
template_parser.o: utils/template_parser.cpp utils/template_parser.hpp utils/request.cpp utils/request.hpp utils/utilities.hpp utils/utilities.cpp
	$(CC) -c utils/template_parser.cpp -o template_parser.o

response.o: utils/response.cpp utils/response.hpp utils/include.hpp
	$(CC) -c utils/response.cpp -o response.o

request.o: utils/request.cpp utils/request.hpp utils/include.hpp utils/utilities.hpp
	$(CC) -c utils/request.cpp -o request.o

utilities.o: utils/utilities.cpp utils/utilities.hpp
	$(CC) -c utils/utilities.cpp -o utilities.o

server.o: server/server.cpp server/server.hpp server/route.hpp utils/utilities.hpp utils/response.hpp utils/request.hpp utils/include.hpp utils/template_parser.hpp utils/template_parser.cpp
	$(CC) -c server/server.cpp -o server.o

route.o: server/route.cpp server/route.hpp utils/utilities.hpp utils/response.hpp utils/request.hpp utils/include.hpp
	$(CC) -c server/route.cpp -o route.o

main.o : main.cpp Goodeats.hpp server/server.hpp utils/utilities.hpp utils/response.hpp utils/request.hpp utils/include.hpp
	$(CC) -c main.cpp -o main.o
	
Goodeats.o : Goodeats.hpp Goodeats.cpp User.hpp NormalUser.hpp Chef.hpp Recipes.hpp exceptions.hpp Handler.hpp
	$(CC) -c Goodeats.cpp -o Goodeats.o
	
User.o: User.hpp User.cpp NormalUser.hpp Chef.hpp Shelves.hpp Rating.hpp exceptions.hpp
	$(CC) -c User.cpp -o User.o
	
NormalUser.o: NormalUser.hpp NormalUser.cpp User.hpp
	$(CC) -c NormalUser.cpp -o NormalUser.o
	
Chef.o: Chef.hpp Chef.cpp User.hpp
	$(CC) -c Chef.cpp -o Chef.o
	
Recipes.o: Recipes.hpp Recipes.cpp User.hpp Rating.hpp exceptions.hpp
	$(CC) -c Recipes.cpp -o Recipes.o

Shelves.o: Shelves.hpp Shelves.cpp Recipes.hpp exceptions.hpp
	$(CC) -c Shelves.cpp -o Shelves.o

Rating.o: Rating.hpp Rating.cpp exceptions.hpp
	$(CC) -c Rating.cpp -o Rating.o

Handler.o: Handler.hpp Handler.cpp Goodeats.hpp Recipes.hpp exceptions.hpp server/server.hpp
	$(CC) -c Handler.cpp -o Handler.o
	
exceptions.o: exceptions.hpp exceptions.cpp
	$(CC) -c exceptions.cpp -o exceptions.o


.PHONY: clean
clean:
	rm -rf *.o *.out &> /dev/null
