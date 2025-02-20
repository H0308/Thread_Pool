bin=threadpool
src=$(wildcard *.cc)
obj=$(src:.cc=.o)

$(bin):$(obj)
	g++ -o $@ $^ -lpthread

%.o:%.cc
	g++ -c $< -o $@ -std=c++17

.PHONY:clean
clean:
	rm -f $(bin) $(obj)