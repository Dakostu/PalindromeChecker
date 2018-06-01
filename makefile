CC = gcc
TARGET = PalindromeChecker
FLAGS = -I.
SRCFOLDER = src

$(TARGET): $(SRCFOLDER)/palindrome.c $(SRCFOLDER)/main.c
	$(CC) $(SRCFOLDER)/palindrome.c $(SRCFOLDER)/main.c -o $(TARGET) $(FLAGS)


clean:
	-rm $(TARGET)
