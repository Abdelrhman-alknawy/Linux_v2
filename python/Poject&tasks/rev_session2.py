# my_set = {1,2,1,1,1,50,2,34,13,223,312}
# '''
# unique data type 
# un ordered data type 

# '''
# # my_set = {1.0, "hello ", (1,2,3),123,213}
# # print(my_set)
# # print(my_set)
# # my_set = {1,23,34,413}
# print(my_set.pop())
# # # print(my_set)
# # my_set.clear()
# # print(my_set)
# data = '''ITI
#             FAMILY
#           '''
# print(data)
# data = "&a&&saADSADAS-&&&&DA-SDAD aA&&&&"

# print(data.strip("&aA"))


# print(data.count("a"))
# # a = "a"
# # if  a in data:
# #  print("this is correct")
# # else :
# #   print("this is not correct ")
code = '''.code
demomain:
  REPEAT 20
	switch rv(nrandom, 9)	; generate a number between 0 and 8
	mov ecx, 7
	case 0
		print "case 0"
	case ecx				; in contrast to most other programming languages,
		print "case 7"		; the Masm32 switch allows "variable cases"
	case 1 .. 3
		.if eax==1
			print "case 1"
		.elseif eax==2
			print "case 2"
		.else
			print "cases 1 to 3: other"
		.endif
	case 4, 6, 8
		print "cases 4, 6 or 8"
	default
		mov ebx, 19		     ; print 20 stars
		.Repeat
			print "*"
			dec ebx
		.Until Sign?		 ; loop until the sign flag is set
	endsw
	print chr$(13, 10)
  ENDM
  exit
end demomain'''

print (code)