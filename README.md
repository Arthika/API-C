# API-C
Arthika's C-language API and basic c-language strategy that uses the API.

### Contents:
- main.c 			Arthika remote stub functions, do not modify
- strategy.c 		User strategy example, see output below 
- strategyAPI.h 	Arthika basic C API
- hftUtils_types.h	Arthika data types
- libhftLib.a		API library, binary file

Added Ta-Lib Technical Analisis Library directory, see http://ta-lib.org/
Added strategyExamples directoty with 3 examples, just copy any of them under scr directory and rename the example as strategy.c:
- strategyAPIFunctionsExample.c 
- strategyMA.c
- strategyMACD.c

Note: the binary files are Ubuntu 14.04 x86/64 bits

### Instructions:
- Pull repository contents
- Import project from Eclipse C/C++ Luna Version
- Clean & Build the example API-C project
- Execute: API-C -user user password -ip ArthikaCoreIP - port ArthikaCorePort


### Example API:
The following Linux shell command executes the 'API-C' strategy that was previously compiled.
Arguments include the Arthika user ID, the IP address of the core strategy execution machine (127.0.0.1 or local host in this example) and port number.
The standard output provides the stratgey initial status.
```
./API-C -user S101 P101 -ip 127.0.0.1 -port 1234

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

### Example MACD:
The following Linux shell command executes the 'API-C' strategy that was previously compiled.
Arguments include the Arthika user ID, the IP address of the core strategy execution machine (127.0.0.1 or local host in this example) and port number.
The standard output provides the stratgey initial status.
```
./API-C -user S101 P101 -ip 127.0.0.1 -port 1234
Initializing strategy Id 101
EUR/USD New Book price[0]:1.355890 
EUR/USD New Book price[1]:1.356120 
EUR/USD New Book price[2]:1.355660 
EUR/USD New Book price[3]:1.356090 
EUR/USD New Book price[4]:1.355860 
EUR/USD New Book price[5]:1.356060 
EUR/USD New Book price[6]:1.355680 
EUR/USD New Book price[7]:1.356090 
EUR/USD New Book price[8]:1.355860 
EUR/USD New Book price[9]:1.356075 
EUR/USD New Book price[10]:1.355855 
EUR/USD New Book price[11]:1.355645 
EUR/USD New Book price[12]:1.355855 
EUR/USD New Book price[13]:1.356075 
EUR/USD New Book price[14]:1.355645 
EUR/USD New Book price[15]:1.355790 
EUR/USD New Book price[16]:1.355670 
EUR/USD New Book price[17]:1.355775 
EUR/USD New Book price[18]:1.356100 
EUR/USD New Book price[19]:1.355690 
EUR/USD New Book price[20]:1.355780 
EUR/USD New Book price[21]:1.356150 
EUR/USD New Book price[22]:1.355680 
EUR/USD New Book price[23]:1.355760 
EUR/USD New Book price[24]:1.356130 
EUR/USD New Book price[25]:1.355645 
EUR/USD New Book price[26]:1.356130 
EUR/USD New Book price[27]:1.355725 
EUR/USD New Book price[28]:1.355645 
EUR/USD New Book price[29]:1.356110 
EUR/USD New Book price[30]:1.355635 
EUR/USD New Book price[31]:1.355725 
EUR/USD New Book price[32]:1.356120 
EUR/USD New Book price[33]:1.355725 
EUR/USD New Book price[34]:1.356130 
EUR/USD New Book price[35]:1.355635 
EUR/USD New Book price[36]:1.356130 
EUR/USD New Book price[37]:1.355740 
EUR/USD New Book price[38]:1.356125 
EUR/USD New Book price[39]:1.355635 
EUR/USD New Book price[40]:1.355740 
EUR/USD New Book price[41]:1.356125 
EUR/USD New Book price[42]:1.355750 
EUR/USD New Book price[43]:1.355670 
EUR/USD New Book price[44]:1.356125 
EUR/USD New Book price[45]:1.355680 
EUR/USD New Book price[46]:1.355750 
EUR/USD New Book price[47]:1.356125 
EUR/USD New Book price[48]:1.355680 
EUR/USD New Book price[49]:1.355740 
EUR/USD New Book price[50]:1.355670 
EUR/USD New Book price[51]:1.355740 
EUR/USD New Book price[52]:1.355635 
EUR/USD New Book price[53]:1.356120 
EUR/USD New Book price[54]:1.355610 
EUR/USD New Book price[55]:1.356140 
EUR/USD New Book price[56]:1.355740 
EUR/USD New Book price[57]:1.355610 
EUR/USD New Book price[58]:1.356140 
EUR/USD New Book price[59]:1.355740 
EUR/USD New Book price[60]:1.355595 
EUR/USD New Book price[61]:1.356120 
EUR/USD New Book price[62]:1.355740 
EUR/USD New Book price[63]:1.355620 
EUR/USD New Book price[64]:1.355725 
EUR/USD New Book price[65]:1.356120 
EUR/USD New Book price[66]:1.355645 
EUR/USD New Book price[67]:1.355725 
EUR/USD New Book price[68]:1.355660 
EUR/USD New Book price[69]:1.356125 
EUR/USD New Book price[70]:1.355760 
EUR/USD New Book price[71]:1.356125 
EUR/USD New Book price[72]:1.355670 
EUR/USD New Book price[73]:1.355700 
EUR/USD New Book price[74]:1.356130 
EUR/USD New Book price[75]:1.355645 
EUR/USD New Book price[76]:1.355750 
EUR/USD New Book price[77]:1.356140 
EUR/USD New Book price[78]:1.355645 
EUR/USD New Book price[79]:1.355750 
EUR/USD New Book price[80]:1.355670 
EUR/USD New Book price[81]:1.356150 
EUR/USD New Book price[82]:1.355620 
EUR/USD New Book price[83]:1.355750 
EUR/USD New Book price[84]:1.356150 
EUR/USD New Book price[85]:1.355595 
EUR/USD New Book price[86]:1.355765 
EUR/USD New Book price[87]:1.356165 
EUR/USD New Book price[88]:1.356195 
EUR/USD New Book price[89]:1.355790 
EUR/USD New Book price[90]:1.355620 
EUR/USD New Book price[91]:1.356215 
EUR/USD New Book price[92]:1.355620 
EUR/USD New Book price[93]:1.355780 
EUR/USD New Book price[94]:1.355610 
EUR/USD New Book price[95]:1.356240 
EUR/USD New Book price[96]:1.355800 
EUR/USD New Book price[97]:1.355610 
EUR/USD New Book price[98]:1.356280 
EUR/USD New Book price[99]:1.355780 
EUR/USD New Book price[100]:1.356255 
EUR/USD New Book price[101]:1.355590 
EUR/USD New Book price[102]:1.355775 
EUR/USD New Book price[103]:1.355595 
EUR/USD New Book price[104]:1.355780 
EUR/USD New Book price[105]:1.356280 
EUR/USD New Book price[106]:1.355620 
EUR/USD New Book price[107]:1.355780 
EUR/USD New Book price[108]:1.355595 
EUR/USD New Book price[109]:1.356300 
EUR/USD New Book price[110]:1.355570 
EUR/USD New Book price[111]:1.355780 
EUR/USD New Book price[112]:1.355580 
EUR/USD New Book price[113]:1.356295 
EUR/USD New Book price[114]:1.355595 
EUR/USD New Book price[115]:1.355760 
EUR/USD New Book price[116]:1.355600 
EUR/USD New Book price[117]:1.356295 
EUR/USD New Book price[118]:1.355760 
EUR/USD New Book price[119]:1.355635 
EUR/USD New Book price[120]:1.355665 
EUR/USD New Book price[121]:1.355620 
EUR/USD New Book price[122]:1.356310 
EUR/USD New Book price[123]:1.355595 
EUR/USD New Book price[124]:1.356330 
EUR/USD New Book price[125]:1.355680 
EUR/USD New Book price[126]:1.355590 
EUR/USD New Book price[127]:1.356320 
EUR/USD New Book price[128]:1.355680 
EUR/USD New Book price[129]:1.355580 
EUR/USD New Book price[130]:1.356300 
EUR/USD New Book price[131]:1.355555 
EUR/USD New Book price[132]:1.355680 
EUR/USD New Book price[133]:1.355555 
EUR/USD New Book price[134]:1.356330 
EUR/USD New Book price[135]:1.355555 
EUR/USD New Book price[136]:1.355680 
EUR/USD New Book price[137]:1.356300 
EUR/USD New Book price[138]:1.355685 
EUR/USD New Book price[139]:1.356320 
EUR/USD New Book price[140]:1.355540 
EUR/USD New Book price[141]:1.356310 
EUR/USD New Book price[142]:1.355685 
EUR/USD New Book price[143]:1.355580 
EUR/USD New Book price[144]:1.356330 
EUR/USD New Book price[145]:1.355685 
EUR/USD New Book price[146]:1.356310 
EUR/USD New Book price[147]:1.355595 
EUR/USD New Book price[148]:1.355700 
EUR/USD New Book price[149]:1.355610 
EUR/USD New Book price[150]:1.356295 
EUR/USD New Book price[151]:1.355700 
EUR/USD New Book price[152]:1.355600 
EUR/USD New Book price[153]:1.356290 
EUR/USD New Book price[154]:1.355580 
EUR/USD New Book price[155]:1.355725 
EUR/USD New Book price[156]:1.356270 
EUR/USD New Book price[157]:1.355595 
EUR/USD New Book price[158]:1.355710 
EUR/USD New Book price[159]:1.356290 
EUR/USD New Book price[160]:1.355620 
EUR/USD New Book price[161]:1.356300 
EUR/USD New Book price[162]:1.355620 
EUR/USD New Book price[163]:1.355685 
EUR/USD New Book price[164]:1.356300 
EUR/USD New Book price[165]:1.355700 
EUR/USD New Book price[166]:1.355620 
EUR/USD New Book price[167]:1.355700 
EUR/USD New Book price[168]:1.356300 
EUR/USD New Book price[169]:1.355660 
EUR/USD New Book price[170]:1.356300 
EUR/USD New Book price[171]:1.355635 
EUR/USD New Book price[172]:1.355665 
EUR/USD New Book price[173]:1.355620 
EUR/USD New Book price[174]:1.355665 
EUR/USD New Book price[175]:1.356330 
EUR/USD New Book price[176]:1.355590 
EUR/USD New Book price[177]:1.356345 
EUR/USD New Book price[178]:1.355680 
EUR/USD New Book price[179]:1.355600 
EUR/USD New Book price[180]:1.355680 
EUR/USD New Book price[181]:1.356320 
EUR/USD New Book price[182]:1.355600 
EUR/USD New Book price[183]:1.356295 
EUR/USD New Book price[184]:1.355680 
EUR/USD New Book price[185]:1.355595 
EUR/USD New Book price[186]:1.355690 
EUR/USD New Book price[187]:1.356295 
EUR/USD New Book price[188]:1.355690 
EUR/USD New Book price[189]:1.356295 
EUR/USD New Book price[190]:1.355595 
EUR/USD New Book price[191]:1.355685 
EUR/USD New Book price[192]:1.356320 
EUR/USD New Book price[193]:1.355660 
EUR/USD New Book price[194]:1.355570 
EUR/USD New Book price[195]:1.355660 
EUR/USD New Book price[196]:1.356330 
EUR/USD New Book price[197]:1.355680 
EUR/USD New Book price[198]:1.356360 
EUR/USD New Book price[199]:1.355580 
EUR/USD New Book price[200]:1.355680 
EUR/USD New Book price[201]:1.356360 
EUR/USD New Book price[202]:1.355580 
EUR/USD New Book price[203]:1.356360 
EUR/USD New Book price[204]:1.355690 
EUR/USD New Book price[205]:1.356380 
EUR/USD New Book price[206]:1.355580 
EUR/USD New Book price[207]:1.355740 
EUR/USD New Book price[208]:1.355580 
EUR/USD New Book price[209]:1.356400 
EUR/USD New Book price[210]:1.355710 
EUR/USD New Book price[211]:1.355590 
EUR/USD New Book price[212]:1.356435 
EUR/USD New Book price[213]:1.355555 
EUR/USD New Book price[214]:1.355725 
EUR/USD New Book price[215]:1.356400 
EUR/USD New Book price[216]:1.355760 
EUR/USD New Book price[217]:1.356380 
EUR/USD New Book price[218]:1.355540 
EUR/USD New Book price[219]:1.355740 
EUR/USD New Book price[220]:1.356400 
EUR/USD New Book price[221]:1.355510 
EUR/USD New Book price[222]:1.355765 
EUR/USD New Book price[223]:1.355490 
EUR/USD New Book price[224]:1.356400 
EUR/USD New Book price[225]:1.355490 
EUR/USD New Book price[226]:1.355790 
EUR/USD New Book price[227]:1.356410 
EUR/USD New Book price[228]:1.355815 
EUR/USD New Book price[229]:1.355490 
EUR/USD New Book price[230]:1.356410 
EUR/USD New Book price[231]:1.355800 
EUR/USD New Book price[232]:1.355505 
EUR/USD New Book price[233]:1.356400 
EUR/USD New Book price[234]:1.355520 
EUR/USD New Book price[235]:1.355815 
EUR/USD New Book price[236]:1.355500 
EUR/USD New Book price[237]:1.355830 
EUR/USD New Book price[238]:1.356385 
EUR/USD New Book price[239]:1.355800 
EUR/USD New Book price[240]:1.355490 
EUR/USD New Book price[241]:1.356380 
EUR/USD New Book price[242]:1.355465 
EUR/USD New Book price[243]:1.355850 
EUR/USD New Book price[244]:1.356400 
EUR/USD New Book price[245]:1.355450 
EUR/USD New Book price[246]:1.356410 
EUR/USD New Book price[247]:1.355850 
EUR/USD New Book price[248]:1.355450 
EUR/USD New Book price[249]:1.355880 
EUR/USD New Book price[250]:1.356385 
EUR/USD New Book price[251]:1.355870 
EUR/USD New Book price[252]:1.355450 
EUR/USD New Book price[253]:1.356390 
EUR/USD New Book price[254]:1.355905 
EUR/USD New Book price[255]:1.355425 
Output Begin:33, Length:223 Price[33] MACD=-0.000012, Signal=-0.000011, Histogram=-0.000001  
Price[34] MACD=-0.000017, Signal=-0.000012, Histogram=-0.000006  
Price[35] MACD=-0.000027, Signal=-0.000015, Histogram=-0.000012  
Price[36] MACD=0.000003, Signal=-0.000011, Histogram=0.000014  
Price[37] MACD=-0.000003, Signal=-0.000010, Histogram=0.000007  
Price[38] MACD=0.000022, Signal=-0.000003, Histogram=0.000025  
Price[39] MACD=0.000005, Signal=-0.000002, Histogram=0.000007  
Price[40] MACD=-0.000006, Signal=-0.000003, Histogram=-0.000004  
Price[41] MACD=0.000019, Signal=0.000002, Histogram=0.000018  
Price[42] MACD=0.000001, Signal=0.000002, Histogram=-0.000001  
Price[43] MACD=-0.000006, Signal=0.000000, Histogram=-0.000006  
Price[44] MACD=0.000020, Signal=0.000004, Histogram=0.000016  
Price[45] MACD=0.000001, Signal=0.000004, Histogram=-0.000002  
Price[46] MACD=-0.000005, Signal=0.000002, Histogram=-0.000007  
Price[47] MACD=-0.000017, Signal=-0.000002, Histogram=-0.000015  
Price[48] MACD=0.000012, Signal=0.000001, Histogram=0.000012  
Price[49] MACD=-0.000007, Signal=-0.000001, Histogram=-0.000006  
Price[50] MACD=-0.000012, Signal=-0.000003, Histogram=-0.000009  
Price[51] MACD=0.000017, Signal=0.000001, Histogram=0.000016  
Price[52] MACD=-0.000006, Signal=-0.000000, Histogram=-0.000005  
Price[53] MACD=-0.000009, Signal=-0.000002, Histogram=-0.000007  
Price[54] MACD=0.000020, Signal=0.000002, Histogram=0.000017  
Price[55] MACD=0.000045, Signal=0.000011, Histogram=0.000034  
Price[56] MACD=0.000031, Signal=0.000015, Histogram=0.000016  
Price[57] MACD=0.000007, Signal=0.000013, Histogram=-0.000006  
Price[58] MACD=0.000035, Signal=0.000018, Histogram=0.000018  
Price[59] MACD=0.000010, Signal=0.000016, Histogram=-0.000006  
Price[60] MACD=0.000002, Signal=0.000013, Histogram=-0.000011  
Price[61] MACD=-0.000017, Signal=0.000007, Histogram=-0.000024  
Price[62] MACD=0.000018, Signal=0.000009, Histogram=0.000009  
Price[63] MACD=0.000010, Signal=0.000009, Histogram=0.000001  
Price[64] MACD=-0.000011, Signal=0.000005, Histogram=-0.000016  
Price[65] MACD=0.000026, Signal=0.000009, Histogram=0.000016  
Price[66] MACD=0.000014, Signal=0.000010, Histogram=0.000004  
Price[67] MACD=0.000043, Signal=0.000017, Histogram=0.000026  
Price[68] MACD=0.000012, Signal=0.000016, Histogram=-0.000004  
Price[69] MACD=0.000003, Signal=0.000013, Histogram=-0.000011  
Price[70] MACD=-0.000019, Signal=0.000007, Histogram=-0.000026  
Price[71] MACD=-0.000021, Signal=0.000001, Histogram=-0.000023  
Price[72] MACD=0.000017, Signal=0.000004, Histogram=0.000013  
Price[73] MACD=-0.000006, Signal=0.000002, Histogram=-0.000008  
Price[74] MACD=-0.000011, Signal=-0.000000, Histogram=-0.000010  
Price[75] MACD=-0.000029, Signal=-0.000006, Histogram=-0.000023  
Price[76] MACD=0.000013, Signal=-0.000002, Histogram=0.000015  
Price[77] MACD=-0.000013, Signal=-0.000004, Histogram=-0.000008  
Price[78] MACD=-0.000016, Signal=-0.000007, Histogram=-0.000009  
Price[79] MACD=-0.000034, Signal=-0.000012, Histogram=-0.000022  
Price[80] MACD=0.000009, Signal=-0.000008, Histogram=0.000017  
Price[81] MACD=-0.000013, Signal=-0.000009, Histogram=-0.000004  
Price[82] MACD=-0.000017, Signal=-0.000010, Histogram=-0.000006  
Price[83] MACD=-0.000032, Signal=-0.000015, Histogram=-0.000018  
Price[84] MACD=0.000011, Signal=-0.000010, Histogram=0.000021  
Price[85] MACD=0.000002, Signal=-0.000007, Histogram=0.000010  
Price[86] MACD=-0.000014, Signal=-0.000009, Histogram=-0.000006  
Price[87] MACD=-0.000025, Signal=-0.000012, Histogram=-0.000013  
Price[88] MACD=-0.000037, Signal=-0.000017, Histogram=-0.000020  
Price[89] MACD=0.000010, Signal=-0.000012, Histogram=0.000021  
Price[90] MACD=-0.000011, Signal=-0.000012, Histogram=0.000000  
Price[91] MACD=0.000031, Signal=-0.000003, Histogram=0.000034  
Price[92] MACD=0.000012, Signal=0.000000, Histogram=0.000012  
Price[93] MACD=-0.000010, Signal=-0.000002, Histogram=-0.000008  
Price[94] MACD=0.000031, Signal=0.000005, Histogram=0.000026  
Price[95] MACD=0.000012, Signal=0.000006, Histogram=0.000006  
Price[96] MACD=-0.000011, Signal=0.000003, Histogram=-0.000014  
Price[97] MACD=0.000028, Signal=0.000008, Histogram=0.000020  
Price[98] MACD=-0.000001, Signal=0.000006, Histogram=-0.000007  
Price[99] MACD=-0.000014, Signal=0.000002, Histogram=-0.000016  
Price[100] MACD=-0.000033, Signal=-0.000005, Histogram=-0.000028  
Price[101] MACD=0.000013, Signal=-0.000001, Histogram=0.000015  
Price[102] MACD=-0.000012, Signal=-0.000004, Histogram=-0.000009  
Price[103] MACD=-0.000022, Signal=-0.000007, Histogram=-0.000015  
Price[104] MACD=0.000020, Signal=-0.000002, Histogram=0.000022  
Price[105] MACD=0.000004, Signal=-0.000001, Histogram=0.000005  
Price[106] MACD=0.000042, Signal=0.000008, Histogram=0.000034  
Price[107] MACD=0.000009, Signal=0.000008, Histogram=0.000001  
Price[108] MACD=0.000044, Signal=0.000015, Histogram=0.000029  
Price[109] MACD=0.000021, Signal=0.000016, Histogram=0.000005  
Price[110] MACD=-0.000005, Signal=0.000012, Histogram=-0.000017  
Price[111] MACD=0.000034, Signal=0.000017, Histogram=0.000018  
Price[112] MACD=0.000013, Signal=0.000016, Histogram=-0.000003  
Price[113] MACD=0.000046, Signal=0.000022, Histogram=0.000024  
Price[114] MACD=0.000015, Signal=0.000021, Histogram=-0.000006  
Price[115] MACD=-0.000002, Signal=0.000016, Histogram=-0.000018  
Price[116] MACD=-0.000022, Signal=0.000009, Histogram=-0.000030  
Price[117] MACD=0.000017, Signal=0.000010, Histogram=0.000007  
Price[118] MACD=0.000000, Signal=0.000008, Histogram=-0.000008  
Price[119] MACD=-0.000021, Signal=0.000002, Histogram=-0.000023  
Price[120] MACD=0.000018, Signal=0.000006, Histogram=0.000012  
Price[121] MACD=-0.000009, Signal=0.000003, Histogram=-0.000012  
Price[122] MACD=-0.000018, Signal=-0.000002, Histogram=-0.000017  
Price[123] MACD=0.000018, Signal=0.000002, Histogram=0.000016  
Price[124] MACD=-0.000007, Signal=0.000001, Histogram=-0.000008  
Price[125] MACD=-0.000018, Signal=-0.000003, Histogram=-0.000015  
Price[126] MACD=0.000020, Signal=0.000002, Histogram=0.000019  
Price[127] MACD=-0.000004, Signal=0.000001, Histogram=-0.000004  
Price[128] MACD=0.000032, Signal=0.000007, Histogram=0.000025  
Price[129] MACD=0.000005, Signal=0.000007, Histogram=-0.000001  
Price[130] MACD=-0.000010, Signal=0.000003, Histogram=-0.000014  
Price[131] MACD=0.000026, Signal=0.000008, Histogram=0.000019  
Price[132] MACD=0.000007, Signal=0.000008, Histogram=-0.000001  
Price[133] MACD=-0.000015, Signal=0.000003, Histogram=-0.000018  
Price[134] MACD=-0.000025, Signal=-0.000002, Histogram=-0.000023  
Price[135] MACD=0.000015, Signal=0.000001, Histogram=0.000014  
Price[136] MACD=-0.000005, Signal=-0.000000, Histogram=-0.000005  
Price[137] MACD=0.000031, Signal=0.000006, Histogram=0.000025  
Price[138] MACD=0.000005, Signal=0.000006, Histogram=-0.000001  
Price[139] MACD=-0.000013, Signal=0.000002, Histogram=-0.000015  
Price[140] MACD=-0.000030, Signal=-0.000004, Histogram=-0.000026  
Price[141] MACD=-0.000039, Signal=-0.000011, Histogram=-0.000028  
Price[142] MACD=0.000006, Signal=-0.000008, Histogram=0.000014  
Price[143] MACD=-0.000017, Signal=-0.000009, Histogram=-0.000007  
Price[144] MACD=0.000026, Signal=-0.000002, Histogram=0.000028  
Price[145] MACD=0.000006, Signal=-0.000001, Histogram=0.000006  
Price[146] MACD=-0.000017, Signal=-0.000004, Histogram=-0.000013  
Price[147] MACD=-0.000028, Signal=-0.000009, Histogram=-0.000019  
Price[148] MACD=0.000015, Signal=-0.000004, Histogram=0.000019  
Price[149] MACD=-0.000009, Signal=-0.000005, Histogram=-0.000004  
Price[150] MACD=0.000028, Signal=0.000002, Histogram=0.000026  
Price[151] MACD=0.000007, Signal=0.000003, Histogram=0.000005  
Price[152] MACD=-0.000016, Signal=-0.000001, Histogram=-0.000015  
Price[153] MACD=-0.000026, Signal=-0.000006, Histogram=-0.000020  
Price[154] MACD=0.000015, Signal=-0.000002, Histogram=0.000016  
Price[155] MACD=-0.000002, Signal=-0.000002, Histogram=-0.000000  
Price[156] MACD=0.000033, Signal=0.000005, Histogram=0.000028  
Price[157] MACD=0.000004, Signal=0.000005, Histogram=-0.000001  
Price[158] MACD=-0.000011, Signal=0.000002, Histogram=-0.000013  
Price[159] MACD=0.000028, Signal=0.000007, Histogram=0.000021  
Price[160] MACD=0.000005, Signal=0.000007, Histogram=-0.000001  
Price[161] MACD=-0.000020, Signal=0.000001, Histogram=-0.000021  
Price[162] MACD=-0.000032, Signal=-0.000005, Histogram=-0.000027  
Price[163] MACD=0.000013, Signal=-0.000002, Histogram=0.000014  
Price[164] MACD=-0.000005, Signal=-0.000002, Histogram=-0.000002  
Price[165] MACD=0.000036, Signal=0.000005, Histogram=0.000031  
Price[166] MACD=0.000005, Signal=0.000005, Histogram=-0.000000  
Price[167] MACD=-0.000011, Signal=0.000002, Histogram=-0.000013  
Price[168] MACD=0.000031, Signal=0.000008, Histogram=0.000023  
Price[169] MACD=0.000001, Signal=0.000007, Histogram=-0.000005  
Price[170] MACD=0.000040, Signal=0.000013, Histogram=0.000027  
Price[171] MACD=0.000016, Signal=0.000014, Histogram=0.000003  
Price[172] MACD=0.000053, Signal=0.000022, Histogram=0.000031  
Price[173] MACD=0.000017, Signal=0.000021, Histogram=-0.000004  
Price[174] MACD=0.000001, Signal=0.000017, Histogram=-0.000015  
Price[175] MACD=-0.000024, Signal=0.000009, Histogram=-0.000032  
Price[176] MACD=0.000023, Signal=0.000012, Histogram=0.000011  
Price[177] MACD=0.000003, Signal=0.000010, Histogram=-0.000006  
Price[178] MACD=-0.000021, Signal=0.000004, Histogram=-0.000025  
Price[179] MACD=0.000027, Signal=0.000008, Histogram=0.000019  
Price[180] MACD=-0.000005, Signal=0.000006, Histogram=-0.000011  
Price[181] MACD=-0.000017, Signal=0.000001, Histogram=-0.000018  
Price[182] MACD=0.000027, Signal=0.000006, Histogram=0.000021  
Price[183] MACD=0.000011, Signal=0.000007, Histogram=0.000004  
Price[184] MACD=0.000047, Signal=0.000015, Histogram=0.000032  
Price[185] MACD=0.000009, Signal=0.000014, Histogram=-0.000005  
Price[186] MACD=-0.000006, Signal=0.000010, Histogram=-0.000016  
Price[187] MACD=0.000035, Signal=0.000015, Histogram=0.000020  
Price[188] MACD=-0.000004, Signal=0.000011, Histogram=-0.000015  
Price[189] MACD=-0.000014, Signal=0.000006, Histogram=-0.000020  
Price[190] MACD=-0.000044, Signal=-0.000004, Histogram=-0.000040  
Price[191] MACD=0.000006, Signal=-0.000002, Histogram=0.000008  
Price[192] MACD=-0.000028, Signal=-0.000007, Histogram=-0.000021  
Price[193] MACD=-0.000030, Signal=-0.000012, Histogram=-0.000018  
Price[194] MACD=0.000018, Signal=-0.000006, Histogram=0.000024  
Price[195] MACD=0.000008, Signal=-0.000003, Histogram=0.000011  
Price[196] MACD=-0.000026, Signal=-0.000008, Histogram=-0.000018  
Price[197] MACD=0.000021, Signal=-0.000002, Histogram=0.000023  
Price[198] MACD=0.000010, Signal=0.000001, Histogram=0.000009  
Price[199] MACD=-0.000023, Signal=-0.000004, Histogram=-0.000019  
Price[200] MACD=0.000022, Signal=0.000001, Histogram=0.000021  
Price[201] MACD=-0.000012, Signal=-0.000002, Histogram=-0.000011  
Price[202] MACD=-0.000016, Signal=-0.000004, Histogram=-0.000011  
Price[203] MACD=-0.000043, Signal=-0.000012, Histogram=-0.000031  
Price[204] MACD=-0.000038, Signal=-0.000017, Histogram=-0.000021  
Price[205] MACD=0.000011, Signal=-0.000012, Histogram=0.000022  
Price[206] MACD=0.000002, Signal=-0.000009, Histogram=0.000011  
Price[207] MACD=-0.000029, Signal=-0.000013, Histogram=-0.000016  
Price[208] MACD=0.000017, Signal=-0.000007, Histogram=0.000024  
Price[209] MACD=-0.000019, Signal=-0.000009, Histogram=-0.000010  
Price[210] MACD=-0.000017, Signal=-0.000011, Histogram=-0.000006  
Price[211] MACD=0.000029, Signal=-0.000003, Histogram=0.000032  
Price[212] MACD=-0.000011, Signal=-0.000005, Histogram=-0.000007  
Price[213] MACD=0.000034, Signal=0.000003, Histogram=0.000031  
Price[214] MACD=0.000024, Signal=0.000007, Histogram=0.000017  
Price[215] MACD=-0.000016, Signal=0.000003, Histogram=-0.000018  
Price[216] MACD=-0.000012, Signal=-0.000000, Histogram=-0.000012  
Price[217] MACD=0.000031, Signal=0.000006, Histogram=0.000025  
Price[218] MACD=0.000023, Signal=0.000009, Histogram=0.000014  
Price[219] MACD=-0.000017, Signal=0.000004, Histogram=-0.000021  
Price[220] MACD=0.000027, Signal=0.000009, Histogram=0.000019  
Price[221] MACD=0.000023, Signal=0.000012, Histogram=0.000011  
Price[222] MACD=-0.000019, Signal=0.000005, Histogram=-0.000025  
Finishing strategy

```
