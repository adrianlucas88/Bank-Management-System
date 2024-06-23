CC = gcc
CFLAGS = -Iinclude
DEPS = include/auth.h include/account.h include/transaction.h
OBJ = src/main.o src/auth/login.o src/auth/register.o src/account/create_account.o src/account/view_account.o src/transaction/deposit.o src/transaction/withdrawal.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bank_management_system: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o bank_management_system
