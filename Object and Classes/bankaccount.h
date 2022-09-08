#pragma once

class BankAccount  
{
private:
	// atribut no Rekening
	int AccountNumber;
	// atribut SaldoRekening
	int AccountBalance;

public:
	// constructor
	BankAccount(int accNum, int accBalance);
	// method untuk menyimpan uang
	void Deposit(int money);
	// method untuk mengambil uang
	void Withdrawal(int money);
	// method untuk menampilkan informas SaldoRekening
	void ShowCurrentBalance();
	// method untuk memberikan current balance
	int GetCurrentBalance();
};
