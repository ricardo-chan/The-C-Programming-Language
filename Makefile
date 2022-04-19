CC = gcc
CFLAGS = -Wall -Wpedantic -Werror

SOURCES = $(wildcard Ch1/*.c)
BINS = $(SOURCES:.c=.out)

all: $(BINS)

Ch1/Ch1Ex01_HelloWorld.out: Ch1/Ch1Ex01_HelloWorld.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex02_HelloWorld.out:
	$(CC) -w $< -o $@

Ch1/Ch1Ex03_TemperatureConversion.out: Ch1/Ch1Ex03_TemperatureConversion.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex04_TemperatureConversion.out: Ch1/Ch1Ex04_TemperatureConversion.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex05_ReverseTempConversion.out: Ch1/Ch1Ex05_ReverseTempConversion.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex06_GetCharEOF.out: Ch1/Ch1Ex06_GetCharEOF.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex07_PrintEOF.out: Ch1/Ch1Ex07_PrintEOF.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex08_BlankTabsNewLines.out: Ch1/Ch1Ex08_BlankTabsNewLines.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex09_ReplaceBlanks.out: Ch1/Ch1Ex09_ReplaceBlanks.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex10_PrintTabsBackslashBackspace.out: Ch1/Ch1Ex10_PrintTabsBackslashBackspace.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex11_WordCountBugs.out: Ch1/Ch1Ex11_WordCountBugs.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex12_WordPerLine.out: Ch1/Ch1Ex12_WordPerLine.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex13_WordHistogram.out: Ch1/Ch1Ex13_WordHistogram.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex14_CharHistogram.out: Ch1/Ch1Ex14_CharHistogram.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex15_FunctionTempConversion.out: Ch1/Ch1Ex15_FunctionTempConversion.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/Ch1Ex16_LongestLine.out: Ch1/Ch1Ex16_LongestLine.o
	$(CC) $(CFLAGS) $< -o $@

Ch1/%.o: Ch1/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r Ch1/*.o
