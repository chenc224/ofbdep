#根据模板生成库文件；编译示例文件
.PHONY : all clean

all : simple

simple:simple.o ofbdep_data.o ofbdep_lib.o
	g++ -o $@ -g -Wall -Werror $^

ofbdep_data.c:ofbdep_data.template ../data/*.txt makec.py
	./makec.py
#	iconv -f utf8 -t gbk -o ofbdep_data.c ofbdep_data.c

%.o:%.c *.h
	g++ -c -g -Wall -Werror $<

clean:
	rm *.o simple
