.data
mensagem: .asciiz "Ol�, Mundo!\n"

 .text 
 .globl main
 
  main:
  	li $v0, 4
  	la $a0, mensagem
  	syscall
  	li $v0, 10
  	syscall 