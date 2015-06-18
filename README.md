# API-C
Arthika's C-language API and basic c-language strategy that uses the API.

### Contents:
- main.c 			Arthika remote stub functions, do not modify
- strategy.c 		User strategy example, see output below 
- strategyAPI.h 	Arthika basic C API
- hftUtils_types.h	Arthika data types
- libhftLib.a		API library, binary file

Note: the binary files are Ubuntu 14.04 x86/64 bits

### Instructions:
- Pull repository contents
- Import project from Eclipse C/C++ Luna Version
- Clean & Build the example API-C project
- Execute: API-C -user user password -ip ArthikaCoreIP - port ArthikaCorePort

### Example:
The following Linux shell command executes the 'API-C' strategy that was previously compiled.
Arguments include the Arthika user ID, the IP address of the core strategy execution machine (127.0.0.1 or local host in this example) and port number.
The standard output provides the stratgey initial status.
```
jmg@JuBook:~/git/hft_strategies/API-C/Debug$ ./API-C -user 51 15 -ip 127.0.0.1 -port 1234
Command line: Adding user 51 for trading. Total users 1
Command line: Connecting to core IP address: 127.0.0.1
Command line: Connecting to core port: 1234
rStub: Subscribing to book address 234.0.57.209:38201
rStub: Setting SO_RCVBUF multicast buffer to 425984 bytes

Initializing strategy Id 51

List of Trading interfaces available:
Trading Interface Cantor_CNX_2, has index:0, Id:529 (and is OK)

List of Prime Brokers available:
Prime Broker Cantor, has index:0, Id:2001
	GBP/USD, security exposure:540000.000000, price:1.521950, decimal positions:5
	EUR, asset exposure:1000000.000000
	USD, asset exposure:-1511.000000
Prime Broker Velocity, has index:1, Id:2004
Prime Broker Baxter, has index:2, Id:2003
Prime Broker FXCM Pro, has index:3, Id:2007
Prime Broker LCG, has index:4, Id:2006
Prime Broker FxOne, has index:5, Id:2008
Prime Broker LMAX, has index:6, Id:2009

EUR/USD New Top of Book price Ask:110390, for tiIndex:0
	Price:110390, Liquidity:10000000, Trading I/F Id:529 Index:0
EUR/USD New Top of Book price Ask:110380, for tiIndex:0
	Price:110380, Liquidity:10000000, Trading I/F Id:529 Index:0
GBP_USD new book security price:1.524075, Asset prices: GBP:1.380909, USD:0.906064. Global Equity:999670.645797
GBP_USD new book security price:1.524025, Asset prices: GBP:1.380864, USD:0.906064. Global Equity:999646.182074
GBP_USD new book security price:1.523725, Asset prices: GBP:1.380655, USD:0.906105. Global Equity:999499.377053


Trade sent, GBP_USD Market Id:1. Number of trades Alive:1, First alive Id:1
	Full book, Quote:255, Price:152405, Liquidity:10000000, Trading I/F Id:529 Index:0
USD new asset exposure:-1521.000000 / -1521.000000
GBP/USD new security exposure:600000.000000, price:1.522160


Trade sent, type Limit Id:2. Number of trades Alive:1, First alive Id:2


Trade modified. Old Price:153405, new Price:153355, Status:2


Trade:2 cancelled
USD new asset exposure:-1521.000000 / -1521.000000
GBP/USD new security exposure:600000.000000, price:1.522160
EUR/USD New Top of Book price Ask:110385, for tiIndex:0
	Price:110385, Liquidity:100000, Trading I/F Id:529 Index:0

Trade Ask finished status:TRADE_STATE_CANCELED_BY_USER with filled Amount:0, average Price:0

Trade Bid finished status:TRADE_STATE_EXECUTED with filled Amount:60000, average Price:152405
Finishing strategy

```
